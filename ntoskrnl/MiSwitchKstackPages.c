/*
 * XREFs of MiSwitchKstackPages @ 0x14062B268
 * Callers:
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiStackTheftIsr @ 0x14062B050 (MiStackTheftIsr.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140213930 (MiCopyPfnEntryEx.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 */

signed __int64 __fastcall MiSwitchKstackPages(__int64 a1, __int128 *a2)
{
  MiCopyPfnEntryEx(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  return MiSetPfnIdentity(a1, 2);
}
