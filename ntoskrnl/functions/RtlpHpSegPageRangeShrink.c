__int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // r13d
  int v5; // r10d
  char v8; // bp
  unsigned __int8 CurrentIrql; // r15
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  char v13; // dl
  unsigned __int64 v14; // r14
  __int64 result; // rax
  char v16; // cl
  int v17; // r10d
  int v18; // r11d
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  __int16 *v22; // rcx
  int v23; // eax
  unsigned int i; // edx
  unsigned __int64 v25; // rdx
  bool v26; // cl
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rcx
  char *v29; // rax
  __int64 v30; // r8
  char v31; // cl
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v33; // bp
  struct _KTHREAD *v34; // rcx
  bool v35; // zf
  __int64 v36; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v38; // rdx
  unsigned __int8 v39; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v41; // r8
  int v42; // eax
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v44; // [rsp+80h] [rbp+8h] BYREF
  int v45; // [rsp+88h] [rbp+10h]
  int v46; // [rsp+90h] [rbp+18h] BYREF
  int v47; // [rsp+98h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v4 = *(unsigned __int8 *)(a2 + 31);
  v5 = a4;
  LOBYTE(v46) = 0;
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v29 = (char *)(a2 + 56);
    v30 = (unsigned int)(v4 - 2);
    do
    {
      v31 = *v29;
      v29 += 32;
      *(v29 - 32) = v31 & 0xFE;
      --v30;
    }
    while ( v30 );
  }
  v8 = 2;
  CurrentIrql = -1;
  v45 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v38) = 4;
        else
          v38 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v38;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64, CurrentIrql);
      }
      else
      {
        v44 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 64), 0x1Fu) )
          v44 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64);
        while ( (*(_DWORD *)(a1 + 64) & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (*(_DWORD *)(a1 + 64) & 0x40000000) == 0 )
            _InterlockedOr((volatile signed __int32 *)(a1 + 64), 0x40000000u);
          KeYieldProcessorEx(&v44);
        }
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    }
    v5 = v47;
  }
  v10 = *(unsigned __int8 *)(a2 + 31);
  v11 = *(_DWORD *)(a2 + 28);
  LOBYTE(v46) = CurrentIrql;
  if ( v10 != v4 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_WORD *)(a2 + 28) = -1;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + a2 + 31) = v4 - 1;
  *(_WORD *)(a2 + 28) = v11;
  *(_BYTE *)(a2 + 31) = v4;
  *(_DWORD *)a2 = -857879331;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v12 = RtlpHpSegPageRangeCoalesce(a1, a2, v5, 0, (__int64)&v46);
  v13 = *(_BYTE *)(a1 + 13);
  v14 = v12;
  if ( (v13 & 0x10) != 0
    && (result = *(unsigned __int8 *)(v12 + 31), (_DWORD)result == 256 - *(unsigned __int8 *)(a1 + 10)) )
  {
    v27 = (_QWORD *)(v14 & *(_QWORD *)a1);
    *(_DWORD *)v14 = -857879297;
    if ( v27 )
    {
      v36 = *v27;
      result = v27[1];
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || *(_QWORD **)result != v27 )
        __fastfail(3u);
      *(_QWORD *)result = v36;
      *(_QWORD *)(v36 + 8) = result;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v13 & 7) != 0 )
    {
      v16 = *(_BYTE *)(a1 + 8);
      v17 = *(unsigned __int8 *)(v14 + 31) << v16;
      v18 = 0;
      v19 = (*(_DWORD *)a1 & v14)
          + ((__int64)(v14 - (*(_QWORD *)a1 & v14)) >> 5 << v16)
          - (*(_DWORD *)a1 & ((*(_DWORD *)a1 & v14) + ((__int64)(v14 - (*(_QWORD *)a1 & v14)) >> 5 << v16)));
      v20 = *(_QWORD *)((*(_QWORD *)a1 & ((*(_QWORD *)a1 & v14) + ((__int64)(v14 - (*(_QWORD *)a1 & v14)) >> 5 << v16)))
                      + 0x18);
      v21 = v20 + 2 * ((unsigned __int64)(v17 + v19 - 1) >> 21);
      v22 = (__int16 *)(v20 + 2 * ((unsigned __int64)v19 >> 21));
      v23 = 0;
      for ( i = ((__int64)(2 * ((unsigned __int64)(v17 + v19 - 1) >> 21) - 2 * ((unsigned __int64)v19 >> 21)) >> 1) + 1;
            (unsigned __int64)v22 <= v21;
            ++v22 )
      {
        if ( (*v22 & 0x7FF) != 0 )
        {
          if ( *v22 < 0 )
            ++v23;
        }
        else
        {
          ++v18;
        }
      }
      if ( v23 == i )
      {
        v8 = i > (unsigned int)(v17 + 0x1FFFFF) >> 21;
      }
      else if ( !v23 )
      {
        v8 = (v18 == 0) + 3;
      }
    }
    else
    {
      v8 = 4;
    }
    *(_BYTE *)(v14 + 30) = v8;
    v25 = *(_QWORD *)(a1 + 96);
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
    {
      if ( !v25 )
      {
LABEL_24:
        v26 = 0;
        goto LABEL_25;
      }
      v25 ^= a1 + 96;
    }
    v26 = 0;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v14 + 28) >= *(_DWORD *)(v25 + 28) )
        {
          v28 = *(_QWORD *)(v25 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v28 )
              goto LABEL_38;
            v28 ^= v25;
          }
          if ( !v28 )
          {
LABEL_38:
            v26 = 1;
            break;
          }
        }
        else
        {
          v28 = *(_QWORD *)v25;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v28 )
              goto LABEL_24;
            v28 ^= v25;
          }
          if ( !v28 )
            goto LABEL_24;
        }
        v25 = v28;
      }
    }
LABEL_25:
    RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 96), v25, v26, v14);
    result = *(__int16 *)(a1 + 22);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), (unsigned __int16)~*(_WORD *)(v14 + 28));
    v27 = 0LL;
  }
  if ( !v45 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
      else
        *(_DWORD *)(a1 + 64) = 0;
      if ( KiIrqlFlags && (v39 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v39 <= 0xFu )
      {
        v33 = v46;
        if ( (unsigned __int8)v46 <= 0xFu && v39 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v41 = CurrentPrcb->SchedulerAssist;
          v33 = v46;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
          v35 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v33 = v46;
      }
      result = v33;
      __writecr8(v33);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      result = KeAbPostRelease(a1 + 64);
      v34 = KeGetCurrentThread();
      v35 = v34->SpecialApcDisable++ == -1;
      if ( v35 )
      {
        result = (__int64)&v34->152;
        if ( *(_QWORD *)result != result )
          result = KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( v27 )
    return RtlpHpSegSegmentFree(a1, v27, 0x7FFFFFFFLL, 1LL);
  return result;
}
