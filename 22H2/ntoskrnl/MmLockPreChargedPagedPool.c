/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140777640
 * Callers:
 *     HalpMcUpdateLock @ 0x1403877E4 (HalpMcUpdateLock.c)
 *     MiCreatePagingFileMap @ 0x14061C968 (MiCreatePagingFileMap.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 1u);
}
