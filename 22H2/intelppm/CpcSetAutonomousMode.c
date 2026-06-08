/*
 * XREFs of CpcSetAutonomousMode @ 0x1C00091B0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0008BB0 (WriteGenAddrMaybeHiddenEx.c)
 */

void __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  WriteGenAddrMaybeHiddenEx(*a1, (_BYTE *)(a1[14] + 368), a2 != 0);
}
