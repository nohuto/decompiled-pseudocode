/*
 * XREFs of MiSwitchKstackPages @ 0x14062D6E8
 * Callers:
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiStackTheftIsr @ 0x14062D4D0 (MiStackTheftIsr.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402194A8 (MiSetPfnIdentity.c)
 *     MiCopyPfnEntryEx @ 0x140219D80 (MiCopyPfnEntryEx.c)
 */

signed __int64 __fastcall MiSwitchKstackPages(__int64 a1, __int128 *a2)
{
  MiCopyPfnEntryEx(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  return MiSetPfnIdentity(a1, 2);
}
