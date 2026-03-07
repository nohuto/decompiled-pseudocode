unsigned __int64 __fastcall MiMakeOutswappedPageResident(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // r13
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // r15
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  char v18; // al
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  signed __int32 v29; // eax
  __int64 v30; // rsi
  unsigned int v31; // ebx
  __int64 Page; // rax
  __int64 v33; // rsi
  __int64 v34; // rbx
  int v35; // r14d
  __int64 v36; // r8
  bool v37; // zf
  __int64 *v38; // r14
  int v39; // r13d
  int v40; // edi
  unsigned __int64 v41; // rbx
  char v42; // al
  int v43; // eax
  unsigned int v44; // edi
  unsigned int PagingFileOffset; // eax
  ULONG_PTR v46; // r14
  __int64 v47; // r13
  int v48; // eax
  int v49; // eax
  char v50; // bl
  unsigned __int8 v51; // al
  unsigned __int8 v52; // bl
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  NTSTATUS v56; // edi
  char v57; // al
  unsigned __int64 v58; // rbx
  unsigned __int8 v59; // al
  unsigned __int8 v60; // di
  struct _KPRCB *v61; // r9
  _DWORD *v62; // r8
  int v63; // eax
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v65; // rbx
  int v66; // esi
  __int64 v67; // r8
  bool v68; // zf
  __int16 v70[2]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v71; // [rsp+4Ch] [rbp-BCh]
  __int64 v72; // [rsp+50h] [rbp-B8h]
  __int64 v73; // [rsp+58h] [rbp-B0h]
  __int64 v74; // [rsp+60h] [rbp-A8h]
  __int128 v75; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v76; // [rsp+78h] [rbp-90h]
  _QWORD *v77; // [rsp+80h] [rbp-88h]
  _BYTE BugCheckParameter2[448]; // [rsp+88h] [rbp-80h] BYREF

  v71 = 0;
  LOBYTE(v70[0]) = 0;
  v75 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v6 = *(unsigned __int16 *)(a1 + 1838);
  v7 = (_QWORD *)(a1 + 1432);
  v77 = (_QWORD *)(a1 + 1432);
  v73 = *(_QWORD *)(qword_140C67048 + 8 * v6);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v10) = 4;
      else
        v10 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v10;
    }
    v11 = MiLockTransitionLeafPageEx((ULONG_PTR)v7, v70, 0);
    v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
    if ( (v12 & 0x800) == 0 )
      break;
    LOBYTE(v70[0]) = CurrentIrql;
    v13 = 0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4);
    if ( (*(_BYTE *)(v11 + 34) & 7) == 6 )
    {
      v19 = *(_QWORD *)(v11 + 24) ^ ((*(_QWORD *)(v11 + 24) + 1LL) ^ *(_QWORD *)(v11 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_22:
      *(_QWORD *)(v11 + 24) = v19;
      v20 = MiCaptureDirtyBitToPfn(v11);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v37 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      if ( v20 )
        MiReleasePageFileInfo(v73, v20, 0);
      goto LABEL_100;
    }
    if ( (MiUnlinkPageFromListEx(v11, 0LL) & 3) == 0 )
    {
      v18 = *(_BYTE *)(v11 + 34);
      ++*(_WORD *)(v11 + 32);
      *(_BYTE *)(v11 + 34) = v18 & 0xF8 | 6;
      v19 = *(_QWORD *)(v11 + 24) & 0xC000000000000000uLL | 1;
      goto LABEL_22;
    }
    MiDiscardTransitionPteEx(v11, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v37 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v37 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v37 )
        KiRemoveSystemWorkPriorityKick((__int64)v26);
    }
  }
  __writecr8(CurrentIrql);
  MiInitializePageColorBase(0LL, a5, (__int64)&v75);
  v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v75, 1u);
  v30 = v73;
  v31 = DWORD2(v75) & v29 | HIDWORD(v75);
  while ( 1 )
  {
    Page = MiGetPage(v30, v31, 0x200u);
    v13 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v30);
  }
  v33 = 48 * Page - 0x220000000000LL;
  v34 = MiSwizzleInvalidPte(32 * ((v12 >> 5) & 0x1F | ((Page & 0xFFFFFFFFFFLL) << 7) | 0x40));
  v35 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( MiPteHasShadow() )
    {
      v35 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v37 = (v34 & 1) == 0;
        goto LABEL_47;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v37 = (v34 & 1) == 0;
LABEL_47:
      if ( !v37 )
        v34 |= 0x8000000000000000uLL;
    }
  }
  *v7 = v34;
  if ( v35 )
    MiWritePteShadow((__int64)v7, v34, v36);
  MiInitializePfnForOtherProcess(v13, 0xFFFFF6FB7DBEDF68uLL, v13, 2560);
  v38 = (__int64 *)(v33 + 16);
  *(_QWORD *)(v33 + 16) = v12;
  LOWORD(v72) = 56;
  v39 = 0;
  v76 = 0xFFFFF6FB7DBED000uLL;
  v74 = 0LL;
  while ( 1 )
  {
    MiInitializeInPageSupport((__int64)BugCheckParameter2, 0, 0LL);
    v40 = *(_DWORD *)&BugCheckParameter2[192] | 0x200000;
    v41 = (unsigned __int64)*v38 >> 12;
    v42 = (unsigned __int8)*v38 >> 2;
    *(_DWORD *)&BugCheckParameter2[192] |= 0x200000u;
    if ( (v42 & 1) != 0 && (v41 & 0xF) == *(_DWORD *)(v73 + 1188) )
      v43 = 256;
    else
      v43 = 0;
    v44 = v43 | v40 & 0xFFFFFEFF;
    *(_DWORD *)&BugCheckParameter2[192] = v44;
    PagingFileOffset = MiGetPagingFileOffset(v38);
    v46 = v41 & 0xF;
    *(_QWORD *)&BugCheckParameter2[96] = (v44 & 0x100) != 0
                                       ? PagingFileOffset | (v46 << 60)
                                       : (unsigned __int64)PagingFileOffset << 12;
    MiSetPageTablePfnBuddy(v33, 0xFFFF800000000030uLL, 0);
    *(_WORD *)&BugCheckParameter2[280] = v72;
    *(_QWORD *)&BugCheckParameter2[304] = v76;
    *(_WORD *)&BugCheckParameter2[282] = 16386;
    *(_QWORD *)&BugCheckParameter2[272] = 0LL;
    *(_DWORD *)&BugCheckParameter2[316] = v39;
    *(_DWORD *)&BugCheckParameter2[312] = 4096;
    *(_DWORD *)&BugCheckParameter2[184] = 4096;
    *(_QWORD *)&BugCheckParameter2[320] = v13;
    v47 = *(_QWORD *)(v73 + 8 * v46 + 17056);
    if ( _bittest16((const signed __int16 *)(v47 + 204), 0xBu) )
    {
      MiReadFromMemoryPagefile(*(_QWORD *)(v73 + 8 * v46 + 17056), BugCheckParameter2);
    }
    else
    {
      if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = 0;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        v48 = SmPageRead(
                *(_QWORD *)(*(_QWORD *)(v47 + 248) + 200LL),
                (union _MM_STORE_KEY *)&BugCheckParameter2[96],
                (unsigned __int64)&BugCheckParameter2[272],
                (__int64)&BugCheckParameter2[32],
                (_SLIST_ENTRY *)&BugCheckParameter2[80]);
      }
      else
      {
        v48 = IoPageReadEx(
                *(PFILE_OBJECT *)(v47 + 56),
                (struct _MDL *)&BugCheckParameter2[272],
                &BugCheckParameter2[96],
                (struct _KEVENT *)&BugCheckParameter2[32],
                (struct _IO_STATUS_BLOCK *)&BugCheckParameter2[80],
                0,
                0LL);
      }
      if ( v48 < 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = v48;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        KeSetEvent((PRKEVENT)&BugCheckParameter2[32], 0, 0);
      }
    }
    KeWaitForSingleObject(&BugCheckParameter2[32], WrPageIn, 0, 0, 0LL);
    v49 = *(_DWORD *)&BugCheckParameter2[192];
    v50 = 0;
    v71 = 0;
    if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2);
      LOBYTE(v70[0]) = MiLockPageInline(v33);
      if ( HIWORD(v71) )
        v71 = (unsigned __int16)v71 | ((HIWORD(v71) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (v51 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v51 <= 0xFu )
      {
        v52 = v70[0];
        if ( LOBYTE(v70[0]) <= 0xFu && v51 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v54 = v53->SchedulerAssist;
          v52 = v70[0];
          v55 = ~(unsigned __int16)(-1LL << (LOBYTE(v70[0]) + 1));
          v37 = (v55 & v54[5]) == 0;
          v54[5] &= v55;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick((__int64)v53);
        }
      }
      else
      {
        v52 = v70[0];
      }
      __writecr8(v52);
      v50 = v71;
      v49 = *(_DWORD *)&BugCheckParameter2[192];
    }
    v56 = *(_DWORD *)&BugCheckParameter2[80];
    if ( *(int *)&BugCheckParameter2[80] >= 0 && *(_QWORD *)(v47 + 216) )
    {
      *(_DWORD *)&BugCheckParameter2[192] = v49 | 0x400000;
      v56 = MiValidatePagefilePageHash(BugCheckParameter2);
    }
    if ( (BugCheckParameter2[282] & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)&BugCheckParameter2[296], (PMDL)&BugCheckParameter2[272]);
    MiSetPageTablePfnBuddy(v33, 0LL, 0);
    if ( v56 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v56, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, v56, v56, v46, *(unsigned int *)&BugCheckParameter2[96]);
    }
    if ( (v50 & 1) != 0 )
    {
      v39 = v74;
      v38 = (__int64 *)(v33 + 16);
      if ( (v50 & 2) == 0 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v39 = v74;
    v38 = (__int64 *)(v33 + 16);
  }
  if ( *(_QWORD *)&BugCheckParameter2[88] != 4096LL )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, v56, v46, *(unsigned int *)&BugCheckParameter2[96]);
  }
  v57 = MiLockPageInline(v33);
  v58 = *(_QWORD *)(v33 + 16);
  LOBYTE(v70[0]) = v57;
  *(_QWORD *)(v33 + 16) = MiSwizzleInvalidPte(128LL);
  *(_BYTE *)(v33 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (v59 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v59 <= 0xFu )
  {
    v60 = v70[0];
    if ( LOBYTE(v70[0]) <= 0xFu && v59 >= 2u )
    {
      v61 = KeGetCurrentPrcb();
      v62 = v61->SchedulerAssist;
      v60 = v70[0];
      v63 = ~(unsigned __int16)(-1LL << (LOBYTE(v70[0]) + 1));
      v37 = (v63 & v62[5]) == 0;
      v62[5] &= v63;
      if ( v37 )
        KiRemoveSystemWorkPriorityKick((__int64)v61);
    }
  }
  else
  {
    v60 = v70[0];
  }
  __writecr8(v60);
  MiReleasePageFileInfo(v73, v58, 0);
  v7 = v77;
LABEL_100:
  ValidPte = MiMakeValidPte(0xFFFFF6FB7DBEDF68uLL, v13, -2147483644);
  v65 = ValidPte;
  v66 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( MiPteHasShadow() )
    {
      v66 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_108;
      v68 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_108;
      v68 = (ValidPte & 1) == 0;
    }
    if ( !v68 )
      v65 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_108:
  *v7 = v65;
  if ( v66 )
    MiWritePteShadow((__int64)v7, v65, v67);
  return ValidPte;
}
