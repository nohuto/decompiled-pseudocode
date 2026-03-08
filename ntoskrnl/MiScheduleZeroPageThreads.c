/*
 * XREFs of MiScheduleZeroPageThreads @ 0x14036072C
 * Callers:
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiReduceZeroingThreads @ 0x1402A81E4 (MiReduceZeroingThreads.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsCalibrationWorthwhile @ 0x140360984 (MiIsCalibrationWorthwhile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LARGE_INTEGER __fastcall MiScheduleZeroPageThreads(__int64 a1)
{
  __int64 v1; // r12
  LARGE_INTEGER result; // rax
  unsigned __int64 QuadPart; // r14
  unsigned int i; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  KIRQL v7; // al
  LARGE_INTEGER *v8; // r13
  unsigned __int64 v9; // rbp
  LARGE_INTEGER *v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // r15
  LARGE_INTEGER v14; // r8
  unsigned int *v15; // rcx
  __int64 v16; // r8
  char v17; // r10
  int v18; // eax
  LARGE_INTEGER v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-68h] BYREF
  LARGE_INTEGER *v30; // [rsp+28h] [rbp-60h]
  PEX_SPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  KIRQL v33; // [rsp+98h] [rbp+10h]
  unsigned int v34; // [rsp+A0h] [rbp+18h]
  LARGE_INTEGER v35; // [rsp+A8h] [rbp+20h] BYREF

  v1 = a1;
  v35.QuadPart = 0LL;
  result = KeQueryPerformanceCounter(&v35);
  QuadPart = result.QuadPart;
  if ( v35.QuadPart != 10000000 )
  {
    result.QuadPart = 10000000 * result.QuadPart / v35.QuadPart;
    QuadPart = (__int64)(10000000 * QuadPart) / v35.QuadPart;
  }
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v5 = *(_QWORD *)(v1 + 16) + 25408LL * i;
    v6 = (_QWORD *)(v5 + 22856);
    if ( *(_QWORD *)(v5 + 22832) || *v6 )
    {
      SpinLock = (PEX_SPIN_LOCK)(v5 + 23160);
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 23160));
      v8 = *(LARGE_INTEGER **)(v5 + 23152);
      v9 = v7;
      v33 = v7;
      v30 = v8;
      if ( v8 && *(_QWORD *)(v5 + 23168) )
      {
        v10 = v8 + 24;
        v11 = 0LL;
        v12 = 0LL;
        v13 = 0LL;
        while ( 1 )
        {
          v14 = *v10;
          if ( QuadPart < v10->QuadPart )
          {
            QuadPart = v10->QuadPart;
          }
          else if ( QuadPart > v14.QuadPart )
          {
            if ( QuadPart - v14.QuadPart < 0x9C400 )
            {
              ++dword_140C12F74;
            }
            else
            {
              v15 = (unsigned int *)(v13 + *(_QWORD *)(qword_140C65720 + 376LL * i + 368) + 88LL);
              if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MiIsCalibrationWorthwhile)(
                                   v15,
                                   *v15,
                                   (LARGE_INTEGER)v14.QuadPart,
                                   v11) )
                v11 = 1LL;
              v34 = v11;
              if ( *(_BYTE *)(v5 + 23176) == v17 )
              {
                ++dword_140C12F6C;
              }
              else if ( LOBYTE(v10[-9].LowPart) != v17 && v12 )
              {
                if ( v16 == v10->QuadPart )
                {
                  v18 = MiReduceZeroingThreads((int *)&v10[-12], 1);
                  if ( v18 == 7 )
                  {
                    ++dword_140C12F80;
                  }
                  else if ( v18 == 5 )
                  {
                    ++dword_140C12F7C;
                  }
                  else
                  {
                    ++dword_140C12F84;
                  }
                  PerformanceFrequency.QuadPart = 0LL;
                  v19 = KeQueryPerformanceCounter(&PerformanceFrequency);
                  if ( PerformanceFrequency.QuadPart != 10000000 )
                    v19.QuadPart = 10000000 * v19.QuadPart / PerformanceFrequency.QuadPart;
                  v11 = v34;
                  *v10 = v19;
                }
                else
                {
                  ++dword_140C12F78;
                }
              }
            }
            goto LABEL_15;
          }
          ++dword_140C12F70;
LABEL_15:
          ++v12;
          v10 += 37;
          v13 += 96LL;
          if ( v13 >= 288 )
          {
            v9 = v33;
            if ( (_DWORD)v11 )
              KeSetEvent((PRKEVENT)&v30[8], 0, 0);
            ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v33 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v23 = ~(unsigned __int16)(-1LL << (v33 + 1));
                v24 = (v23 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v23;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            v1 = a1;
            goto LABEL_20;
          }
        }
      }
      if ( *(_QWORD *)(v5 + 22832) >= 0x2000uLL || *v6 )
        KeSetEvent((PRKEVENT)(v1 + 128), 0, 0);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 23160));
      if ( KiIrqlFlags )
      {
        v25 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v24 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
LABEL_20:
      __writecr8(v9);
    }
    result.QuadPart = (unsigned __int16)KeNumberNodes;
  }
  return result;
}
