/*
 * XREFs of MmSetPageProtection @ 0x1403BCCE0
 * Callers:
 *     sub_1403EBEF0 @ 0x1403EBEF0 (sub_1403EBEF0.c)
 *     HvpProtectBinPartial @ 0x1407A4030 (HvpProtectBinPartial.c)
 *     MmAllocateIsrStack @ 0x14080AFF0 (MmAllocateIsrStack.c)
 *     KeWriteProtectProcessorState @ 0x140A8E420 (KeWriteProtectProcessorState.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     VslpIumPhase0Initialize @ 0x140B903AC (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x1402110B8 (MiLockPageAndSetDirty.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  char v7; // si
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v11; // rbx
  int v12; // esi
  char v13; // di
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v19[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v19, 0, 0xB8uLL);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  v7 = ProtectionMask;
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x8000) != 0 )
    return 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  ValidPte = MiMakeValidPte(v8, 0LL, ProtectionMask | 0xA0000000);
  v19[3] = 0LL;
  LODWORD(v19[1]) = 20;
  v11 = ValidPte;
  MiInsertTbFlushEntry((__int64)v19, a1, v9, 0);
  if ( v9 )
  {
    v12 = v7 & 4;
    do
    {
      v18 = MI_READ_PTE_LOCK_FREE(v8);
      v13 = v18;
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFFLL;
      v15 = (v14 << 12) | v11 & 0xFFF0000000000FFFuLL;
      v16 = v15;
      if ( v12 )
      {
        v15 |= 0x42uLL;
        if ( (v13 & 0x42) == 0 )
          v15 = v16;
      }
      else if ( v14 <= qword_140C65820 && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        MiLockPageAndSetDirty(48 * v14 - 0x220000000000LL, 0);
      }
      v11 = v15 | 0x20;
      MiWriteValidPteNewProtection(v8, v11);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  MiFlushTbList((int *)v19);
  return 1;
}
