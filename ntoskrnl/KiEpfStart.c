char __fastcall KiEpfStart(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *SchedulerAssist; // rax
  char v5; // di
  _BYTE *v6; // rcx
  __int64 **v7; // rax
  char result; // al
  signed __int32 v9; // edx
  int v10; // eax
  BOOLEAN v11; // bl
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  unsigned __int64 v14; // [rsp+30h] [rbp-20h]
  __int16 v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+3Ah] [rbp-16h]
  char v17; // [rsp+3Bh] [rbp-15h]
  int v18; // [rsp+3Ch] [rbp-14h]
  _QWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v17 = 0;
  _InterlockedIncrement(&KiEpfCounters);
  CurrentThread = KeGetCurrentThread();
  v18 = 0;
  v14 = a1;
  v19[1] = v19;
  v19[0] = v19;
  v15 = 263;
  v16 = 6;
  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( *(int *)(v2 + 24) > 0 )
    goto LABEL_9;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !KiEpfCompletionQueue )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v5 = 0;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 1;
    goto LABEL_10;
  }
  if ( CurrentThread == CurrentPrcb->IdleThread )
  {
    v5 = 0;
    v6 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v6 )
      v6[16] = 1;
    goto LABEL_10;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
LABEL_9:
    v5 = 0;
LABEL_10:
    --*(_DWORD *)(v2 + 24);
    goto LABEL_14;
  }
  v7 = *(__int64 ***)(v2 + 8);
  v5 = 1;
  if ( *v7 != (__int64 *)v2 )
    __fastfail(3u);
  v13 = *(_QWORD *)(v2 + 8);
  v12 = v2;
  *v7 = &v12;
  *(_QWORD *)(v2 + 8) = &v12;
LABEL_14:
  result = KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  if ( v5 )
  {
    _InterlockedIncrement(&dword_140C413F0);
    v9 = _InterlockedIncrement(&dword_140C413F4);
    do
      v10 = dword_140C413F8;
    while ( dword_140C413F8 < v9 && v10 != _InterlockedCompareExchange(&dword_140C413F8, v9, dword_140C413F8) );
    v11 = KeSetKernelStackSwapEnable(0);
    KeWaitForGate((__int64)&v15, 39LL, 0);
    result = KeSetKernelStackSwapEnable(v11);
    _InterlockedDecrement(&dword_140C413F4);
  }
  return result;
}
