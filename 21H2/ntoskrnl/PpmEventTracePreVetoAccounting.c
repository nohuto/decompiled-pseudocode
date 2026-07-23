/*
 * XREFs of PpmEventTracePreVetoAccounting @ 0x14057ADA8
 * Callers:
 *     PpmEventPlatformVetoRundown @ 0x14057A300 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x14057A61C (PpmEventProcessorVetoRundown.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PpmEventTracePreVetoAccounting(
        PCEVENT_DESCRIPTOR EventDescriptor,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *PoolWithTag; // rdi
  unsigned __int64 v8; // r14
  LARGE_INTEGER InterruptTimePrecise; // rax
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
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v25; // [rsp+60h] [rbp+7h]
  int v26; // [rsp+68h] [rbp+Fh]
  int v27; // [rsp+6Ch] [rbp+13h]
  _DWORD *v28; // [rsp+70h] [rbp+17h]
  int v29; // [rsp+78h] [rbp+1Fh]
  int v30; // [rsp+7Ch] [rbp+23h]

  PerformanceCounter.QuadPart = 0LL;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, EventDescriptor) )
    {
      if ( a3 )
      {
        v6 = *(_DWORD *)(a3 + 28);
        if ( v6 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 20 * v6, 0x654D5050u);
          if ( PoolWithTag )
          {
            v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
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
                PoolWithTag[5 * v10] = v14;
                *(_QWORD *)&PoolWithTag[5 * v22 + 1] = *(_QWORD *)(v11 + v13 + 24);
                *(_QWORD *)&PoolWithTag[5 * v22 + 3] = *(_QWORD *)(v11 + v13 + 40);
                v15 = *(_QWORD *)(v11 + v13 + 32);
                if ( v15 )
                  *(_QWORD *)&PoolWithTag[5 * v22 + 3] += InterruptTimePrecise.QuadPart - v15;
                v10 = (unsigned int)++v22;
              }
              v11 += 64LL;
              --v12;
            }
            while ( v12 );
            KxReleaseSpinLock(&PpmIdleVetoLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
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
            }
            __writecr8(v8);
            v21 = *a2;
            v27 = 0;
            v30 = 0;
            v25 = &v22;
            UserData = v21;
            v26 = 4;
            v28 = PoolWithTag;
            v29 = 20 * v22;
            EtwWriteEx(PpmEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
            ExFreePoolWithTag(PoolWithTag, 0x654D5050u);
          }
        }
      }
    }
  }
}
