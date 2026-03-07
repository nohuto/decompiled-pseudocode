__int64 __fastcall VidSchiCompleteAllPendingCommand(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int i; // r14d
  __int64 *v4; // r15
  __int64 v5; // r15
  LARGE_INTEGER *v6; // rbx
  bool IsTDRPending; // al
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-60h] BYREF
  char v11; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v13[4]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v14; // [rsp+70h] [rbp-10h]

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
  {
    v4 = *(__int64 **)(a1 + 632);
    if ( i < *(_DWORD *)(a1 + 704) )
      v4 += i;
    v5 = *v4;
    if ( (*(_DWORD *)(v5 + 12) & 2) != 0 )
    {
      VidSchiRundownHardwareScheduledContexts((struct _VIDSCH_NODE *)v5);
    }
    else
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
      v6 = (LARGE_INTEGER *)(*(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196));
      memset(v6, 0, 0x70uLL);
      *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
      v6[1] = KeQueryPerformanceCounter(0LL);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v6->LowPart = 7;
      v6[2] = *(LARGE_INTEGER *)(v5 + 152);
      LOBYTE(v6[3].LowPart) = *(_BYTE *)(a1 + 3036) & 1;
      IsTDRPending = VidSchIsTDRPending(a1);
      BYTE2(v6[3].u.LowPart) = 0;
      BYTE1(v6[3].LowPart) = IsTDRPending;
      VidSchiCompletePendingCommandInNodeHwQueue(v5, *(_QWORD *)(v5 + 152), 0LL);
      v8 = *(_QWORD *)(v5 + 168);
      *(_QWORD *)(v5 + 64) = v8;
      *(_QWORD *)(v5 + 72) = v8;
      if ( *(_DWORD *)(v5 + 2900) )
        VidSchiWaitForCompletePreemption(v5);
    }
  }
  v14 = 0;
  v13[0] = a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v13);
  v11 = 0;
  v10[1] = v10;
  v10[0] = v10;
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
      VidSchiCompletePendingFlip((int)v10, a1, v1++, 9);
    while ( v1 < *(_DWORD *)(a1 + 40) );
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v10);
  AcquireSpinLock::Release((AcquireSpinLock *)v13);
  return 0LL;
}
