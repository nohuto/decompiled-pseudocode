void __fastcall VidSchiSubmitCommandPacketToQueue(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r13
  _QWORD *v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r12
  int v11; // edi
  __int64 v12; // rax
  VIDMM_DEVICE *v13; // rcx
  int v14; // eax
  KPRIORITY v15; // r13d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-11h] BYREF
  __int16 v17; // [rsp+68h] [rbp+7h]
  _QWORD v18[4]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+C8h] [rbp+67h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = *(_QWORD **)(v2 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  VidSchiEnsureVSyncEnabled(a1, v4);
  v17 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  LOBYTE(v17) = 1;
  v6 = *(_QWORD *)(v2 + 144);
  *(_QWORD *)(v2 + 144) = v6 + 1;
  *(_QWORD *)(a1 + 112) = v6;
  v7 = MEMORY[0xFFFFF78000000320];
  v4[24] = v7 * KeQueryTimeIncrement();
  if ( !*(_DWORD *)(a1 + 48) )
  {
    *(_QWORD *)(v2 + 176) = *(_QWORD *)(a1 + 112);
    ++v4[199];
  }
  VidSchiProfilePerformanceTick(4, v5, v3, 0, 0LL, a1, 0LL, 0LL);
  v20 = 0;
  VidSchiInsertCommandToSoftwareQueue(a1, &v20);
  if ( (_BYTE)v17 )
  {
    if ( HIBYTE(v17) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v17) = 0;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v2 + 96) + 24LL);
  if ( (*(_DWORD *)(v8 + 2536) & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread != *(struct _KTHREAD **)(v8 + 168) && CurrentThread != *(struct _KTHREAD **)(v8 + 176) )
    {
      v10 = 0;
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
      {
        v11 = 31;
      }
      else
      {
        v11 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        if ( v11 <= 16 )
          goto LABEL_12;
      }
      goto LABEL_19;
    }
    v10 = 1;
    if ( !*(_DWORD *)(v2 + 780) )
    {
      v11 = 16;
LABEL_19:
      LOWORD(v19) = 0;
      v18[0] = v8 + 2464;
      while ( 1 )
      {
        AcquireSpinLock::Acquire((AcquireSpinLock *)v18);
        v14 = *(_DWORD *)(v2 + 780);
        if ( v10 )
        {
          if ( v14 )
          {
LABEL_24:
            AcquireSpinLock::Release((AcquireSpinLock *)v18);
            break;
          }
        }
        else if ( !v14 )
        {
          goto LABEL_24;
        }
        v15 = VidSchiComputeWorkerThreadPriority(v2, v11);
        if ( v15 == KeQueryPriorityThread(*(PKTHREAD *)(v8 + 168)) )
          goto LABEL_24;
        AcquireSpinLock::Release((AcquireSpinLock *)v18);
        KeSetPriorityThread(*(PKTHREAD *)(v8 + 168), v15);
      }
    }
  }
LABEL_12:
  if ( v20 )
  {
    *(_QWORD *)(v5 + 1224) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1192), 0, 0);
  }
  v12 = v4[1];
  if ( v12 )
  {
    v13 = *(VIDMM_DEVICE **)(v12 + 792);
    if ( v13 )
      VIDMM_DEVICE::EnsureSchedulable(v13, 1);
  }
  if ( (_BYTE)v17 )
  {
    if ( HIBYTE(v17) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
