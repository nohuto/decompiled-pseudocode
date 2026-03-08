/*
 * XREFs of ZwQuerySystemInformationEx @ 0x140415090
 * Callers:
 *     PopCheckShutdownMarker @ 0x140B6B05C (PopCheckShutdownMarker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformationEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
