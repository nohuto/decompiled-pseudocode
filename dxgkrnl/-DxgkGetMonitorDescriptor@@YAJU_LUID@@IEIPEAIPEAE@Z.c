/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01D9AB0
 * Callers:
 *     DxgkGetMonitorEdid @ 0x1C01D9A80 (DxgkGetMonitorEdid.c)
 *     DxgkGetMonitorDisplayId @ 0x1C02F7E00 (DxgkGetMonitorDisplayId.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorGetMonitorHandle @ 0x1C0171B54 (MonitorGetMonitorHandle.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01ADBC0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01AE14C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01D7358 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetEdidFromMonitor @ 0x1C01D9C9C (MonitorGetEdidFromMonitor.c)
 */

__int64 __fastcall DxgkGetMonitorDescriptor(
        struct _LUID a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  char v6; // r13
  DWORD LowPart; // edi
  __int64 v8; // rsi
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // r15
  DXGGLOBAL *Global; // rax
  DWORD v13; // ebx
  struct DXGADAPTER *v14; // rax
  DXGADAPTER *v15; // r12
  int v16; // eax
  __int64 v17; // r15
  int MonitorHandle; // eax
  __int64 v19; // r15
  int EdidFromMonitor; // eax
  __int64 v21; // r9
  unsigned int v22; // ebx
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rsi
  __int64 HighPart; // r14
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // r14
  signed int DisplayIDFromMonitor; // eax
  unsigned int v37; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v38; // [rsp+58h] [rbp-A8h] BYREF
  struct _LUID v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  void *v41; // [rsp+70h] [rbp-90h]
  unsigned int *v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h]
  char v45; // [rsp+90h] [rbp-70h]
  unsigned __int64 v46; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v47[144]; // [rsp+A0h] [rbp-60h] BYREF

  v43 = -1;
  v6 = a3;
  LowPart = a1.LowPart;
  v42 = a5;
  v41 = a6;
  v8 = a4;
  v9 = a2;
  v39 = a1;
  v44 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2187;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2187);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2187);
  v38 = 0LL;
  v37 = 0;
  v40 = 0LL;
  if ( v6 && (v8 & 0x7F) != 0 )
  {
    WdLogSingleEntry2(3LL, v8, 128LL);
    v23 = -1073741811;
    goto LABEL_20;
  }
  v10 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v39, v9, &v38, &v37);
  v11 = v10;
  if ( v10 < 0 )
  {
    v27 = v9;
    HighPart = v39.HighPart;
    WdLogSingleEntry4(2LL, v39.HighPart, LowPart, v27, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get adapter LUID from LUID (0x%I64x%08I64x), target ID 0x%I64x (Status = 0x%I64x).",
      HighPart,
      LowPart,
      v27,
      v11,
      0LL);
    v23 = v11;
    goto LABEL_20;
  }
  Global = DXGGLOBAL::GetGlobal();
  v13 = v38.LowPart;
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v38, &v46);
  v15 = v14;
  if ( !v14 )
  {
    v29 = v38.HighPart;
    v23 = -1073741811;
    WdLogSingleEntry4(2LL, v38.HighPart, v13, -1073741811LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetMonitorDescriptor function, returning 0x%I64x.",
      v29,
      v13,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  if ( !*((_QWORD *)v14 + 365) )
  {
    DXGADAPTER::ReleaseReference(v14);
    v30 = v38.HighPart;
    v23 = -1073741811;
    WdLogSingleEntry4(2LL, v38.HighPart, v13, -1073741811LL, 1LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x%08I64x is not a display adapter, returning 0x%I64x",
      v30,
      v13,
      -1073741811LL,
      1LL,
      0LL);
    goto LABEL_20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v14, 0LL);
  DXGADAPTER::ReleaseReference(v15);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47, 0LL);
  LODWORD(v17) = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry3(3LL, v38.HighPart, v13, v16);
  }
  else
  {
    MonitorHandle = MonitorGetMonitorHandle((__int64)v15, v37, 0LL, DxgkGetMonitorDescriptor, &v40);
    v17 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v19 = v40;
      if ( !v40 )
      {
        WdLogSingleEntry1(1LL, 7787LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 7787LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v6 )
      {
        EdidFromMonitor = MonitorGetEdidFromMonitor(v19, (unsigned int)v8, v42, v41);
        if ( EdidFromMonitor < 0 )
        {
          v33 = EdidFromMonitor;
          v34 = v9;
          v35 = v39.HighPart;
          WdLogSingleEntry5(2LL, v39.HighPart, LowPart, v34, EdidFromMonitor, 1LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to get monitor EDID from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
            v35,
            LowPart,
            v34,
            v33,
            1LL);
        }
        v22 = 0;
      }
      else
      {
        DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v19, v8, v42, v41);
        v22 = DisplayIDFromMonitor;
        if ( (int)(DisplayIDFromMonitor + 0x80000000) >= 0 && DisplayIDFromMonitor != -1073741789 )
          WdLogSingleEntry4(3LL, v39.HighPart, LowPart, v9, DisplayIDFromMonitor);
      }
      if ( (int)MonitorReleaseMonitorHandle((__int64)v15, v19, DxgkGetMonitorDescriptor, v21) < 0 )
      {
        WdLogSingleEntry1(1LL, 7832LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status2)", 7832LL, 0LL, 0LL, 0LL, 0LL);
      }
      v23 = v22;
      goto LABEL_19;
    }
    v31 = v9;
    v32 = v39.HighPart;
    WdLogSingleEntry5(2LL, v39.HighPart, LowPart, v31, MonitorHandle, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get connected monitor from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v32,
      LowPart,
      v31,
      v17,
      0LL);
  }
  v23 = v17;
LABEL_19:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 )
  {
    LOBYTE(v24) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v43);
  }
  return v23;
}
