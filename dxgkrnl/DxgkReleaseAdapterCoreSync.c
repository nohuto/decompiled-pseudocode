/*
 * XREFs of DxgkReleaseAdapterCoreSync @ 0x1C0180708
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C001BC60 (DpiEnterSystemDisplay.c)
 *     DpiLeaveSystemDisplay @ 0x1C005E1F0 (DpiLeaveSystemDisplay.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01A7070 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoIsChildConnected @ 0x1C01E6E20 (DpiPdoIsChildConnected.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0202548 (DpiFdoCreateRelatedObjects.c)
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 *     DpiPdoHandleQueryDeviceText @ 0x1C0214910 (DpiPdoHandleQueryDeviceText.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C0395D30 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0395EF8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C03A1FD4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiProcessEventRequests @ 0x1C03A2598 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180784 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkReleaseAdapterCoreSync(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+58h] [rbp-20h]
  char v11; // [rsp+60h] [rbp-18h]

  v9 = -1;
  v10 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v11 = 1;
    v9 = 1009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 1009);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v9, 1009);
  if ( a1 )
  {
    DXGADAPTER::ReleaseCoreSync(a1, a2);
    v5 = 0;
  }
  else
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 )
  {
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v9);
  }
  return v5;
}
