/*
 * XREFs of ZwQueryInformationByName @ 0x14041D0C0
 * Callers:
 *     SdbpGetFileTimestamp @ 0x140A4E9A4 (SdbpGetFileTimestamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationByName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
