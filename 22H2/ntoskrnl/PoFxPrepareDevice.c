/*
 * XREFs of PoFxPrepareDevice @ 0x14036E7C0
 * Callers:
 *     PnpStartDevice @ 0x14036E714 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x14073D6A4 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x1407C6AC8 (PiProcessAddBootDevices.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     PopPluginPrepareDevice @ 0x14056D9A4 (PopPluginPrepareDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x14073A4F8 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x14074C458 (PopDiagTraceFxDevicePreparation.c)
 */

LONG __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  LONG result; // eax
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v8; // rdi
  ULONG_PTR *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  _m_prefetchw((const void *)(a1 + 296));
  result = _InterlockedOr((volatile signed __int32 *)(a1 + 296), 0);
  if ( (result & 1) != 0 )
    return result;
  _m_prefetchw((const void *)(a1 + 296));
  v5 = *(_DWORD *)(a1 + 296);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 2) != 0 )
    goto LABEL_7;
  result = PopFxFindDeviceAndAllocateUniqueId(a1, &v12);
  if ( result != -1073741738 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 2u);
LABEL_7:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    v8 = (ULONG_PTR *)PopFxPluginList;
    v9 = 0LL;
    while ( v8 != &PopFxPluginList )
    {
      if ( (unsigned __int8)PopPluginPrepareDevice((ULONG_PTR)v8) )
      {
        LOBYTE(v10) = 1;
        PopDiagTraceFxDevicePreparation(a1, v8, a1 + 128, v10);
        v9 = v8;
        if ( v8 )
          goto LABEL_14;
        break;
      }
      v8 = (ULONG_PTR *)*v8;
    }
    if ( !a2 )
      goto LABEL_15;
LABEL_14:
    *(_QWORD *)(a1 + 144) = v9;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 1u);
    *(_WORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
LABEL_15:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v11 = v12;
  if ( v12 )
  {
    result = _InterlockedDecrement((volatile signed __int32 *)(v12 + 276));
    if ( !result )
      return KeSetEvent((PRKEVENT)(v11 + 280), 0, 0);
  }
  return result;
}
