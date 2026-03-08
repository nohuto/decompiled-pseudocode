/*
 * XREFs of MiInPagePageTable @ 0x140345FA0
 * Callers:
 *     MiResolvePageTablePage @ 0x1402689F0 (MiResolvePageTablePage.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x140225600 (MiCheckVirtualAddress.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14026A900 (MiDispatchFault.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsVadLarge @ 0x1402899E4 (MiIsVadLarge.c)
 *     MiNodeFromFaultPacket @ 0x14028B000 (MiNodeFromFaultPacket.c)
 *     MiIncreaseUsedPtesCount @ 0x14029F850 (MiIncreaseUsedPtesCount.c)
 *     MiReleaseFaultState @ 0x1402A2FD4 (MiReleaseFaultState.c)
 *     MiCheckFatalAccessViolation @ 0x1402FCEDC (MiCheckFatalAccessViolation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiFillPteHierarchy @ 0x140333AE0 (MiFillPteHierarchy.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiGetUsedPtesHandle @ 0x140346CA0 (MiGetUsedPtesHandle.c)
 *     MiGetClosestImplicitNode @ 0x140346FCC (MiGetClosestImplicitNode.c)
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiAdvanceFaultList @ 0x140363F9C (MiAdvanceFaultList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiLeapPrefetch @ 0x14062F4D4 (MiLeapPrefetch.c)
 *     MiGetLargeVadMappingIndex @ 0x140643AE4 (MiGetLargeVadMappingIndex.c)
 *     MiInsertLargeVadMapping @ 0x140643BA8 (MiInsertLargeVadMapping.c)
 *     MiLargePageFault @ 0x140643EB8 (MiLargePageFault.c)
 */

