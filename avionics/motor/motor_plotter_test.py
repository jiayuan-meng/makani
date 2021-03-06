# Copyright 2020 Makani Technologies LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import unittest

from makani.avionics.motor import motor_plotter  # pylint: disable=unused-import


class DummyTest(unittest.TestCase):

  def testDidAnythingBreakWhenImportingTheModule(self):
    # This is a poor test, but it's better than nothing.
    pass


if __name__ == '__main__':
  unittest.main()
