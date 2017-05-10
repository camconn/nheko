/*
 * nheko Copyright (C) 2017  Konstantinos Sideris <siderisk@auth.gr>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MESSAGE_EVENT_NOTICE_H
#define MESSAGE_EVENT_NOTICE_H

#include <QJsonObject>

#include "Deserializable.h"

namespace matrix
{
namespace events
{
namespace messages
{
class Notice : public Deserializable
{
public:
	void deserialize(const QJsonObject &obj) override;
};
}  // namespace messages
}  // namespace events
}  // namespace matrix

#endif  // MESSAGE_EVENT_NOTICE_H