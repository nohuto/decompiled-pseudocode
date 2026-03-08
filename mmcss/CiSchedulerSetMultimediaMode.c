/*
 * XREFs of CiSchedulerSetMultimediaMode @ 0x1C0003178
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A760 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C0001010 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x1C00030B0 (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     CiLogSetBufferingMode @ 0x1C0004080 (CiLogSetBufferingMode.c)
 */

__int64 __fastcall CiSchedulerSetMultimediaMode(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // esi

  v2 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (unsigned int)-1073741811;
    v4 = 2;
  }
  else
  {
    v4 = 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_1C00073C0 )
      CiLogSetBufferingMode();
    CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    *(_DWORD *)(a1 + 184) = v4 | *(_DWORD *)(a1 + 184) & 0xFFFFFFFD | 1;
    CiSchedulerRefreshTaskIndexQosProperties(a1);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
  return v2;
}
