void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, char *a2)
{
  LARGE_INTEGER v3; // r14
  char v4; // bp
  __int64 v5; // rsi
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  char v11; // [rsp+68h] [rbp+10h] BYREF
  union _LARGE_INTEGER v12; // [rsp+70h] [rbp+18h] BYREF

  v12.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&v12);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 216, &LockHandle);
  if ( v3.QuadPart >= *((_QWORD *)a2 + 24) )
  {
    ExCancelTimer(*((_QWORD *)a2 + 23), 0LL);
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v8, &EventYieldCancelExpirationTimer, v9, *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 24) = 0LL;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
    if ( *((_DWORD *)a2 + 20) )
    {
      do
      {
        v6 = (__int64 *)*((_QWORD *)a2 + 79);
        if ( (unsigned int)v5 < *((_DWORD *)a2 + 176) )
          v6 += v5;
        v7 = *v6;
        v11 = 0;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
          v7,
          (LARGE_INTEGER)v3.QuadPart,
          &v11);
        if ( v11 )
          v4 = 1;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a2 + 20) );
      if ( v4 )
      {
        *((_QWORD *)a2 + 153) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a2 + 1192), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
