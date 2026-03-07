__int64 __fastcall ExpSetTimerObject(
        char *Object,
        char a2,
        LARGE_INTEGER *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        ULONG Period,
        ULONG TolerableDelay,
        char *a10)
{
  _KPROCESS *Process; // rbx
  unsigned __int8 CurrentIrql; // r12
  int v13; // r13d
  ULONG v14; // r14d
  LARGE_INTEGER *v15; // r11
  LARGE_INTEGER v16; // rbx
  KSPIN_LOCK *v17; // r10
  char v18; // cl
  __int64 v19; // r14
  _QWORD *v20; // rbx
  _DWORD *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  struct _KTHREAD *v25; // rbx
  volatile signed __int64 *p_StackLimit; // r14
  char *v27; // rax
  void **p_StackBase; // rbx
  char **v29; // rdx
  struct _KTHREAD *v30; // r14
  __int64 v31; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v33; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int8 v37; // cf
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  char v40; // di
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  __int64 v43; // rcx
  unsigned int v44; // r14d
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  bool v49; // zf
  struct _KTHREAD *v50; // r14
  __int64 v51; // rbx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  struct _KPRCB *v54; // rcx
  signed __int32 *v55; // r8
  signed __int32 v56; // eax
  signed __int32 v57; // ett
  int v58; // eax
  unsigned __int8 v59; // r8
  _DWORD *v60; // r10
  __int64 v61; // rdx
  LARGE_INTEGER v62; // rcx
  LARGE_INTEGER v63; // rcx
  unsigned int v64; // edx
  unsigned int v65; // eax
  unsigned __int8 v66; // cl
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  __int64 v73; // rcx
  char v74; // [rsp+40h] [rbp-88h]
  char v75; // [rsp+41h] [rbp-87h]
  unsigned int v76; // [rsp+44h] [rbp-84h]
  unsigned int v77; // [rsp+48h] [rbp-80h]
  unsigned int v78; // [rsp+4Ch] [rbp-7Ch]
  __int64 v79; // [rsp+50h] [rbp-78h]
  KSPIN_LOCK *Objecta; // [rsp+58h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  struct _KDPC *Dpc; // [rsp+68h] [rbp-60h]
  LARGE_INTEGER v83; // [rsp+70h] [rbp-58h]
  char v87; // [rsp+F8h] [rbp+30h]

  v76 = 0;
  v74 = 0;
  CurrentThread = 0LL;
  v79 = a6;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
      {
        LOBYTE(v43) = KeGetCurrentThread()->PreviousMode;
        v44 = ExpCheckWakeTimerAccess(v43);
        v76 = v44;
        if ( v44 )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          return v44;
        }
      }
    }
    if ( (int)qword_140C3D720 >= 2 || byte_140C3D6F3 )
    {
      v74 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v30 = KeGetCurrentThread();
      v31 = 0LL;
      _disable();
      AbEntrySummary = v30->AbEntrySummary;
      if ( v30->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&ExpWakeTimerLock, v30)) != 0 )
      {
        _BitScanForward(&v33, AbEntrySummary);
        v77 = v33;
        v30->AbEntrySummary = AbEntrySummary & ~(1 << v33);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v41 = *SchedulerAssist;
          do
          {
            v42 = v41;
            v41 = _InterlockedCompareExchange(SchedulerAssist, v41 & 0xFFDFFFFF, v41);
          }
          while ( v42 != v41 );
          if ( (v41 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v31 = (__int64)(&v30[1].Process + 12 * v77);
        if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C65668 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(v30->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v31 + 8) = SessionId;
        *(_QWORD *)v31 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
      }
      v37 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
      if ( v37 )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v31, (__int64)&ExpWakeTimerLock);
      if ( v31 )
        *(_BYTE *)(v31 + 18) = 1;
    }
    else
    {
      v76 = 1073741861;
      v79 = 0LL;
    }
  }
  Dpc = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Objecta = (KSPIN_LOCK *)Process;
  v87 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v22 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v23) = 4;
    else
      v23 = (-1LL << (CurrentIrql + 1)) & 4;
    v22[5] |= v23;
  }
  if ( a2 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock(&Process[2].Affinity.StaticBitmap[24]);
    v87 = 1;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)Object + 8);
  if ( !v74 && *((_QWORD *)Object + 32) )
  {
    KxReleaseSpinLock((volatile signed __int64 *)Object + 8);
    if ( v87 )
      KxReleaseSpinLock((volatile signed __int64 *)&Process[2].Affinity.StaticBitmap[24]);
    if ( KiIrqlFlags )
    {
      v45 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v49 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
    __writecr8(CurrentIrql);
    v74 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v50 = KeGetCurrentThread();
    v51 = 0LL;
    _disable();
    v52 = v50->AbEntrySummary;
    if ( v50->AbEntrySummary || (v52 = KiAbTryReclaimOrphanedEntries(&ExpWakeTimerLock, v50)) != 0 )
    {
      _BitScanForward(&v53, v52);
      v78 = v53;
      v50->AbEntrySummary = v52 & ~(1 << v53);
      v54 = KeGetCurrentPrcb();
      v55 = (signed __int32 *)v54->SchedulerAssist;
      if ( v55 )
      {
        _m_prefetchw(v55);
        v56 = *v55;
        do
        {
          v57 = v56;
          v56 = _InterlockedCompareExchange(v55, v56 & 0xFFDFFFFF, v56);
        }
        while ( v57 != v56 );
        if ( (v56 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
      _enable();
      v51 = (__int64)(&v50[1].Process + 12 * v78);
      if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C65668 < 0x8000000000LL )
        v58 = MmGetSessionIdEx(v50->ApcState.Process);
      else
        v58 = -1;
      *(_DWORD *)(v51 + 8) = v58;
      *(_QWORD *)v51 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    v37 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v37 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v51, (__int64)&ExpWakeTimerLock);
    if ( v51 )
      *(_BYTE *)(v51 + 18) = 1;
    v59 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v59 <= 0xFu )
    {
      v60 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v59 == 2 )
        LODWORD(v61) = 4;
      else
        v61 = (-1LL << (v59 + 1)) & 4;
      v60[5] |= v61;
    }
    CurrentIrql = v59;
    if ( v87 )
      KxAcquireSpinLock(Objecta + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)Object + 8);
  }
  v13 = ExpCancelTimer((PKTIMER)Object) + 1;
  v75 = Object[4];
  v14 = Period;
  *((_QWORD *)Object + 30) = Period;
  *((_DWORD *)Object + 80) = TolerableDelay;
  if ( a4 )
  {
    v25 = KeGetCurrentThread();
    KeInitializeApc((__int64)(Object + 72), (__int64)v25, 2, (__int64)ExpTimerApcRoutine, 0LL, a4, a2, a5);
    p_StackLimit = (volatile signed __int64 *)&v25[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v25[1].StackLimit);
    v27 = Object + 224;
    p_StackBase = &v25[1].StackBase;
    v29 = (char **)p_StackBase[1];
    if ( *v29 != (char *)p_StackBase )
      goto LABEL_128;
    *(_QWORD *)v27 = p_StackBase;
    *((_QWORD *)Object + 29) = v29;
    *v29 = v27;
    p_StackBase[1] = v27;
    Object[304] |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    Dpc = (struct _KDPC *)(Object + 160);
    --v13;
    v14 = 0;
  }
  v15 = a3;
  v16 = *a3;
  v83 = *a3;
  v17 = Objecta;
  if ( v87 )
  {
    if ( !*((_QWORD *)Object + 35) )
    {
      PsInsertVirtualizedTimer(Objecta, (__int64)(Object + 280));
      v17 = Objecta;
      v15 = a3;
    }
    _InterlockedIncrement((volatile signed __int32 *)v17 + 606);
    if ( (v17[79] & 0x10) != 0 )
    {
      v24 = *((unsigned int *)v17 + 17);
      if ( (_DWORD)v24 )
      {
        v16 = *v15;
        v62 = *v15;
        if ( v15->QuadPart >= 0 )
        {
          if ( v62.QuadPart <= MEMORY[0xFFFFF78000000014] )
            v62.QuadPart = MEMORY[0xFFFFF78000000014];
          v16.QuadPart = v24 + v62.QuadPart;
          if ( v24 + v62.QuadPart < v15->QuadPart )
            v16 = *v15;
        }
        else
        {
          v63.QuadPart = v62.QuadPart - v24;
          if ( v63.QuadPart <= v16.QuadPart )
            v16 = v63;
        }
        v83.HighPart = v16.HighPart;
        v64 = (unsigned int)v24 / 0x2710;
        if ( v14 && v64 + v14 > v14 )
        {
          v14 += v64;
          *((_DWORD *)Object + 60) += v64;
LABEL_112:
          *((_DWORD *)Object + 61) = v64;
          goto LABEL_10;
        }
        v65 = *((_DWORD *)Object + 60);
        if ( v65 && v65 + v64 > v65 )
        {
          *((_DWORD *)Object + 60) = v65 + v64;
          goto LABEL_112;
        }
      }
    }
  }
