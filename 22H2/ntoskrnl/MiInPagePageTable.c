/*
 * XREFs of MiInPagePageTable @ 0x14028C440
 * Callers:
 *     MiUserFault @ 0x14020D730 (MiUserFault.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14020EEC0 (MiDispatchFault.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021B950 (MiVadPureReserve.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x140289E54 (MiIncreaseUsedPtesCount.c)
 *     MiFillPteHierarchy @ 0x14028CAF0 (MiFillPteHierarchy.c)
 *     MiGetClosestImplicitNode @ 0x14028CB50 (MiGetClosestImplicitNode.c)
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MiIsVadLarge @ 0x1402988E4 (MiIsVadLarge.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x1402AD4F0 (MiGetLeafVa.c)
 *     MiCheckUserVirtualAddress @ 0x1402AF090 (MiCheckUserVirtualAddress.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiAdvanceFaultList @ 0x1402E40E8 (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiIsStoreProcess @ 0x1403334C0 (MiIsStoreProcess.c)
 *     MiLeapPrefetch @ 0x14037BA1C (MiLeapPrefetch.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiGetLargeVadMappingIndex @ 0x1405485E8 (MiGetLargeVadMappingIndex.c)
 *     MiInsertLargeVadMapping @ 0x1405486E0 (MiInsertLargeVadMapping.c)
 *     MiLargePageFault @ 0x1405489F4 (MiLargePageFault.c)
 */

__int64 __fastcall MiInPagePageTable(ULONG_PTR *a1, int a2)
{
  __int64 v2; // rbx
  signed __int64 v4; // r15
  ULONG_PTR v5; // rcx
  _KPROCESS *Process; // r8
  ULONG_PTR v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  ULONG_PTR v10; // r9
  unsigned __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rax
  _KPROCESS *v14; // r8
  unsigned int v15; // r14d
  ULONG_PTR v16; // r10
  unsigned __int64 v17; // rbx
  __int64 result; // rax
  struct _KTHREAD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  ULONG_PTR v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm1
  unsigned int ClosestImplicitNode; // eax
  __int64 v35; // rax
  char v36; // cl
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // rcx
  int LargeVadMappingIndex; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  _QWORD *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  _DWORD *v50; // r9
  __int64 UsedPtesHandle; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  ULONG_PTR v54; // xmm1_8
  int v55; // ecx
  unsigned int v56; // [rsp+30h] [rbp-D0h] BYREF
  int v57; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v58; // [rsp+38h] [rbp-C8h]
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-B8h]
  _KPROCESS *v61; // [rsp+50h] [rbp-B0h]
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v63; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v64; // [rsp+68h] [rbp-98h]
  _OWORD v65[9]; // [rsp+70h] [rbp-90h] BYREF

  v2 = a2;
  v4 = 0LL;
  v57 = a2;
  v56 = 0;
  v62 = 0LL;
  memset(v65, 0, 0x88uLL);
  v5 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  v61 = Process;
  v64 = &Process[1].ActiveProcessorsPadding[6];
  if ( (v5 & 1) == 0 || (v60 = v5 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v60 = 0LL;
  v7 = a1[v2 + 3];
  v63 = a1 + 7;
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v38 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      v39 = v8 | 0x20;
      if ( (v38 & 0x20) == 0 )
        v39 = *(_QWORD *)v7;
      v8 = v39;
      if ( (v38 & 0x42) != 0 )
        v8 = v39 | 0x42;
    }
  }
  v9 = 0xFFFFF68000000000uLL;
  v10 = *a1;
  v11 = v10;
  v58 = *a1;
  if ( v10 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v11 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v11 = (__int64)(v11 << 25) >> 16;
    }
    while ( v11 >= 0xFFFFF68000000000uLL );
    v58 = v11;
  }
  v12 = 0LL;
  if ( v10 > 0x7FFFFFFEFFFFLL )
  {
    if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v15 = 4;
      goto LABEL_19;
    }
LABEL_18:
    v15 = 24;
