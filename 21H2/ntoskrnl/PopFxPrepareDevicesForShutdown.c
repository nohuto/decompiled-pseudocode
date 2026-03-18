/*
 * XREFs of PopFxPrepareDevicesForShutdown @ 0x1405CD27C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PopFxActivateDevicesForSx @ 0x14039734C (PopFxActivateDevicesForSx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char PopFxPrepareDevicesForShutdown()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v4; // edx
  int v5; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  PopFxEnableShutdownActiveBias = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v1 = KeGetCurrentThread();
  if ( (unsigned __int64)&PopFxDeviceListLock - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v1->ApcState.Process);
  _disable();
  p_Process = (__int64)&v1[1].Process;
  v4 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v4;
    p_Process += 96LL;
    if ( v4 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_12:
    if ( (*((_DWORD *)&v1->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v1, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    _enable();
    goto LABEL_20;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v5 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v1->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v5 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v1, (__int64)&PopFxDeviceListLock, v5);
LABEL_20:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return PopFxActivateDevicesForSx(4u);
}