LABEL_10:
  v18 = 2;
  if ( (Object[304] & 2) != 0 )
  {
    *((LARGE_INTEGER *)Object + 39) = v16;
    v19 = v79;
    if ( v83.HighPart >= 0 )
    {
      Object[248] = 1;
    }
    else
    {
      if ( v79 )
        v18 = 3;
      Object[248] = v18;
    }
  }
  else
  {
    KeSetCoalescableTimer((PKTIMER)Object, v16, v14, TolerableDelay, Dpc);
    v19 = v79;
    if ( v79 )
      _interlockedbittestandset((volatile signed __int32 *)Object, 9u);
  }
  v20 = (_QWORD *)*((_QWORD *)Object + 32);
  *((_QWORD *)Object + 32) = v19;
  Object[304] ^= (Object[304] ^ (4 * a7)) & 4;
  KxReleaseSpinLock((volatile signed __int64 *)Object + 8);
  if ( v87 )
    KxReleaseSpinLock((volatile signed __int64 *)Objecta + 305);
  if ( KiIrqlFlags )
  {
    v66 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v66 <= 0xFu && CurrentIrql <= 0xFu && v66 >= 2u )
    {
      v67 = KeGetCurrentPrcb();
      v68 = v67->SchedulerAssist;
      v69 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v49 = (v69 & v68[5]) == 0;
      v68[5] &= v69;
      if ( v49 )
        KiRemoveSystemWorkPriorityKick(v67);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v74 )
    goto LABEL_17;
  if ( !v20 )
  {
    if ( !v19 )
      goto LABEL_49;
    v38 = Object + 264;
    v39 = (_QWORD *)qword_140C2D1E8;
    if ( *(__int64 **)qword_140C2D1E8 == &ExpWakeTimerList )
    {
      *v38 = &ExpWakeTimerList;
      *((_QWORD *)Object + 34) = v39;
      *v39 = v38;
      qword_140C2D1E8 = (__int64)(Object + 264);
      goto LABEL_49;
    }
LABEL_128:
    __fastfail(3u);
  }
  if ( !v19 )
  {
    v70 = Object + 264;
    v71 = *((_QWORD *)Object + 33);
    v72 = (_QWORD *)*((_QWORD *)Object + 34);
    if ( *(char **)(v71 + 8) != Object + 264 || (_QWORD *)*v72 != v70 )
      goto LABEL_128;
    *v72 = v71;
    *(_QWORD *)(v71 + 8) = v72;
    *v70 = 0LL;
  }
LABEL_49:
  v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v40 & 2) != 0 && (v40 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KeLeaveCriticalRegionThread(CurrentThread);
  if ( v20 )
    PoDestroyReasonContext(v20);
LABEL_17:
  if ( v13 )
    ObDereferenceObjectExWithTag((ULONG_PTR)Object);
  if ( !a10 )
    return v76;
  if ( !a2 )
  {
    *a10 = v75;
    return v76;
  }
  v73 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
    v73 = (__int64)a10;
  *(_BYTE *)v73 = *(_BYTE *)v73;
  *a10 = v75;
  return v76;
}
