/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C022CA50
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C012E5B4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C02845EC (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C02C6DB0 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGPROCESS *v12; // rdi
  char *v13; // rbx

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
  v12 = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v11, v10);
    v6 = -1073741811LL;
    goto LABEL_3;
  }
  v13 = (char *)Current + 176;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v13, 0LL);
  *((_QWORD *)v13 + 1) = KeGetCurrentThread();
  DXGPROCESS::AcquireDeviceLockForAllDevices(v12, 0LL);
  DXGADAPTER::AcquireCoreSync(0LL, 1);
  DXGADAPTER::AcquireDdiSync(0LL, 1);
  return 0LL;
}
