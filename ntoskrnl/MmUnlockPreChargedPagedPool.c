/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140A2DD70
 * Callers:
 *     HalpMcUpdateUnlock @ 0x140519854 (HalpMcUpdateUnlock.c)
 *     MiDeleteSubsectionLargePages @ 0x14064C7F8 (MiDeleteSubsectionLargePages.c)
 *     PopFreeHiberContext @ 0x1409855F0 (PopFreeHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x1402A441C (MiUnlockCodePage.c)
 */

__int64 __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiUnlockCodePage(PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 0);
}
