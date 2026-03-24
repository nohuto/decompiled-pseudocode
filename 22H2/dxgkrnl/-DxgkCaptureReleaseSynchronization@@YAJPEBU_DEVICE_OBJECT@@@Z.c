/*
 * XREFs of ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C022CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C012E224 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C02861CC (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C02C6DB0 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureReleaseSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rdi

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v6 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v3, v2);
LABEL_3:
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v6;
  }
  Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v10, v9);
    v6 = -1073741811LL;
    goto LABEL_3;
  }
  DXGADAPTER::ReleaseDdiSync(0LL);
  DXGADAPTER::ReleaseCoreSync(0LL, 1);
  DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, 0LL);
  *((_QWORD *)Current + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
