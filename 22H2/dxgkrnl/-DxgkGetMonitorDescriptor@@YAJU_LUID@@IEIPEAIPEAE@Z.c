/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0169900
 * Callers:
 *     DxgkGetMonitorEdid @ 0x1C01698D0 (DxgkGetMonitorEdid.c)
 *     DxgkGetMonitorDisplayId @ 0x1C0298250 (DxgkGetMonitorDisplayId.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C0137450 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01636C4 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetEdidFromMonitor @ 0x1C0169AF0 (MonitorGetEdidFromMonitor.c)
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
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  DXGGLOBAL *Global; // rax
  DWORD v18; // ebx
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGADAPTER *v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  int MonitorHandle; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct HDXGMONITOR__ *v31; // rsi
  int EdidFromMonitor; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 HighPart; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rax
  int DisplayIDFromMonitor; // eax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rax
  unsigned int v58; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID v59; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID v60; // [rsp+40h] [rbp-C0h] BYREF
  struct HDXGMONITOR__ *v61; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v62; // [rsp+50h] [rbp-B0h]
  unsigned int *v63; // [rsp+58h] [rbp-A8h]
  int v64; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+68h] [rbp-98h]
  char v66; // [rsp+70h] [rbp-90h]
  unsigned __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v68[144]; // [rsp+80h] [rbp-80h] BYREF

  v64 = -1;
  v6 = a3;
  LowPart = a1.LowPart;
  v63 = a5;
  v62 = a6;
  v8 = a4;
  v9 = a2;
  v60 = a1;
  v65 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v66 = 1;
    v64 = 2187;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2187);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v64, 2187LL);
  v59 = 0LL;
  v58 = 0;
  v61 = 0LL;
  if ( v6 && (v8 & 0x7F) != 0 )
  {
    v42 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v42 + 24) = v8;
    *(_QWORD *)(v42 + 32) = 128LL;
    WdLogEvent5_WdWarning(v42);
    LODWORD(v16) = -1073741811;
    goto LABEL_19;
  }
  v13 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v60, (unsigned int)v9, &v59, &v58);
  v16 = v13;
  if ( v13 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v43[3] = v60.HighPart;
    v44 = LowPart;
    v43[5] = v9;
    v43[6] = v16;
LABEL_28:
    v43[4] = v44;
    WdLogEvent5_WdError(v43);
    goto LABEL_19;
  }
  Global = DXGGLOBAL::GetGlobal(v15, v14);
  v18 = v59.LowPart;
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v59, &v67);
  v22 = v19;
  if ( !v19 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v43[6] = 0LL;
LABEL_27:
    v43[3] = v59.HighPart;
    v44 = v18;
    LODWORD(v16) = -1073741811;
    v43[5] = -1073741811LL;
    goto LABEL_28;
  }
  if ( !*((_QWORD *)v19 + 337) )
  {
    DXGADAPTER::ReleaseReference(v19);
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
    v43[6] = 1LL;
    goto LABEL_27;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, v19, 0LL);
  DXGADAPTER::ReleaseReference(v22);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68, 0LL);
  v27 = v23;
  if ( v23 < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v47[3] = v59.HighPart;
    v47[4] = v18;
    v47[5] = v27;
    WdLogEvent5_WdWarning(v47);
  }
  else
  {
    MonitorHandle = MonitorGetMonitorHandle((__int64)v22, v58, 0, DxgkGetMonitorDescriptor, &v61);
    v27 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v31 = v61;
      if ( !v61 )
      {
        v50 = WdLogNewEntry5_WdAssertion(v30, v29);
        *(_QWORD *)(v50 + 24) = 7385LL;
        WdLogEvent5_WdAssertion(v50);
      }
      if ( v6 )
      {
        EdidFromMonitor = MonitorGetEdidFromMonitor(v31, v8, v63, v62);
        v35 = EdidFromMonitor;
        if ( EdidFromMonitor < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
          v51[3] = v60.HighPart;
          v51[4] = LowPart;
          v51[5] = v9;
          v51[6] = v35;
          v51[7] = 1LL;
          WdLogEvent5_WdError(v51);
        }
        LODWORD(v16) = 0;
      }
      else
      {
        DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v31, v8, v63, v62);
        v16 = DisplayIDFromMonitor;
        v55 = DisplayIDFromMonitor + 0x80000000;
        if ( (int)v55 >= 0 && DisplayIDFromMonitor != -1073741789 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v53, v54);
          v56[3] = v60.HighPart;
          v56[4] = LowPart;
          v56[5] = v9;
          v56[6] = v16;
          WdLogEvent5_WdWarning(v56);
        }
      }
      if ( (int)MonitorReleaseMonitorHandle((__int64)v22, (__int64)v31, DxgkGetMonitorDescriptor) < 0 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v57 + 24) = 7430LL;
        WdLogEvent5_WdAssertion(v57);
      }
      goto LABEL_18;
    }
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    HighPart = v60.HighPart;
    v48[7] = 0LL;
    v48[3] = HighPart;
    v48[4] = LowPart;
    v48[5] = v9;
    v48[6] = v27;
    WdLogEvent5_WdError(v48);
  }
  LODWORD(v16) = v27;
LABEL_18:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68, v36);
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v38);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v64);
  return (unsigned int)v16;
}
