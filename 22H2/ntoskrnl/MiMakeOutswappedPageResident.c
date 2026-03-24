/*
 * XREFs of MiMakeOutswappedPageResident @ 0x14052BA00
 * Callers:
 *     KiInSwapProcesses @ 0x140249EA8 (KiInSwapProcesses.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiInvalidPteConforms @ 0x14023AEB0 (MiInvalidPteConforms.c)
 *     MiInitializeInPageSupport @ 0x14023E950 (MiInitializeInPageSupport.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiIsRetryIoStatus @ 0x140255144 (MiIsRetryIoStatus.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiIsPteInStore @ 0x1402E1DE0 (MiIsPteInStore.c)
 *     SmPageRead @ 0x1403070AC (SmPageRead.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiStoreFaultComplete @ 0x140325DE0 (MiStoreFaultComplete.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x14033A2B0 (MiGetPagingFileOffset.c)
 *     MiInitializePfnForOtherProcess @ 0x140356D68 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1403570E4 (MiSetPageTablePfnBuddy.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x140535508 (MiFlushAllFilesystemPages.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 *     MiValidatePagefilePageHash @ 0x14055D65C (MiValidatePagefilePageHash.c)
 */

unsigned __int64 __fastcall MiMakeOutswappedPageResident(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // r13
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  char v20; // al
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int8 CurrentIrql; // al
  int v25; // eax
  _DWORD *SchedulerAssist; // r8
  signed __int32 v27; // eax
  unsigned int v28; // ebx
  __int64 Page; // rax
  __int64 v30; // rsi
  __int64 TransitionPte; // rbx
  int v32; // r15d
  __int64 v33; // r8
  bool v34; // zf
  __int64 *v35; // r13
  int v36; // edi
  __int64 v37; // rdx
  int IsPteInStore; // eax
  int v39; // r9d
  unsigned int v40; // ebx
  __int64 v41; // r15
  unsigned int PagingFileOffset; // eax
  _DWORD *v43; // r9
  char v44; // bl
  __int64 v45; // r13
  int v46; // eax
  _DWORD *v47; // r9
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  _DWORD *v51; // r9
  unsigned __int64 v52; // rbx
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  int v55; // eax
  NTSTATUS v56; // edi
  __int64 v57; // rdx
  __int64 v58; // r8
  _DWORD *v59; // r9
  unsigned __int8 v60; // al
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rdi
  __int64 v63; // rax
  char v64; // cl
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r9
  int v67; // eax
  _DWORD *v68; // r8
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v70; // rbx
  int v71; // esi
  __int64 v72; // r8
  bool v73; // zf
  unsigned int v75; // [rsp+48h] [rbp-C0h] BYREF
  char v76; // [rsp+4Ch] [rbp-BCh]
  __int16 v77; // [rsp+4Eh] [rbp-BAh]
  __int64 v78; // [rsp+50h] [rbp-B8h]
  __int64 v79; // [rsp+58h] [rbp-B0h]
  __int128 v80; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v81; // [rsp+70h] [rbp-98h]
  _QWORD *v82; // [rsp+78h] [rbp-90h]
  _BYTE BugCheckParameter2[448]; // [rsp+88h] [rbp-80h] BYREF

  v75 = 0;
  v76 = 0;
  v80 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v6 = *(unsigned __int16 *)(a1 + 1838);
  v7 = (_QWORD *)(a1 + 1432);
  v82 = (_QWORD *)(a1 + 1432);
  v78 = *(_QWORD *)(qword_140C4E648 + 8 * v6);
  while ( 1 )
  {
    do
      v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
    while ( !MiInvalidPteConforms(v8) );
    if ( (v9 & 0x800) == 0 )
      break;
    v12 = v9;
    if ( qword_140C4DF40 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v9 & ~qword_140C4DF40;
    }
    v13 = (v12 >> 12) & 0xFFFFFFFFFLL;
    if ( (*(_QWORD *)(48 * v13 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v14 = 48 * v13 - 0x58000000000LL;
      v15 = (unsigned __int8)MiLockPageInline(v14, 0x4000000000000LL, v10, v11);
      if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v7) == v8 )
      {
        if ( (*(_BYTE *)(v14 + 34) & 7) == 6 )
        {
          v21 = *(_QWORD *)(v14 + 24) ^ ((*(_QWORD *)(v14 + 24) + 1LL) ^ *(_QWORD *)(v14 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_23:
          *(_QWORD *)(v14 + 24) = v21;
          v22 = MiCaptureDirtyBitToPfn(48 * v13 - 0x58000000000LL);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v34 = (v25 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v25;
                if ( v34 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v15);
          if ( v22 )
            MiReleasePageFileInfo(v78, v22, 0);
          goto LABEL_87;
        }
        if ( (unsigned int)MiUnlinkPageFromList(48 * v13 - 0x58000000000LL, 0) )
        {
          v20 = *(_BYTE *)(v14 + 34);
          ++*(_WORD *)(v14 + 32);
          *(_BYTE *)(v14 + 34) = v20 & 0xF8 | 6;
          v21 = *(_QWORD *)(v14 + 24) & 0xC000000000000000uLL | 1;
          goto LABEL_23;
        }
        MiDiscardTransitionPteEx(48 * v13 - 0x58000000000LL, 0);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v34 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick((__int64)v17);
          }
        }
      }
      __writecr8(v15);
    }
  }
  MiInitializePageColorBase(0LL, a5, (__int64)&v80);
  v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v80, 1u);
  v28 = DWORD2(v80) & v27 | HIDWORD(v80);
  while ( 1 )
  {
    Page = MiGetPage(v78, v28, 512LL);
    v13 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v78);
  }
  v30 = 48 * Page - 0x58000000000LL;
  TransitionPte = MiMakeTransitionPte(Page, (v8 >> 5) & 0x1F);
  v32 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v32 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v34 = (TransitionPte & 1) == 0;
        goto LABEL_41;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v34 = (TransitionPte & 1) == 0;
