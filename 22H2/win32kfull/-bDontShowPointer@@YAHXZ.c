/*
 * XREFs of ?bDontShowPointer@@YAHXZ @ 0x1C00769A4
 * Callers:
 *     GreMovePointer @ 0x1C0078400 (GreMovePointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bDontShowPointer(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8672LL) != 0;
}
