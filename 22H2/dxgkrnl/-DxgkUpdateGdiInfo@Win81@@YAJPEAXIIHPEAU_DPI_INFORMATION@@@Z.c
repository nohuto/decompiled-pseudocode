/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AFDCC
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C02B0ED0 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkQueryDmmInterface @ 0x1C00EC7C8 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02B0498 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v6; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int updated; // ebx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 CurrentProcess; // rax
  _QWORD *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  Win81 *v32; // [rsp+30h] [rbp-A1h] BYREF
  int v33; // [rsp+38h] [rbp-99h] BYREF
  __int64 v34; // [rsp+40h] [rbp-91h]
  char v35; // [rsp+48h] [rbp-89h]
  _BYTE v36[144]; // [rsp+50h] [rbp-81h] BYREF

  v33 = -1;
  v34 = 0LL;
  v6 = a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2172LL);
  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, this, 0LL);
    v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36, 0LL);
    v17 = v14;
    if ( v14 >= 0 )
    {
      v32 = 0LL;
      v25 = DxgkQueryDmmInterface(this, v15, &v32);
      v17 = v25;
      if ( v25 >= 0 )
      {
        updated = Win81::UpdateGdiInfoForVidPnSource(v32, this, (void *const)(unsigned int)v8, v6, a4, a5, v32);
        goto LABEL_13;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v24[3] = v17;
      v24[4] = this;
      v24[5] = v8;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v18[3] = v17;
      CurrentProcess = PsGetCurrentProcess(v20, v19, v21, v22);
      v18[5] = this;
      v24 = v18;
      v18[4] = CurrentProcess;
    }
    WdLogEvent5_WdError(v24);
    updated = v17;
LABEL_13:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36, v28);
    goto LABEL_14;
  }
  v11 = WdLogNewEntry5_WdError(v10, v9);
  updated = -1073741811;
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v11);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v13);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v33);
  return updated;
}
