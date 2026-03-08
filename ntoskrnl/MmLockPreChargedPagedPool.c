/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140A2DC90
 * Callers:
 *     HalpMcUpdateLock @ 0x1405197FC (HalpMcUpdateLock.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 1);
}
