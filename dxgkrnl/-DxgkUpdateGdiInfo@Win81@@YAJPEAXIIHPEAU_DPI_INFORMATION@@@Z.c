/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031C504
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C031D800 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkQueryDmmInterface @ 0x1C016A964 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031CC94 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v6; // r14d
  struct DXGADAPTER *v7; // rdi
  struct DXGADAPTER *v8; // rbx
  unsigned int updated; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 CurrentProcess; // rax
  const wchar_t *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _DPI_INFORMATION *v23; // [rsp+30h] [rbp-D0h]
  Win81 *v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  char v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[144]; // [rsp+70h] [rbp-90h] BYREF

  v25 = -1;
  v26 = 0LL;
  v6 = a3;
  v7 = this;
  v8 = (struct DXGADAPTER *)(unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2172);
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v7, 0LL);
    v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL);
    v13 = v10;
    if ( v10 >= 0 )
    {
      v24 = 0LL;
      v19 = DxgkQueryDmmInterface(v7, v11, &v24);
      LODWORD(v13) = v19;
      if ( v19 >= 0 )
      {
        updated = Win81::UpdateGdiInfoForVidPnSource(v24, v7, (void *const)(unsigned int)v8, v6, a4, a5, v23);
        goto LABEL_13;
      }
      v14 = v19;
      WdLogSingleEntry3(2LL, v19, v7, v8);
      v18 = (__int64)v7;
      v16 = L"Failed DxgkQueryDmmInterface with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x";
      v7 = v8;
    }
    else
    {
      v14 = v10;
      CurrentProcess = PsGetCurrentProcess(v12);
      WdLogSingleEntry3(2LL, v13, CurrentProcess, v7);
      v16 = L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x";
      v18 = PsGetCurrentProcess(v17);
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v14, v18, (__int64)v7, 0LL, 0LL);
    updated = v13;
LABEL_13:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
    goto LABEL_14;
  }
  updated = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Caller specified an invalid adapter handle, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v25);
  }
  return updated;
}
