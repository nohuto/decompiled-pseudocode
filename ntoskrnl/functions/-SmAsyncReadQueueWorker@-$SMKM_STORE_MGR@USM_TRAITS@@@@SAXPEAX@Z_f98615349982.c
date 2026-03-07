__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker(__int64 a1)
{
  _QWORD *v1; // r14
  int v2; // eax
  __int64 v3; // rdx
  int v4; // r8d
  unsigned int v5; // r12d
  volatile signed __int64 *v6; // r15
  __int64 v7; // rsi
  KIRQL v8; // al
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  LARGE_INTEGER v15; // rbx
  unsigned __int64 v16; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  int i; // r14d
  KIRQL v19; // al
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  int v26; // edi
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  __int64 result; // rax
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 40) & 3;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 32) & 7;
  PerformanceFrequency.QuadPart = 0LL;
  v3 &= 0xFFFFFFFFFFFFFFFCuLL;
  v5 = 100;
  v6 = (volatile signed __int64 *)(v3 + 768);
  v7 = v3 + 24LL * ((8 * v2) | (unsigned int)v4);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 768));
  --*(_DWORD *)(v7 + 16);
  ++*(_DWORD *)(v7 + 20);
  v9 = v8;
  KxReleaseSpinLock(v6);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
LABEL_9:
  v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v1[4] & 0xFFFFFFFFFFFFFFF8uLL, v1 - 5, 0LL);
  v16 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v15.QuadPart) / PerformanceFrequency.QuadPart;
  if ( v16 < v5 )
    v5 = v16;
  PerformanceCounter.QuadPart = 0LL;
  for ( i = 0; ; i = 1 )
  {
LABEL_12:
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
    v20 = *(_QWORD **)(v7 + 8);
    v21 = v19;
    if ( *v20 )
    {
      if ( v20 == (_QWORD *)v7 )
      {
        v1 = 0LL;
      }
      else
      {
        v1 = *(_QWORD **)v7;
        *(_QWORD *)v7 = **(_QWORD **)v7;
        if ( v1 == v20 )
        {
          *(_QWORD *)v7 = 0LL;
          *(_QWORD *)(v7 + 8) = v7;
        }
        else
        {
          --*v20;
        }
      }
      KxReleaseSpinLock(v6);
      if ( KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
          v14 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      __writecr8(v21);
      goto LABEL_9;
    }
    if ( i )
      break;
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v14 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    __writecr8(v21);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v26 = 0;
    while ( *(_DWORD *)(v7 + 16) <= *(_DWORD *)(v7 + 20) )
    {
      if ( **(_QWORD **)(v7 + 8) )
        goto LABEL_12;
      if ( (++v26 & 0x7F) == 0
        && 1000000
         * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart)
         / PerformanceFrequency.QuadPart >= (unsigned __int64)v5 )
      {
        break;
      }
      _mm_pause();
    }
  }
  --*(_DWORD *)(v7 + 20);
  result = KxReleaseSpinLock(v6);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v21 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v33 = v32->SchedulerAssist;
      v14 = ((unsigned int)result & v33[5]) == 0;
      v33[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  __writecr8(v21);
  return result;
}
