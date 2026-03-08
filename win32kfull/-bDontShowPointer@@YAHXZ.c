/*
 * XREFs of ?bDontShowPointer@@YAHXZ @ 0x1C001F284
 * Callers:
 *     GreMovePointer @ 0x1C001E270 (GreMovePointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bDontShowPointer(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8672LL) != 0;
}
