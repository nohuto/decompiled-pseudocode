/*
 * XREFs of CiSchedulerCancelTaskIndexYield @ 0x1C0002C60
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A760 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C00020F0 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002D50 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x1C00030B0 (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0004104 (CiLogTaskIndexCancelYield.c)
 */

void __fastcall CiSchedulerCancelTaskIndexYield(__int64 a1)
{
  char v1; // di
  int v3; // eax

  v1 = 0;
  if ( byte_1C00073C0 )
    CiLogTaskIndexCancelYield();
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  *(_DWORD *)(a1 + 184) &= ~8u;
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v1 = 1;
  }
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
  }
  else if ( !v1 )
  {
    goto LABEL_10;
  }
  CiSchedulerUpdateTaskIndexPriorities(a1);
LABEL_10:
  v3 = *(_DWORD *)(a1 + 184);
  if ( (v3 & 0x20) != 0 )
  {
    v3 &= ~0x20u;
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v3;
  }
  if ( (v3 & 0x10) != 0 )
    *(_DWORD *)(a1 + 184) = v3 & 0xFFFFFFEF;
  CiSchedulerRefreshTaskIndexQosProperties(a1);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