LABEL_19:
    v56 = v15;
    goto LABEL_20;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v13 = v10 & 0x7FFFFFFFF000LL;
    if ( (v10 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      v4 = qword_140C4DE38;
      v15 = 1;
      goto LABEL_19;
    }
    if ( v13 == qword_140C4DE48 && v13 )
    {
      v4 = qword_140C4DE40;
      v15 = 1;
      goto LABEL_19;
    }
  }
  v14 = KeGetCurrentThread()->ApcState.Process;
  v12 = *(_QWORD *)&v14[1].Spare2[23];
  if ( !v12 )
  {
LABEL_17:
    v12 = 0LL;
    Process = v61;
    goto LABEL_18;
  }
  v9 = v10 >> 12;
  if ( v10 >> 12 < (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
    || v9 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
  {
    v12 = *(_QWORD *)&v14[1].Spare2[15];
    if ( v12 )
    {
      while ( 1 )
      {
        if ( v9 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
        {
          v12 = *(_QWORD *)(v12 + 8);
        }
        else
        {
          if ( v9 >= (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) )
          {
            *(_QWORD *)&v14[1].Spare2[23] = v12;
            goto LABEL_49;
          }
          v12 = *(_QWORD *)v12;
        }
        if ( !v12 )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
LABEL_49:
  v35 = MiCheckUserVirtualAddress(v10, &v56);
  Process = v61;
  v4 = v35;
  v11 = v58;
  v15 = v56;
LABEL_20:
  if ( !v8 )
  {
    v16 = *a1;
    v17 = v60;
    if ( *a1 >= 0xFFFF800000000000uLL )
    {
      if ( v60 )
        return 3221226548LL;
      if ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL && a1[2] != v60 )
        KeBugCheckEx(0x50u, *a1, a1[1], v7, 6uLL);
    }
    if ( v15 == 24 )
    {
      if ( v16 - 0x10000 <= 0x7FFFFFFDFFFFLL && !v12 && (a1[1] & 2) != 0 )
      {
        if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          KeBugCheckEx(0x1Au, 0x4477uLL, v16, 0LL, 0LL);
        if ( (unsigned int)MiIsStoreProcess(Process, v9, Process, v10) )
          KeBugCheckEx(0x1Au, 0x4478uLL, v16, 0LL, 0LL);
      }
      if ( v16 <= 0x7FFFFFFEFFFFLL && v12 && v17 )
      {
        LeafVa = MiGetLeafVa(v7 + 8, v9, Process, v10);
        if ( LeafVa >= v41 )
        {
          MiLeapPrefetch(v17, LeafVa);
        }
        else
        {
          ++*(_QWORD *)(v17 + 24);
          *(_QWORD *)(v17 + 32) = 0LL;
        }
        *(_BYTE *)(v17 + 1) = 1;
      }
      return 3221225477LL;
    }
    if ( v12 && (*(_DWORD *)(v12 + 48) & 0x100000) != 0 && v60 )
    {
      if ( ((v42 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v15 >> 3 != 3) || (v15 & 7) == 0) && v15 >> 3 != 1
        || (*(_DWORD *)(v42 + 80) & 0x4000) == 0 )
      {
        MiAdvanceFaultList(v42);
        return 3221226548LL;
      }
    }
    v19 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10];
    if ( v19 )
    {
      if ( v60 && *(_QWORD *)(v60 + 56) != v60 + 56 )
        return 3221226548LL;
      if ( v19 != KeGetCurrentThread() )
      {
        *((_DWORD *)a1 + 20) |= 4u;
        return 3221226548LL;
      }
      v15 = v56;
    }
    if ( v60 != 0 && v12 != 0 && (unsigned int)MiIsVadLarge(v12) )
    {
      MiLeapPrefetch(
        v17,
        (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF)
      + 4096);
      result = 3221226548LL;
      *(_BYTE *)(v17 + 1) = 1;
      return result;
    }
    if ( v12 && (*(_BYTE *)(v12 + 48) & 0x70) == 0x50 && !(unsigned int)MiVadPureReserve(v12) )
    {
      LargeVadMappingIndex = MiGetLargeVadMappingIndex(v12, *a1);
      if ( v57 == LargeVadMappingIndex )
      {
        if ( !(unsigned int)MiInsertLargeVadMapping(*a1, v4, LargeVadMappingIndex, v7, v15) )
        {
          v46 = v63;
          LOBYTE(v44) = 17;
          MiReleaseFaultState(v63, v44, 0LL);
          MmAccessFault(0LL, v4, 0, 0LL);
          v47 = (__int64)v64;
          *((_BYTE *)v46 + 13) &= ~1u;
          *((_BYTE *)v46 + 12) = MiLockWorkingSetShared(v47, v48, v49, v50);
          return 3221226548LL;
        }
        if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v58 <= 0x7FFFFFFEFFFFLL )
        {
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v52, v53);
        }
        result = MiLargePageFault(a1, v7, v45);
        if ( (int)result < 0 )
          return result;
        return 3221226548LL;
      }
      v11 = v58;
    }
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && v11 <= 0x7FFFFFFEFFFFLL )
    {
      v20 = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
      v59 = 0;
      v24 = v20;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v59, v21, v22, v23);
        while ( *(__int64 *)(v24 + 24) < 0 );
      }
      *(_QWORD *)(v24 + 16) ^= ((unsigned int)*(_QWORD *)(v24 + 16) ^ ((unsigned int)*(_QWORD *)(v24 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MmIsAddressValidEx(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL);
    }
    v25 = MiSwizzleInvalidPte(128LL);
    if ( !(unsigned int)MiPteInShadowRange(v7, v26) )
      goto LABEL_40;
    if ( !(unsigned int)MiPteHasShadow(v27, v9, Process, v28) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v25 & 1) != 0 )
      {
        v25 |= 0x8000000000000000uLL;
      }
LABEL_40:
      *(_QWORD *)v7 = v25;
      goto LABEL_41;
    }
    if ( !HIBYTE(word_140C4E008) && (v25 & 1) != 0 )
      v25 |= 0x8000000000000000uLL;
    *(_QWORD *)v7 = v25;
    MiWritePteShadow(v7, v25);
  }
