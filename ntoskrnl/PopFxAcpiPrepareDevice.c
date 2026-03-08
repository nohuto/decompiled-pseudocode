/*
 * XREFs of PopFxAcpiPrepareDevice @ 0x14059E918
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x14059E614 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140393420 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopPluginAcpiNotificationStrict @ 0x1405A07CC (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiPrepareDevice(const UNICODE_STRING *a1, ULONG_PTR a2, ULONG_PTR *a3, _BYTE *a4)
{
  int AcpiDeviceByUniqueId; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rsi
  ULONG_PTR i; // rbx

  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a1, 0LL);
  if ( AcpiDeviceByUniqueId < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) >= 3u
        && *(_QWORD *)(i + 112)
        && (unsigned __int8)PopPluginAcpiNotificationStrict(i, 1uLL, a2)
        && *(_BYTE *)(a2 + 12) )
      {
        v9 = i;
        break;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v9 )
    {
      *a3 = v9;
      AcpiDeviceByUniqueId = 0;
      *a4 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)AcpiDeviceByUniqueId;
}