__int64 __fastcall MiInPagePageTable(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r14
  _KPROCESS *Process; // r13
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  ULONG_PTR v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rsi
  struct _KTHREAD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v23; // eax
  int ClosestImplicitNode; // eax
  __int64 result; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // cl
  __int64 v29; // rax
  _BYTE *v30; // rdx
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  int LargeVadMappingIndex; // r14d
  ULONG_PTR v37; // rbx
  _QWORD *v38; // rsi
  __int64 v39; // rcx
  __int64 UsedPtesHandle; // rax
  ULONG_PTR v41; // rdx
  __int64 v42; // xmm1_8
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v45; // [rsp+38h] [rbp-C8h] BYREF
  int v46; // [rsp+3Ch] [rbp-C4h]
  int v47; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 LeafVa; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v49; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  _QWORD *v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  _OWORD v54[8]; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v55[9]; // [rsp+100h] [rbp+0h] BYREF

  v2 = a2;
  v46 = a2;
  v44 = 0LL;
  v45 = 0;
  v49 = 0LL;
  memset(v55, 0, 0x88uLL);
  memset((char *)&v54[1] + 8, 0, 0x68uLL);
  v54[0] = 0LL;
  v4 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v4 & 1) == 0 || (v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v6 != 1) )
    v6 = 0LL;
  v7 = a1[v2 + 3];
  v52 = a1 + 7;
  v53 = v2;
  v8 = MI_READ_PTE_LOCK_FREE(v7);
  LeafVa = MiGetLeafVa(*a1);
  BugCheckParameter1 = MiCheckVirtualAddress(v9, &v45, &v44);
  if ( v8 )
  {
    v12 = v44;
    if ( v44 )
      MiUnlockVadTree(1, 0x11u);
  }
  else
  {
    v10 = *a1;
    if ( *a1 >= 0xFFFF800000000000uLL )
    {
      if ( v6 )
        return 3221226548LL;
      if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v29 = a1[2];
        if ( v29 )
        {
          v30 = (_BYTE *)(v29 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( (v29 & 1) == 0 || *v30 != 7 && *v30 != 8 )
            KeBugCheckEx(0x50u, *a1, a1[1], v7, 6uLL);
        }
      }
    }
    v11 = v45;
    if ( v45 == 24 )
    {
      v31 = v44;
      MiCheckFatalAccessViolation(v10, v44, a1[1], (__int64)Process);
      if ( v31 )
        MiUnlockVadTree(1, 0x11u);
      if ( *a1 <= 0x7FFFFFFEFFFFuLL && v31 && v6 )
      {
        v32 = MiGetLeafVa(v7 + 8);
        if ( v32 >= v33 )
        {
          MiLeapPrefetch(v6, v32);
        }
        else
        {
          ++*(_QWORD *)(v6 + 24);
          *(_QWORD *)(v6 + 32) = 0LL;
        }
        *(_BYTE *)(v6 + 1) = 1;
      }
      return 3221225477LL;
    }
    v12 = v44;
    if ( v44 && (*(_DWORD *)(v44 + 48) & 0x200000) != 0 && v6 )
    {
      if ( ((v34 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v50 = v34, v45 >> 3 != 3) || (v45 & 7) == 0) && v45 >> 3 != 1
        || (*(_DWORD *)(v34 + 80) & 0x4000) == 0 )
      {
        MiUnlockVadTree(1, 0x11u);
        MiAdvanceFaultList(v50);
        return 3221226548LL;
      }
    }
    v13 = (struct _KTHREAD *)Process[1].Affinity.StaticBitmap[10];
    if ( v13 )
    {
      if ( v6 && *(_QWORD *)(v6 + 56) != v6 + 56 )
      {
        if ( v44 )
          MiUnlockVadTree(1, 0x11u);
        return 3221226548LL;
      }
      if ( v13 != KeGetCurrentThread() )
      {
        if ( v44 )
          MiUnlockVadTree(1, 0x11u);
        *((_DWORD *)a1 + 20) |= 4u;
        return 3221226548LL;
      }
      v12 = v44;
      v11 = v45;
    }
    if ( v12 )
    {
      if ( v6 && MiIsVadLarge(v12) )
      {
        v35 = ((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF;
        MiUnlockVadTree(1, 0x11u);
        MiLeapPrefetch(v6, v35 + 4096);
        result = 3221226548LL;
        *(_BYTE *)(v6 + 1) = 1;
        return result;
      }
      if ( (*(_BYTE *)(v12 + 48) & 0x70) == 0x50 && !MiVadPureReserve(v12) )
      {
        LargeVadMappingIndex = MiGetLargeVadMappingIndex(v12, *a1);
        if ( v46 == LargeVadMappingIndex )
        {
          *(_QWORD *)v7 = MiSwizzleInvalidPte(128LL);
          MiUnlockVadTree(1, 0x11u);
          BugCheckParameter4 = v11;
          v37 = BugCheckParameter1;
          if ( (unsigned int)MiInsertLargeVadMapping(
                               *a1,
                               BugCheckParameter1,
                               LargeVadMappingIndex,
                               v7,
                               BugCheckParameter4) )
          {
            if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
            {
              UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
              MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
            }
            result = MiLargePageFault(a1, v7);
            if ( (int)result >= 0 )
              return 3221226548LL;
          }
          else
          {
            v38 = v52;
            v39 = (__int64)v52;
            *(_QWORD *)v7 = ZeroPte;
            MiReleaseFaultState(v39, 0x11u, 0LL);
            MmAccessFault(0LL, v37, 0, 0LL);
            *((_BYTE *)v38 + 13) &= ~1u;
            *((_BYTE *)v38 + 12) = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
            return 3221226548LL;
          }
          return result;
        }
      }
    }
    *(_QWORD *)v7 = MiSwizzleInvalidPte(128LL);
    if ( v12 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                        + 284));
      v12 = v44;
    }
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
    {
      v14 = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
      v47 = 0;
      v15 = v14;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      *(_QWORD *)(v15 + 16) ^= ((unsigned int)*(_QWORD *)(v15 + 16) ^ ((unsigned int)*(_QWORD *)(v15 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MmIsAddressValidEx(*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL);
      v12 = v44;
    }
  }
  v16 = *((_OWORD *)a1 + 1);
  v55[0] = *(_OWORD *)a1;
  v17 = *((_OWORD *)a1 + 2);
  v55[1] = v16;
  v18 = *((_OWORD *)a1 + 3);
  v55[2] = v17;
  v19 = *((_OWORD *)a1 + 4);
  v55[3] = v18;
  v20 = *((_OWORD *)a1 + 5);
  v55[4] = v19;
  v21 = *((_OWORD *)a1 + 6);
  v55[5] = v20;
  v22 = *((_OWORD *)a1 + 7);
  LODWORD(v55[5]) = 0;
  v55[6] = v21;
  *(_QWORD *)&v55[8] = a1[16];
  v55[7] = v22;
  v23 = MiNodeFromFaultPacket((__int64)a1);
  ClosestImplicitNode = MiGetClosestImplicitNode(v23);
  if ( (a1[2] & 1) != 0 )
  {
    v28 = *(_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v28 == 2 )
    {
      LODWORD(v54[4]) = ClosestImplicitNode;
      *(_QWORD *)&v54[0] = (__int64)(v7 << 25) >> 16;
      *((_QWORD *)&v54[0] + 1) = 4096LL;
      *(_QWORD *)&v55[1] = (char *)&v54[1] + 9;
      BYTE8(v54[1]) = 2;
      *(_QWORD *)&v54[2] = v54;
      *((_QWORD *)&v54[2] + 1) = 1LL;
    }
    else if ( v28 == 1 || v28 == 3 || v28 == 5 )
    {
      *(_QWORD *)&v55[1] = 0LL;
    }
  }
  *((_QWORD *)&v55[0] + 1) = 2LL;
  *(_QWORD *)&v55[0] = (__int64)(v7 << 25) >> 16;
  *((_QWORD *)&v55[5] + 1) = v12;
  MiFillPteHierarchy(*(unsigned __int64 *)&v55[0], (unsigned __int64 *)&v55[1] + 1);
  result = MiDispatchFault((__int64)v55, &v49);
  if ( (_DWORD)result == -1073532109 )
  {
    v41 = v49;
    if ( (v55[5] & 0x20) != 0 )
      *(_DWORD *)(v49 + 192) |= 0x40000u;
    result = MiIssueHardFault((__int64)v55, v41, v26, v27);
  }
  if ( (BYTE5(v55[4]) & 1) != 0 )
  {
    v42 = *((_QWORD *)&v55[4] + 1);
    *(_OWORD *)(a1 + 7) = *(_OWORD *)((char *)&v55[3] + 8);
    a1[9] = v42;
  }
  if ( (int)result >= 0 )
  {
    if ( (*((_BYTE *)a1 + 69) & 1) != 0 && (*(_BYTE *)a1[v53 + 3] & 1) == 0 )
      return 3221226548LL;
    return 0LL;
  }
  return result;
}
