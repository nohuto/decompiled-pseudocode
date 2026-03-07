void __fastcall PpmEventTracePreVetoAccounting(
        PCEVENT_DESCRIPTOR EventDescriptor,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *Pool2; // rdi
  unsigned __int64 v8; // r14
  __int64 InterruptTimePrecise; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR v21; // xmm0
  int v22; // [rsp+40h] [rbp-19h] BYREF
  LARGE_INTEGER v23; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v25; // [rsp+60h] [rbp+7h]
  int v26; // [rsp+68h] [rbp+Fh]
  int v27; // [rsp+6Ch] [rbp+13h]
  _DWORD *v28; // [rsp+70h] [rbp+17h]
  int v29; // [rsp+78h] [rbp+1Fh]
  int v30; // [rsp+7Ch] [rbp+23h]

  v23.QuadPart = 0LL;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, EventDescriptor) )
    {
      if ( a3 )
      {
        v6 = *(_DWORD *)(a3 + 28);
        if ( v6 )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20 * v6, 1699565648LL);
          if ( Pool2 )
          {
            v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&v23);
            v10 = 0LL;
            v22 = 0;
            v11 = 0LL;
            v12 = v6;
            do
            {
              v13 = *(_QWORD *)(a3 + 32);
              v14 = *(_DWORD *)(v11 + v13 + 16);
              if ( v14 )
              {
                Pool2[5 * v10] = v14;
                *(_QWORD *)&Pool2[5 * v22 + 1] = *(_QWORD *)(v11 + v13 + 24);
                *(_QWORD *)&Pool2[5 * v22 + 3] = *(_QWORD *)(v11 + v13 + 40);
                v15 = *(_QWORD *)(v11 + v13 + 32);
                if ( v15 )
                  *(_QWORD *)&Pool2[5 * v22 + 3] += InterruptTimePrecise - v15;
                v10 = (unsigned int)++v22;
              }
              v11 += 64LL;
              --v12;
            }
            while ( v12 );
            KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                v20 = (v19 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v19;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            __writecr8(v8);
            v21 = *a2;
            v27 = 0;
            v30 = 0;
            v25 = &v22;
            UserData = v21;
            v26 = 4;
            v28 = Pool2;
            v29 = 20 * v22;
            EtwWriteEx(PpmEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
            ExFreePoolWithTag(Pool2, 0x654D5050u);
          }
        }
      }
    }
  }
}