LABEL_41:
      if ( !v34 )
        TransitionPte |= 0x8000000000000000uLL;
    }
  }
  *v7 = TransitionPte;
  if ( v32 )
    MiWritePteShadow((__int64)v7, TransitionPte, v33);
  MiInitializePfnForOtherProcess(v13, 0xFFFFF6FB7DBEDF68uLL, v13, 2560LL);
  v35 = (__int64 *)(v30 + 16);
  *(_QWORD *)(v30 + 16) = v8;
  v77 = 56;
  v36 = 0;
  v81 = 0xFFFFF6FB7DBED000uLL;
  v79 = 0LL;
  while ( 1 )
  {
    MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
    v37 = *v35;
    *(_DWORD *)&BugCheckParameter2[192] |= 0x200000u;
    IsPteInStore = MiIsPteInStore(v78, v37);
    v40 = v39 & 0xFFFFFEFF | (IsPteInStore != 0 ? 0x100 : 0);
    v41 = (unsigned __int8)HIBYTE(*(_WORD *)v35) >> 4;
    *(_DWORD *)&BugCheckParameter2[192] = v40;
    PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)v35);
    if ( (v40 & 0x100) != 0 )
      *(_QWORD *)&BugCheckParameter2[96] = PagingFileOffset | ((unsigned __int64)(unsigned int)v41 << 60);
    else
      *(_QWORD *)&BugCheckParameter2[96] = (unsigned __int64)PagingFileOffset << 12;
    MiSetPageTablePfnBuddy(v30, 0xFFFF800000000030uLL, 0LL, v43);
    v44 = 0;
    *(_WORD *)&BugCheckParameter2[280] = v77;
    *(_QWORD *)&BugCheckParameter2[304] = v81;
    *(_WORD *)&BugCheckParameter2[282] = 16386;
    *(_QWORD *)&BugCheckParameter2[272] = 0LL;
    *(_DWORD *)&BugCheckParameter2[316] = v36;
    *(_DWORD *)&BugCheckParameter2[312] = 4096;
    *(_DWORD *)&BugCheckParameter2[184] = 4096;
    *(_QWORD *)&BugCheckParameter2[320] = v13;
    v45 = *(_QWORD *)(v78 + 8 * v41 + 6944);
    if ( (*(_WORD *)(v45 + 204) & 0x800) == 0 )
    {
      if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = 0;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        v46 = SmPageRead((union _MM_STORE_KEY *)&BugCheckParameter2[96], (int)&BugCheckParameter2[272]);
      }
      else
      {
        v46 = IoPageReadEx(
                *(PFILE_OBJECT *)(v45 + 56),
                (struct _MDL *)&BugCheckParameter2[272],
                &BugCheckParameter2[96],
                (struct _KEVENT *)&BugCheckParameter2[32],
                (struct _IO_STATUS_BLOCK *)&BugCheckParameter2[80],
                0,
                0LL);
      }
      if ( v46 < 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = v46;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        KeSetEvent((PRKEVENT)&BugCheckParameter2[32], 0, 0);
      }
    }
    KeWaitForSingleObject(&BugCheckParameter2[32], WrPageIn, 0, 0, 0LL);
    v48 = *(_DWORD *)&BugCheckParameter2[192];
    v75 = 0;
    if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v75);
      v52 = (unsigned __int8)MiLockPageInline(v30, v49, v50, v51);
      if ( HIWORD(v75) )
        v75 = (unsigned __int16)v75 | ((HIWORD(v75) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v47 = v54->SchedulerAssist;
            v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
            v34 = (v55 & v47[5]) == 0;
            v47[5] &= v55;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick((__int64)v54);
          }
        }
      }
      __writecr8(v52);
      v44 = v75;
      v48 = *(_DWORD *)&BugCheckParameter2[192];
    }
    v56 = *(_DWORD *)&BugCheckParameter2[80];
    if ( *(int *)&BugCheckParameter2[80] >= 0 && *(_QWORD *)(v45 + 216) )
    {
      *(_DWORD *)&BugCheckParameter2[192] = v48 | 0x400000;
      v56 = MiValidatePagefilePageHash(BugCheckParameter2);
    }
    if ( (BugCheckParameter2[282] & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)&BugCheckParameter2[296], (PMDL)&BugCheckParameter2[272]);
    MiSetPageTablePfnBuddy(v30, 0LL, 0LL, v47);
    if ( v56 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v56, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, v56, v56, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
    }
    if ( (v44 & 1) != 0 )
    {
      v36 = v79;
      v35 = (__int64 *)(v30 + 16);
      if ( (v44 & 2) == 0 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v36 = v79;
    v35 = (__int64 *)(v30 + 16);
  }
  if ( *(_QWORD *)&BugCheckParameter2[88] != 4096LL )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, v56, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
  }
  v60 = MiLockPageInline(v30, v57, v58, v59);
  v61 = *(_QWORD *)(v30 + 16);
  v62 = v60;
  v63 = MiSwizzleInvalidPte(128LL);
  v64 = *(_BYTE *)(v30 + 34);
  *(_QWORD *)(v30 + 16) = v63;
  *(_BYTE *)(v30 + 34) = v64 | 0x10;
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v65 = KeGetCurrentIrql();
      if ( v65 <= 0xFu && (unsigned __int8)v62 <= 0xFu && v65 >= 2u )
      {
        v66 = KeGetCurrentPrcb();
        v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v62 + 1));
        v68 = v66->SchedulerAssist;
        v34 = (v67 & v68[5]) == 0;
        v68[5] &= v67;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick((__int64)v66);
      }
    }
  }
  __writecr8(v62);
  MiReleasePageFileInfo(v78, v61, 0);
  v7 = v82;
LABEL_87:
  ValidPte = MiMakeValidPte(0xFFFFF6FB7DBEDF68uLL, v13, 2147483652LL, (__int64)CurrentPrcb);
  v70 = ValidPte;
  v71 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v71 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_95;
      v73 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_95;
      v73 = (ValidPte & 1) == 0;
    }
    if ( !v73 )
      v70 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_95:
  *v7 = v70;
  if ( v71 )
    MiWritePteShadow((__int64)v7, v70, v72);
  return ValidPte;
}
