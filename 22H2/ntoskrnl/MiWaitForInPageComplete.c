/*
 * XREFs of MiWaitForInPageComplete @ 0x14029B880
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14027D218 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140234490 (RtlAvlRemoveNode.c)
 *     MiValidateInPage @ 0x14023AEE0 (MiValidateInPage.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiIsRetryIoStatus @ 0x140255144 (MiIsRetryIoStatus.c)
 *     PfHardFaultLog @ 0x14026DE20 (PfHardFaultLog.c)
 *     MiDereferenceControlAreaProbe @ 0x140278130 (MiDereferenceControlAreaProbe.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     ExReleaseSpinLockExclusive @ 0x1402BC380 (ExReleaseSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiStoreFaultComplete @ 0x140325DE0 (MiStoreFaultComplete.c)
 *     MiPrefetchRestOfCluster @ 0x14032AA04 (MiPrefetchRestOfCluster.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiExceptionForMappedVa @ 0x14052CF68 (MiExceptionForMappedVa.c)
 *     MiRetardMdl @ 0x140530C30 (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x140535508 (MiFlushAllFilesystemPages.c)
 *     MiValidatePagefilePageHash @ 0x14055D65C (MiValidatePagefilePageHash.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, int *a3)
{
  __int64 v3; // rdi
  ULONG_PTR v4; // r13
  __int64 v5; // r15
  __int64 v6; // r8
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // r9
  ULONG_PTR v11; // rax
  unsigned __int64 v12; // rbp
  ULONG_PTR *v13; // r12
  ULONG_PTR v14; // rcx
  int v15; // esi
  __int64 v16; // rbp
  void (__fastcall __noreturn *Blink)(); // rdi
  __int64 v18; // rax
  int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // rdx
  _BYTE *v22; // rdx
  int v23; // r8d
  __int64 v24; // r9
  int v25; // edx
  __int64 v26; // rbp
  KIRQL v27; // di
  int v28; // ebp
  int v29; // eax
  NTSTATUS v30; // esi
  int v31; // edx
  int *v32; // rax
  int v33; // edi
  bool v34; // zf
  ULONG_PTR v35; // r12
  unsigned __int64 v36; // rcx
  unsigned int v37; // r12d
  void *v38; // rdi
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rdi
  __int64 v41; // rbp
  __int64 v42; // rdx
  _DWORD *v43; // r9
  __int64 v44; // r8
  unsigned __int64 v45; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v48; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 result; // rax
  ULONG_PTR v51; // rdi
  int v52; // [rsp+60h] [rbp-88h]
  __int64 v53; // [rsp+68h] [rbp-80h]
  BOOL IsRetryIoStatus; // [rsp+68h] [rbp-80h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-78h]
  ULONG_PTR v56; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v57; // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+88h] [rbp-60h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-58h]
  unsigned int v61; // [rsp+F0h] [rbp+8h]
  unsigned __int64 v62; // [rsp+F0h] [rbp+8h]
  unsigned __int8 v63; // [rsp+F8h] [rbp+10h] BYREF
  int *v64; // [rsp+100h] [rbp+18h]
  unsigned int v65; // [rsp+108h] [rbp+20h]

  v64 = a3;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = a2 + 272;
  v63 = 0;
  v5 = 0LL;
  v65 = 0;
  v6 = a1;
  v7 = -1LL;
  v8 = *(_QWORD *)(a2 + 248);
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  v10 = 0x2AAAAAAAAAAAAAABLL;
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v11 = *(_QWORD *)(a2 + 256);
  v56 = -1LL;
  v12 = *(_QWORD *)(v8 + 40);
  if ( v11 )
    v4 = v11;
  v53 = v3;
  v58 = v8;
  v13 = (ULONG_PTR *)(v4 + 48);
  if ( (v12 & 0x1000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
  {
    v14 = (v8 + 0x58000000000LL) / 48;
    v57 = v14;
    if ( v14 < 0xFFFFFFFFFLL )
    {
      v15 = ~(*(_DWORD *)(v6 + 80) << 11) & 0x20000 | 0x40000000;
      v16 = *(_QWORD *)(qword_140C4E648 + 8 * ((v12 >> 39) & 0x3FF));
      Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
      v18 = MiSearchNumaNodeTable(v14);
      v19 = v15 | 8;
      v20 = *(_DWORD *)(v18 + 8);
      if ( Blink != KeSwapProcessOrStack )
        v19 = v15;
      MiFindContiguousPages(
        v16,
        v57 + 1,
        0xFFFFFFFFFuLL,
        0LL,
        1uLL,
        *(unsigned __int8 *)(v58 + 34) >> 6,
        v20,
        0x80000000,
        v19,
        0LL,
        (__int64 *)&v56);
      v6 = a1;
      v3 = v53;
    }
  }
  v21 = *(_QWORD *)(v6 + 16);
  if ( (v21 & 1) != 0 )
  {
    v22 = (_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v22 == 2 )
    {
      if ( v3 )
        MiPrefetchRestOfCluster(a2, v22, v3, v10);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  if ( *(_QWORD *)(a2 + 264) )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, *(_QWORD *)(a2 + 264), 0LL);
  if ( v3 && (*(_BYTE *)(v3 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v3) + 4) )
    KiUnstackDetachProcess(a2 + 104, 0);
  if ( (*(_WORD *)(v4 + 10) & 0x200) != 0 )
  {
    MiRetardMdl(v4);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  v25 = *(_DWORD *)(a2 + 192);
  if ( (v25 & 0x10) != 0 )
  {
    v26 = *(_QWORD *)(a2 + 336);
    if ( v26 )
    {
      v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v26 + 232));
      RtlAvlRemoveNode((unsigned __int64 *)(v26 + 240), (unsigned __int64 *)(a2 + 352));
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v26 + 232), v27);
      v25 = *(_DWORD *)(a2 + 192);
      v3 = v53;
    }
  }
  v28 = 0;
  v61 = *(_DWORD *)(a2 + 184);
  v57 = (unsigned __int64)&v13[((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
                               + (unsigned __int64)*(unsigned int *)(v4 + 40)
                               + 4095) >> 12)
                             - 1];
  if ( (v25 & 0x100) != 0 )
    MiStoreFaultComplete(a2);
  v29 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( v29 >= 0 )
    {
      v28 = MiValidateInPage(a2);
      if ( v28 == -1073740748 )
        *(_DWORD *)(a2 + 192) |= 0x100000u;
    }
    MiDereferenceControlAreaProbe(*(volatile signed __int64 **)(a2 + 208), 0);
  }
  else if ( v29 >= 0 && (*(_DWORD *)(a2 + 192) & 0x400000) != 0 )
  {
    v28 = MiValidatePagefilePageHash(a2);
  }
  v30 = *(_DWORD *)(a2 + 80);
  v31 = v65 & 1;
  v52 = v31;
  if ( (v65 & 1) == 0 )
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v61 >> 12) + ((v61 & 0xFFF) != 0));
    if ( v3 )
    {
      if ( (*(_DWORD *)(a2 + 192) & 8) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 168));
    }
  }
  v32 = v64;
  v33 = 2 * v31;
  if ( *(_QWORD *)v64 )
  {
    PfHardFaultLog(*(_QWORD **)v64, v33, v23);
    v32 = v64;
  }
  v34 = (*(_BYTE *)(v4 + 10) & 1) == 0;
  *v32 = v33;
  if ( !v34 )
    MmUnmapLockedPages(*(PVOID *)(v4 + 24), (PMDL)v4);
  IsRetryIoStatus = 0;
  *(_DWORD *)(a2 + 188) = -1;
  if ( v30 < 0 )
  {
    if ( v30 != -1073741807 )
    {
      if ( v30 == -2147483626 )
        goto LABEL_75;
      IsRetryIoStatus = MiIsRetryIoStatus(v30, *(unsigned int *)(v4 + 40));
      if ( IsRetryIoStatus && !dword_140C4ECC0 && (!v52 || (v65 & 2) != 0) )
        dword_140C4ECC0 = 32;
      if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
      {
        v30 = -1073741801;
        goto LABEL_75;
      }
      goto LABEL_53;
    }
    if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 )
      KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
    v39 = 1LL;
    v40 = (v57 - (unsigned __int64)v13 + 8) >> 3;
    if ( (unsigned __int64)v13 > v57 )
      v40 = 0LL;
    if ( v40 )
    {
      do
      {
        MiZeroPhysicalPage(*v13);
        ++v39;
        ++v13;
      }
      while ( v39 <= v40 );
    }
    v30 = 0;
  }
  else
  {
    v35 = *(_QWORD *)(a2 + 88);
    if ( v35 != v61 )
    {
      if ( v35 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v52 )
          KeBugCheckEx(0x7Au, 4uLL, v35, a2, BugCheckParameter4);
        v36 = 8
            * ((((*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF)
              - (unsigned __int64)(v61 - *(_DWORD *)(v4 + 40))
              + v35
              + 4095) >> 12)
            + 40;
        v62 = v36;
        v37 = v35 & 0xFFF;
        if ( v37 )
        {
          v38 = (void *)(v37 + MiMapPageInHyperSpaceWorker(*(_QWORD *)(v36 + v4), &v63, 0x80000000LL, v24));
          memset(v38, 0, 4096 - v37);
          MiUnmapPageInHyperSpaceWorker(v38, v63, 0x80000000LL);
          v36 = v62;
        }
        if ( v36 + v4 + 8 <= v57 )
          *(_DWORD *)(a2 + 188) = ((__int64)(v36 - 48) >> 3) + 1;
      }
      else
      {
        v30 = -1073741801;
      }
    }
    if ( v28 == -1073741761 )
    {
LABEL_53:
      if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
        && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 8
        && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
      {
        if ( !IsRetryIoStatus )
        {
          v51 = BugCheckParameter1;
          if ( MmIsAddressValidEx(BugCheckParameter1) == 1 )
            v7 = MI_READ_PTE_LOCK_FREE(v51);
          MiFlushAllFilesystemPages(1LL);
          if ( v28 >= 0 )
            v28 = v30;
          KeBugCheckEx(0x7Au, v51, v28, v7, BugCheckParameter4);
        }
        if ( v28 != -1073741761 )
          v30 = -1073741801;
      }
    }
  }
LABEL_75:
  if ( v56 != -1LL )
  {
    v41 = v58;
    MiCopyPage(v56, (v58 + 0x58000000000LL) / 48, 0LL, 1);
    v5 = 48 * v56 - 0x58000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v5 + 16);
    v44 = *(_QWORD *)(v5 + 40) >> 60;
    LOBYTE(v44) = v44 & 7;
    if ( (_BYTE)v44 == 3 )
    {
      v45 = (unsigned __int8)MiLockPageInline(v5, v42, v44, v43);
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v41 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v45 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v34 = (v48 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v48;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v45);
    }
  }
  result = v65;
  *(_DWORD *)(a2 + 112) = v65;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v30;
  return result;
}
