NTSTATUS __fastcall NtCancelTimer(HANDLE Handle, char *a2)
{
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  char *v6; // rsi
  struct _OBJECT_TYPE *v7; // rcx
  unsigned __int64 v8; // r12
  _QWORD *v9; // r15
  char v10; // bl
  struct _KTHREAD *v11; // r15
  __int64 v12; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v14; // ecx
  struct _KPRCB *v15; // rcx
  signed __int32 *v16; // r8
  int SessionId; // eax
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char v21; // bl
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 v24; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // edx
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  NTSTATUS v34; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _QWORD *v37; // [rsp+48h] [rbp-40h]
  __int64 v38; // [rsp+50h] [rbp-38h]
  char v39; // [rsp+98h] [rbp+10h]
  unsigned int v40; // [rsp+A8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v24 = (__int64)a2;
    *(_BYTE *)v24 = *(_BYTE *)v24;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, 0LL, PreviousMode, &Object, 0LL);
  v34 = result;
  if ( result >= 0 )
  {
    v6 = (char *)Object;
    v7 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v7 == ExpIRTimerObjectType )
    {
      if ( a2 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return -1073741811;
      }
      else
      {
        return ExpSetTimerObject2(Object);
      }
    }
    else if ( v7 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v39 = 0;
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
      v9 = (_QWORD *)*((_QWORD *)v6 + 32);
      v37 = v9;
      if ( v9 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)v6 + 8);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v29 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v8);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v38 = 0LL;
        v11 = KeGetCurrentThread();
        v12 = 0LL;
        _disable();
        AbEntrySummary = v11->AbEntrySummary;
        if ( v11->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&ExpWakeTimerLock, v11)) != 0 )
        {
          _BitScanForward(&v14, AbEntrySummary);
          v40 = v14;
          v11->AbEntrySummary = AbEntrySummary & ~(1 << v14);
          v15 = KeGetCurrentPrcb();
          v16 = (signed __int32 *)v15->SchedulerAssist;
          if ( v16 )
          {
            _m_prefetchw(v16);
            v22 = *v16;
            do
            {
              v23 = v22;
              v22 = _InterlockedCompareExchange(v16, v22 & 0xFFDFFFFF, v22);
            }
            while ( v23 != v22 );
            if ( (v22 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
          _enable();
          v12 = (__int64)(&v11[1].Process + 12 * v40);
          if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C65668 < 0x8000000000LL )
            SessionId = MmGetSessionIdEx(v11->ApcState.Process);
          else
            SessionId = -1;
          *(_DWORD *)(v12 + 8) = SessionId;
          *(_QWORD *)v12 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( (_DWORD)v38 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v11);
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v12, (__int64)&ExpWakeTimerLock);
        if ( v12 )
          *(_BYTE *)(v12 + 18) = 1;
        v39 = 1;
        v6 = (char *)Object;
        LOBYTE(v8) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
        v9 = (_QWORD *)*((_QWORD *)v6 + 32);
        v37 = v9;
        *((_QWORD *)v6 + 32) = 0LL;
      }
      ExpCancelTimer((PKTIMER)v6);
      KxReleaseSpinLock((volatile signed __int64 *)v6 + 8);
      if ( KiIrqlFlags )
      {
        v30 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v29 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v31);
          v6 = (char *)Object;
        }
      }
      __writecr8((unsigned __int8)v8);
      if ( v39 )
      {
        if ( v9 )
        {
          v18 = v6 + 264;
          v19 = *v18;
          v20 = (_QWORD *)v18[1];
          if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v20 != v18 )
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          *v18 = 0LL;
        }
        v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
        KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
        KeLeaveCriticalRegionThread(CurrentThread);
        v6 = (char *)Object;
      }
      v10 = v6[4];
      ObDereferenceObjectExWithTag((ULONG_PTR)v6);
      if ( a2 )
        *a2 = v10;
      if ( v9 )
        PoDestroyReasonContext(v9);
      return v34;
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741788;
    }
  }
  return result;
}