LABEL_41:
  v29 = a1[2];
  v30 = *((_OWORD *)a1 + 1);
  v65[0] = *(_OWORD *)a1;
  v65[1] = v30;
  v31 = *((_OWORD *)a1 + 3);
  v65[2] = *((_OWORD *)a1 + 2);
  v65[3] = v31;
  v32 = *((_OWORD *)a1 + 5);
  v65[4] = *((_OWORD *)a1 + 4);
  v65[5] = v32;
  LODWORD(v65[5]) = 0;
  v33 = *((_OWORD *)a1 + 7);
  v65[6] = *((_OWORD *)a1 + 6);
  *(_QWORD *)&v65[8] = a1[16];
  v65[7] = v33;
  if ( (v29 & 1) != 0 )
  {
    v36 = *(_BYTE *)(v29 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (unsigned __int8)(v36 - 1) <= 2u || v36 == 5 )
      *(_QWORD *)&v65[1] = 0LL;
  }
  ClosestImplicitNode = MiGetClosestImplicitNode(a1[1] >> 57, v9, Process);
  *(_QWORD *)&v65[0] = (__int64)(v7 << 25) >> 16;
  *((_QWORD *)&v65[0] + 1) = ((unsigned __int64)ClosestImplicitNode << 57) | 2;
  *((_QWORD *)&v65[5] + 1) = v12;
  MiFillPteHierarchy(*(_QWORD *)&v65[0], (char *)&v65[1] + 8);
  result = MiDispatchFault((__int64)v65, &v62);
  if ( (_DWORD)result == -1073532109 )
  {
    if ( (v65[5] & 0x40) != 0 )
      *(_DWORD *)(v62 + 192) |= 0x40000u;
    result = MiIssueHardFault(v65);
  }
  if ( (BYTE5(v65[4]) & 1) != 0 )
  {
    v54 = *((_QWORD *)&v65[4] + 1);
    *(_OWORD *)(a1 + 7) = *(_OWORD *)((char *)&v65[3] + 8);
    a1[9] = v54;
  }
  if ( (int)result >= 0 )
  {
    if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
      return 0LL;
    v55 = 3;
    while ( (*(_QWORD *)a1[v57 + 3] & 1LL) != 0 )
    {
      if ( v55 != v57 )
      {
        if ( --v55 )
          continue;
      }
      return 0LL;
    }
    return 3221226548LL;
  }
  return result;
}
