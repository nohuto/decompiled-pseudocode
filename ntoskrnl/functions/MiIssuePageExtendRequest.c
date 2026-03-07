__int64 __fastcall MiIssuePageExtendRequest(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  int v10; // r10d
  int v11; // r13d
  volatile signed __int32 *v12; // rbx
  char v13; // al
  char v14; // al
  unsigned int v15; // r9d
  LARGE_INTEGER *Timeout; // r14
  unsigned int v17; // edx
  char v18; // cl
  char v19; // cl
  unsigned int v20; // ecx
  __int64 v21; // r8
  char v22; // dl
  char v23; // dl
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r8
  volatile signed __int32 **v27; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  _QWORD v34[12]; // [rsp+38h] [rbp-29h] BYREF

  memset(v34, 0, 0x58uLL);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = a3 & 8;
  if ( (a3 & 8) != 0 && !*(_BYTE *)(a1 + 1745) )
    return 0LL;
  v11 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v12 = (volatile signed __int32 *)(a1 + (v10 != 0 ? 1496LL : 480LL));
    if ( _InterlockedCompareExchange(v12 + 18, 1, 0) )
      return 0LL;
    v13 = *((_BYTE *)v12 + 79);
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (a3 & 4) != 0 )
      v14 = v13 | 1;
    else
      v14 = v13 & 0xFE;
    *((_BYTE *)v12 + 79) = v14;
    v15 = 0;
    Timeout = 0LL;
  }
  else
  {
    if ( (void *(__fastcall *)(__int64))CurrentThread[1].ApcState.ApcListHead[0].Blink == MiDereferenceSegmentThread
      || KeGetCurrentIrql() >= 2u
      || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      return 0LL;
    }
    if ( (a3 & 8) != 0 )
      a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v17 = *(_DWORD *)(a1 + 17048);
    v12 = (volatile signed __int32 *)v34;
    LODWORD(v34[9]) = 1;
    v18 = HIBYTE(v34[9]) & 0xEA;
    v34[0] = 0LL;
    BYTE4(v34[9]) = a4;
    HIBYTE(v34[9]) &= 0xEAu;
    if ( (a3 & 1) != 0 )
      v19 = v18 | 2;
    else
      v19 = v18 & 0xFD;
    HIBYTE(v34[9]) = v19;
    v34[8] = &v34[7];
    v34[7] = &v34[7];
    LOWORD(v34[6]) = 0;
    BYTE2(v34[6]) = 6;
    HIDWORD(v34[6]) = 0;
    if ( (a3 & 8) != 0 )
    {
      Timeout = (LARGE_INTEGER *)&MiOneSecond;
    }
    else if ( a4 >= v17 )
    {
      Timeout = (LARGE_INTEGER *)&MiOneSecond;
      v20 = 0;
      if ( v17 )
      {
        v21 = a1 + 17056;
        do
        {
          if ( (*(_WORD *)(*(_QWORD *)v21 + 204LL) & 0x50) == 0 && **(_QWORD **)v21 < *(_QWORD *)(*(_QWORD *)v21 + 8LL) )
            break;
          ++v20;
          v21 += 8LL;
        }
        while ( v20 < v17 );
        v9 = 0LL;
      }
      if ( v20 == v17 )
        return 0LL;
    }
    else
    {
      Timeout = 0LL;
    }
    v15 = 1;
  }
  v22 = *((_BYTE *)v12 + 79);
  if ( v10 )
    v23 = v22 | 8;
  else
    v23 = v22 & 0xF7;
  *((_QWORD *)v12 + 5) = 0LL;
  *((_QWORD *)v12 + 10) = 0LL;
  *((_QWORD *)v12 + 4) = a2;
  LOBYTE(v9) = 17;
  *((_QWORD *)v12 + 3) = a1;
  *((_BYTE *)v12 + 79) = v23 & 0xDF | (&MiOneSecond != (__int64 *)Timeout ? 0x20 : 0);
  MiQueuePageFileExtension(v12, v15, v9);
  if ( !v11 )
  {
    if ( KeWaitForSingleObject((PVOID)(v12 + 12), Executive, 0, 0, Timeout) == 258 )
    {
      v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
      if ( !*((_DWORD *)v12 + 13) )
      {
        v25 = *((_QWORD *)v12 + 10);
        if ( v25 )
        {
          *(_QWORD *)(v25 + 80) = 0LL;
        }
        else
        {
          v26 = *((_QWORD *)v12 + 1);
          v27 = (volatile signed __int32 **)*((_QWORD *)v12 + 2);
          if ( *(volatile signed __int32 **)(v26 + 8) != v12 + 2 || *v27 != v12 + 2 )
            __fastfail(3u);
          *v27 = (volatile signed __int32 *)v26;
          *(_QWORD *)(v26 + 8) = v27;
        }
        *((_QWORD *)v12 + 5) = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1408));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v32 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v24);
    }
    if ( *((_QWORD *)v12 + 5) )
      return 1LL;
  }
  return 0LL;
}
