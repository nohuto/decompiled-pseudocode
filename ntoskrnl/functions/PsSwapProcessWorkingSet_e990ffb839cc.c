__int64 __fastcall PsSwapProcessWorkingSet(PEPROCESS Process, char a2)
{
  int IsEnabledDeviceUsage; // eax
  struct _KTHREAD *CurrentThread; // rbp
  char v6; // bl
  __int64 v7; // r14
  __int64 v8; // rsi
  char v9; // dl
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // ebx
  unsigned int v13; // ebx

  IsEnabledDeviceUsage = Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage();
  CurrentThread = KeGetCurrentThread();
  if ( IsEnabledDeviceUsage )
  {
    v6 = 0;
    PspLockProcessShared((__int64)Process, (__int64)CurrentThread);
    v7 = Process[1].Affinity.StaticBitmap[16];
    if ( v7 )
    {
      v8 = v7 + 56;
      ExAcquireResourceSharedLite((PERESOURCE)(v7 + 56), 1u);
      v6 = PspComputeExecutionState();
    }
    else
    {
      v8 = 56LL;
    }
    v9 = v6 | 2;
    if ( !a2 )
      v9 = v6 & 0xFD;
    PspRequestProcessExecutionState((__int64)Process, v9, 1);
  }
  else
  {
    v10 = 0;
    PspLockProcessShared((__int64)Process, (__int64)CurrentThread);
    v7 = Process[1].Affinity.StaticBitmap[16];
    if ( v7 )
    {
      v8 = v7 + 56;
      ExAcquireResourceSharedLite((PERESOURCE)(v7 + 56), 1u);
      v10 = PspComputeExecutionStateOld(v7);
    }
    else
    {
      v8 = 56LL;
    }
    v11 = v10 & 0xFFFFFFFD;
    v12 = v10 | 2;
    if ( !a2 )
      v12 = v11;
    PspRequestProcessExecutionStateOld((__int64)Process, v12, 1);
  }
  if ( v7 )
    ExReleaseResourceLite((PERESOURCE)v8);
  PspUnlockProcessSharedUnsafe((__int64)Process);
  v13 = PspChangeProcessExecutionState(Process);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v13;
}
