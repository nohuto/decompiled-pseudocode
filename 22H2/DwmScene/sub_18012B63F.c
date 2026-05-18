/*
 * XREFs of sub_18012B63F @ 0x18012B63F
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __noreturn sub_18012B63F()
{
  sub_1801163DC(&qword_18020DDF0, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
  throw;
}
