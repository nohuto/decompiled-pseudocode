/*
 * XREFs of ZwQueryInformationByName @ 0x140414D30
 * Callers:
 *     SdbpGetFileTimestamp @ 0x140A4BCD4 (SdbpGetFileTimestamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationByName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
