/*
 * XREFs of MiProtectLargeKernelHalRange @ 0x14080A3F0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiInitializeTbFlushList @ 0x14036C25C (MiInitializeTbFlushList.c)
 *     MiGetPdeAddress @ 0x14036C27C (MiGetPdeAddress.c)
 *     MiRewritePteWithLockBit @ 0x140371830 (MiRewritePteWithLockBit.c)
 *     MiUnlockPageTable @ 0x140371878 (MiUnlockPageTable.c)
 *     MiLockPageTable @ 0x140371890 (MiLockPageTable.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiComputeDriverProtection @ 0x14080A918 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectLargeKernelHalRange(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // r14d
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 PdeAddress; // r13
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rbx
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  unsigned __int64 ValidPte; // rax
  __int64 v16; // [rsp+20h] [rbp-118h] BYREF
  int v17[48]; // [rsp+30h] [rbp-108h] BYREF

  memset(v17, 0, 0xB8uLL);
  MiInitializeTbFlushList((__int64)v17, 0, 20);
  v6 = MiComputeDriverProtection(0LL, a3);
  PteAddress = 0LL;
  PdeAddress = MiGetPdeAddress(a2);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v11 = MiGetPdeAddress(a1);
  if ( v11 < PdeAddress )
  {
    v12 = v6 | 0xA4000000;
    while ( 1 )
    {
      if ( !PteAddress )
        goto LABEL_7;
      if ( (v11 & 0xFFF) == 0 )
        break;
LABEL_5:
      v16 = MI_READ_PTE_LOCK_FREE(v11);
      v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
      ValidPte = MiMakeValidPte(v11, (v13 >> 12) & 0xFFFFFFFFFFLL, v12);
      MiRewritePteWithLockBit((__int64)AnyMultiplexedVm, (__int64 *)v11, ValidPte);
      v11 += 8LL;
      if ( v11 >= PdeAddress )
        goto LABEL_6;
    }
    MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
LABEL_7:
    PteAddress = MiGetPteAddress(v11);
    MiLockPageTable((__int64)AnyMultiplexedVm, PteAddress);
    goto LABEL_5;
  }
LABEL_6:
  MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  MiInsertTbFlushEntry((__int64)v17, a1, (a2 - a1) >> 21, 1u);
  MiFlushTbList(v17);
  return 0LL;
}
