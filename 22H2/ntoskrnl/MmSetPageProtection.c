/*
 * XREFs of MmSetPageProtection @ 0x1403796F0
 * Callers:
 *     sub_1403E9C70 @ 0x1403E9C70 (sub_1403E9C70.c)
 *     MmAllocateIsrStack @ 0x14079FD68 (MmAllocateIsrStack.c)
 *     KeWriteProtectProcessorState @ 0x14099ED90 (KeWriteProtectProcessorState.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     VslpIumPhase0Initialize @ 0x140A8F5C8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x1402900EC (MiLockPageAndSetDirty.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v7; // r9
  char v8; // di
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 ValidPte; // rax
  __int64 v12; // rbx
  _KPROCESS *v13; // rdx
  BOOL v14; // r14d
  int v15; // edi
  __int64 v16; // rax
  _DWORD *v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  _QWORD v24[2]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v25[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v25, 0, 0xB8uLL);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  v8 = ProtectionMask;
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  ValidPte = MiMakeValidPte(v9, 0LL, ProtectionMask | 0xA0000000, v7);
  v25[3] = 0LL;
  LODWORD(v25[1]) = 20;
  v12 = ValidPte;
  MiInsertTbFlushEntry((__int64)v25, a1, v10, 0);
  if ( v10 )
  {
    v14 = MiPteInShadowRange((unsigned __int64)v24);
    v15 = v8 & 4;
    do
    {
      v16 = MI_READ_PTE_LOCK_FREE(v9);
      v24[0] = v16;
      v18 = v16;
      if ( v14
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)v24 >> 3) & 0x1FF)) & 0x20) != 0 )
            v18 = v16 | 0x20;
        }
      }
      v19 = (v18 >> 12) & 0xFFFFFFFFFLL;
      v20 = (v19 << 12) | v12 & 0xFFFF000000000FFFuLL;
      v21 = v20;
      if ( v15 )
      {
        v20 |= 0x42uLL;
        if ( (v24[0] & 0x42) == 0 )
          v20 = v21;
      }
      else if ( ((*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        MiLockPageAndSetDirty(48 * v19 - 0x58000000000LL, 0LL, v19, v17);
      }
      v12 = v20 | 0x20;
      MiWriteValidPteNewProtection(v9, v12);
      v9 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  MiFlushTbList((__int64)v25, v13);
  return 1;
}
