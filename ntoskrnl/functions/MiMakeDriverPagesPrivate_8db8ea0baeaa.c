__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, ULONG_PTR *a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // r13d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 *SessionVm; // rax
  __int64 v13; // r8
  int v14; // ecx
  ULONG_PTR v15; // r14
  int v16; // eax
  ULONG_PTR *v17; // rsi
  unsigned __int64 v18; // r15
  __int64 v19; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v21; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v23; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v27; // rbp
  unsigned __int8 v28; // al
  __int64 v29; // r14
  ULONG_PTR v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // rax
  struct _KTHREAD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  bool v38; // zf
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  __int64 v42; // rax
  unsigned int v43; // ebx
  __int64 v44; // r14
  ULONG_PTR v45; // rbx
  __int64 v46; // r9
  __int64 v47; // rbx
  __int64 v48; // rbp
  int v49; // eax
  int v50; // r14d
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int8 v55; // [rsp+30h] [rbp-A8h]
  char v56; // [rsp+31h] [rbp-A7h]
  __int64 v57; // [rsp+38h] [rbp-A0h]
  unsigned int v58; // [rsp+40h] [rbp-98h]
  unsigned int v59; // [rsp+44h] [rbp-94h] BYREF
  __int64 DriverPage; // [rsp+48h] [rbp-90h]
  unsigned __int64 v61; // [rsp+50h] [rbp-88h]
  int v62; // [rsp+58h] [rbp-80h]
  int v63; // [rsp+5Ch] [rbp-7Ch]
  int v64; // [rsp+60h] [rbp-78h] BYREF
  int v65; // [rsp+64h] [rbp-74h] BYREF
  ULONG_PTR *v66; // [rsp+68h] [rbp-70h]
  __int64 v67; // [rsp+70h] [rbp-68h]
  __int64 v68; // [rsp+78h] [rbp-60h]
  __int64 v69; // [rsp+80h] [rbp-58h]
  ULONG_PTR v70; // [rsp+88h] [rbp-50h]
  ULONG_PTR v71[8]; // [rsp+98h] [rbp-40h] BYREF

  v4 = 0;
  v59 = 0;
  v67 = 0LL;
  v56 = 0;
  v69 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)((_QWORD)a2 << 25) >> 16) == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v61 = Process[1].Affinity.StaticBitmap[25];
    SessionVm = (unsigned __int16 *)MiGetSessionVm(Process, v9, v10, v11);
  }
  else
  {
    v61 = 0LL;
    SessionVm = (unsigned __int16 *)&unk_140C697C0;
  }
  v13 = a1 + 160;
  v57 = (__int64)SessionVm;
  v14 = 0;
  v68 = *(_QWORD *)(qword_140C67048 + 8LL * SessionVm[87]);
  if ( (a4 & 3) == 0 && (MiFlags & 0xC000) == 0xC000 )
    v14 = 2;
  v66 = 0LL;
  v15 = a1 + 264;
  v62 = a4 & 4;
  v16 = v14 | 1;
  v70 = a1 + 264;
  v17 = a2;
  DriverPage = -1LL;
  if ( (a4 & 4) == 0 )
    v16 = v14;
  v18 = 0LL;
  v63 = v16;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v21 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v21->AbEntrySummary;
  if ( v21->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v13 + 104, v21)) != 0 )
  {
    _BitScanForward(&v23, AbEntrySummary);
    v58 = v23;
    v21->AbEntrySummary = AbEntrySummary & ~(1 << v23);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v40 = *SchedulerAssist;
      do
      {
        v41 = v40;
        v40 = _InterlockedCompareExchange(SchedulerAssist, v40 & 0xFFDFFFFF, v40);
      }
      while ( v41 != v40 );
      if ( (v40 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v19 = (__int64)(&v21[1].Process + 12 * v58);
    if ( v15 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v21->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v19 + 8) = SessionId;
    *(_QWORD *)v19 = v15 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v15, v19, v15);
  if ( v19 )
    *(_BYTE *)(v19 + 18) = 1;
  v27 = v57;
  v28 = MiLockWorkingSetShared(v57);
  v55 = v28;
  if ( (unsigned __int64)a2 > a3 )
    goto LABEL_31;
  v29 = a1;
  while ( 1 )
  {
    if ( v18 )
    {
      if ( ((unsigned __int16)v17 & 0xFFF) != 0 )
        goto LABEL_21;
      MiUnlockPageTableInternal(v27, v18);
    }
    v18 = (((unsigned __int64)v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v27, v18, 0);
LABEL_21:
    v30 = *v17;
    if ( (unsigned int)MiPteInShadowRange(v17)
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v53 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v17 >> 3) & 0x1FF));
        v54 = v30 | 0x20;
        if ( (v53 & 0x20) == 0 )
          v54 = v30;
        v30 = v54;
        if ( (v53 & 0x42) != 0 )
          v30 = v54 | 0x42;
      }
    }
    v71[0] = v30;
    if ( !v30 )
      goto LABEL_26;
    if ( (v30 & 1) == 0 )
    {
      if ( (v30 & 0x400) == 0 )
        goto LABEL_26;
      MiUnlockPageTableInternal(v27, v18);
      MiUnlockWorkingSetShared(v27, v55);
      MiUnlockLoaderEntry(v29 + 160, 0LL);
      v48 = (((_QWORD)v17 << 25) - v69) >> 16;
      v49 = MmAccessFault(0LL, v48, 0, 0LL);
      v50 = v49;
      if ( v49 < 0 && (v17 == a2 || (a4 & 8) == 0) )
        KeBugCheckEx(0x1Au, 0x3000uLL, v48, v30, v49);
      MiLockLoaderEntry(a1 + 160, 0LL);
      v27 = v57;
      MiLockWorkingSetShared(v57);
      if ( v50 >= 0 )
      {
        MiLockPageTableInternal(v57, v18, 0);
        v29 = a1;
        goto LABEL_27;
      }
      v18 = 0LL;
      goto LABEL_60;
    }
    v31 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v71) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v32 = *(_QWORD *)(v31 + 40);
    if ( v32 < 0 )
    {
      if ( (v32 & 0x10000000000LL) != 0 || (v42 = *(_QWORD *)(v31 + 8), v42 < 0) || !v42 )
      {
        if ( (a4 & 1) == 0 || (v30 & 0x800) == 0 && (v30 & 0x200) != 0 )
          break;
      }
    }
    v27 = v57;
