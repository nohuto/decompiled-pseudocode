/*
 * XREFs of DxgkAcquireAdapterCoreSync @ 0x1C01801F4
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C001BC60 (DpiEnterSystemDisplay.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
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
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180D4C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterCoreSync(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  const wchar_t *v9; // r9
  int v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp-20h]
  char v12; // [rsp+60h] [rbp-18h]

  v10 = -1;
  v11 = 0LL;
  v4 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 1009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 1009);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 1009);
  v5 = -1073741811;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v9 = L"No pAdapter specified, returning 0x%I64x";
    v4 = -1073741811LL;
    goto LABEL_16;
  }
  if ( (_DWORD)v4 != 1 && (_DWORD)v4 != 2 && (_DWORD)v4 != 3 && (_DWORD)v4 != 4 && (_DWORD)v4 != 6 )
  {
    WdLogSingleEntry1(2LL, v4);
    v9 = L"Invalid adapter synchronization level 0x%I64x";
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v4, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_7;
  }
  DXGADAPTER::AcquireCoreSync(a1, (unsigned int)v4);
  v5 = 0;
LABEL_7:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v10);
  }
  return v5;
}
