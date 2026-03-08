/*
 * XREFs of PsSwapProcessWorkingSet @ 0x1409AB6DC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A408A4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     PspLockProcessShared @ 0x140302A10 (PspLockProcessShared.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x14040BA70 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage.c)
 *     PspUnlockProcessSharedUnsafe @ 0x1405A1B3C (PspUnlockProcessSharedUnsafe.c)
 *     PspComputeExecutionStateOld @ 0x14067CD7C (PspComputeExecutionStateOld.c)
 *     PspRequestProcessExecutionStateOld @ 0x14067CE2C (PspRequestProcessExecutionStateOld.c)
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 *     PspRequestProcessExecutionState @ 0x1406FF388 (PspRequestProcessExecutionState.c)
 *     PspComputeExecutionState @ 0x1406FF3AC (PspComputeExecutionState.c)
 */

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