LABEL_26:
    ++v17;
LABEL_27:
    if ( (unsigned __int64)v17 > a3 )
      goto LABEL_28;
  }
  v43 = (*(_DWORD *)(v31 + 16) >> 5) & 0x1F;
  if ( (MiFlags & 0x8000) != 0 && (v61 || (a4 & 2) != 0) && ((*(_DWORD *)(v31 + 16) >> 5) & 2) != 0 )
  {
LABEL_92:
    v27 = v57;
    v4 = -1073741755;
    goto LABEL_28;
  }
  if ( dword_140C694FC && v61 && ((*(_DWORD *)(v31 + 16) >> 5) & 2) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x8000000) != 0 )
      goto LABEL_92;
    v29 = a1;
  }
  if ( v62 && (*(_DWORD *)(v29 + 196) & 1) == 0 && (*(_BYTE *)(v31 + 35) & 8) != 0 )
  {
    v27 = v57;
    goto LABEL_26;
  }
  if ( DriverPage == -1 )
    goto LABEL_61;
  v44 = 48 * DriverPage - 0x220000000000LL;
  if ( (unsigned int)MiUseProtectedSlabAllocatorForDriverPage(v68, v43, &v59) )
  {
    if ( !(unsigned int)MiCheckSlabPfnBitmap(v44, 1LL, 0LL) || !(unsigned int)MiCheckSlabPage(v44, v59) )
      goto LABEL_99;
LABEL_57:
    v45 = (((_QWORD)v17 << 25) - v69) >> 16;
    MiCopyOnWrite(v45);
    v46 = a1;
    if ( v61 && !v67 && (v67 = MiSessionLookupImage(*(_QWORD *)(a1 + 48)), *(_BYTE *)(v67 + 64)) )
    {
      v56 = 1;
    }
    else if ( !v56 )
    {
LABEL_59:
      v27 = v57;
      DriverPage = -1LL;
      if ( (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v44 + 40) >> 60) & 7) == 3 )
        MiMakeDriverPageStayResident(v46, v57, v45);
LABEL_60:
      v29 = a1;
      goto LABEL_26;
    }
    if ( (unsigned __int8)MiDriverPageMustStayResident(v46, v17) )
    {
      v64 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v64);
        while ( *(__int64 *)(v31 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v31);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v65 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v65);
        while ( *(__int64 *)(v44 + 24) < 0 );
      }
      MiAddLockedPageCharge(v44, 1);
      _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v46 = a1;
    }
    goto LABEL_59;
  }
  if ( !(unsigned int)MiCheckSlabPfnBitmap(v44, 1LL, 0LL) || (unsigned int)MiCheckSlabPage(v44, 4LL) )
    goto LABEL_57;
LABEL_99:
  if ( v66 == v17 )
    goto LABEL_57;
  MiReleaseFreshPage(v44);
  v66 = v17;
LABEL_61:
  v27 = v57;
  MiUnlockPageTableInternal(v57, v18);
  MiUnlockWorkingSetShared(v57, v55);
  v29 = a1;
  MiUnlockLoaderEntry(a1 + 160, 0LL);
  DriverPage = MiAllocateDriverPage(v68, v43, 0LL);
  v47 = DriverPage;
  MiLockLoaderEntry(a1 + 160, 0LL);
  MiLockWorkingSetShared(v57);
  MiLockPageTableInternal(v57, v18, 0);
  if ( v47 != -1 )
    goto LABEL_27;
  v4 = -1073741801;
LABEL_28:
  if ( v18 )
    MiUnlockPageTableInternal(v27, v18);
  v28 = v55;
  v15 = v70;
LABEL_31:
  MiUnlockWorkingSetShared(v27, v28);
  v33 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  KeAbPostRelease(v15);
  v38 = v33->SpecialApcDisable++ == -1;
  if ( v38 && ($C71981A45BEB2B45F82C232A7085991E *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
    KiCheckForKernelApcDelivery(v35, v34, v36, v37);
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x220000000000LL);
  return v4;
}
