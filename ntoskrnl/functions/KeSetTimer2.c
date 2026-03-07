_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  char v8; // r12
  __int64 CurrentIrql; // rcx
  char v10; // r13
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  bool v15; // r15
  unsigned int v16; // ebp
  char v17; // al
  char v18; // dl
  volatile signed __int32 v19; // edx
  signed __int32 v20; // eax
  unsigned __int8 v21; // bl
  _DWORD *SchedulerAssist; // r8
  __int64 v24; // r9
  char v25; // r8
  char v26; // dl
  __int64 SystemTimePrecise; // rdx
  __int64 v28; // rax
  signed __int32 v29; // r8d
  unsigned __int8 v30; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v32; // r9
  int v33; // edx
  bool v34; // zf
  bool v35; // [rsp+70h] [rbp+8h] BYREF
  char v36; // [rsp+78h] [rbp+10h] BYREF
  __int64 v37; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER v38; // [rsp+88h] [rbp+20h] BYREF

  v38.QuadPart = 0LL;
  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  v37 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v24) = 4;
    else
      v24 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v24;
  }
  v10 = 0;
  if ( a2 > 0 )
  {
    v10 = 1;
    if ( (v8 & 4) != 0 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise = MEMORY[0xFFFFF78000000014];
    v28 = 0LL;
    if ( v6 > SystemTimePrecise )
      v28 = SystemTimePrecise - v6;
    v6 = v28;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v38);
  else
    InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
  v12 = InterruptTimePrecise - v6;
  if ( InterruptTimePrecise >= v6 || v12 == -1LL )
    v12 = -2LL;
  v13 = v12;
  if ( a4 && *(_BYTE *)(a1 + 130) != 21 )
  {
    v14 = *(_QWORD *)(a4 + 8);
    if ( v14 == -1 )
    {
      v13 = -1LL;
    }
    else
    {
      v13 = v14 + v12;
      if ( v14 + v12 < v12 || v13 == -1 )
        v13 = -2LL;
    }
  }
  v15 = 0;
  v36 = 0;
  v16 = 1;
  if ( !KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
      v15 = 1;
    }
    else
    {
      v17 = *(_BYTE *)(a1 + 1);
      if ( (v17 & 0xF) != 0 )
      {
        v16 = 8;
        v15 = (v17 & 4) == 0;
      }
    }
    *(_QWORD *)(a1 + 72) = v12;
    *(_QWORD *)(a1 + 80) = v13;
    v18 = *(_BYTE *)(a1 + 129);
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    *(_BYTE *)(a1 + 128) = v10;
    if ( KiGlobalTimerResolutionRequests )
    {
      if ( (v18 & 0x10) != 0 )
      {
LABEL_19:
        v35 = 0;
        if ( v16 == 1 )
        {
          KxAcquireSpinLock(&KiTimer2CollectionLock);
          KiInsertTimer2WithCollectionLockHeld(a1, 1, &v36, &v35);
        }
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          KiTraceSetTimer2(a1, v15, v16);
        }
        else
        {
          v19 = *(_DWORD *)a1;
          v20 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)a1,
                  (v16 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
                  *(_DWORD *)a1);
          if ( v19 != v20 )
          {
            do
            {
              v29 = v20;
              v20 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v16 << 8) | v20 & 0xFFFFF07F, v20);
            }
            while ( v29 != v20 );
          }
          if ( v16 == 1 )
            KxReleaseSpinLock(&KiTimer2CollectionLock);
        }
        if ( v35 )
          KiHvEnlightenedGuestPriorityKick(
            (__int64)KeGetCurrentPrcb(),
            KiProcessorBlock[(unsigned int)KiClockTimerOwner],
            KiVpThreadSystemWorkPriority);
        if ( !KeIsForceIdleEngaged() )
        {
          if ( v36 )
          {
            KiRequestTimer2Expiration();
          }
          else if ( (v8 & 4) != 0 && (unsigned __int8)KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v12) )
          {
            KiSendClockInterruptToClockOwner();
          }
        }
        goto LABEL_30;
      }
    }
    else
    {
      if ( (v18 & 0xE) != 0 )
        goto LABEL_19;
      if ( !(unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process) )
      {
        if ( !v25 )
          goto LABEL_19;
        v26 = v18 & 0xEF;
LABEL_51:
        *(_BYTE *)(a1 + 129) = v26;
        KiUpdateTimer2Collections(a1);
        goto LABEL_19;
      }
      if ( v25 )
        goto LABEL_19;
    }
    v26 = v18 | 0x10;
    goto LABEL_51;
  }
LABEL_30:
  v21 = v37;
  if ( KiIrqlFlags )
  {
    v30 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v37 <= 0xFu && v30 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = CurrentPrcb->SchedulerAssist;
      v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
      v34 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v21);
  return v15;
}
