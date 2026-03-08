/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02D9190
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180D4C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C021948C (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C0394988 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v6; // rdi
  char *v7; // rbx

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v3 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v2);
    v6 = (struct _KTHREAD **)Current;
    if ( Current )
    {
      v7 = (char *)Current + 216;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v7, 0LL);
      *((_QWORD *)v7 + 1) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v6, 0LL);
      DXGADAPTER::AcquireCoreSync(0LL, 1);
      DXGADAPTER::AcquireDdiSync(0LL, 1);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, DxgAdapterFromChild);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DpiGetDxgAdapterFromChild failed in DxgkCaptureSynchronize, returning 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
}
