/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C014E780
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000D00C (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkQueryDmmInterface @ 0x1C00EC7C8 (DxgkQueryDmmInterface.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C014B710 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C014BAF4 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C014D818 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C014F88C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A9BE8 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(char *a1, struct _LUID *a2, struct _GDIINFO *a3, struct _DPI_INFORMATION *a4)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  int v23; // eax
  int DmmInterface; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rcx
  _QWORD *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 CurrentProcess; // rax
  unsigned int v49; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v50; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v51; // r8
  int PlateauIndexForScaleFactor; // eax
  int v53; // r10d
  unsigned int v54; // r9d
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int8 v58; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v59[3]; // [rsp+31h] [rbp-CFh] BYREF
  struct _UNICODE_STRING v60; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v61; // [rsp+48h] [rbp-B8h]
  char v62; // [rsp+50h] [rbp-B0h]
  unsigned int v63[4]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v64; // [rsp+68h] [rbp-98h]
  _BYTE v65[144]; // [rsp+80h] [rbp-80h] BYREF

  HIDWORD(v60.Buffer) = -1;
  v61 = 0LL;
  v7 = (unsigned int)a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v62 = 1;
    HIDWORD(v60.Buffer) = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2172);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60.Buffer + 4, 2172LL);
  if ( !a1 )
  {
    v35 = WdLogNewEntry5_WdError(v9, v8);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    goto LABEL_15;
  }
  v59[0] = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v59, 0);
  v13 = v10;
  if ( v10 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, (struct DXGADAPTER *const)a1, 0LL);
    v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65, 0LL);
    v17 = v14;
    if ( v14 < 0 )
      goto LABEL_21;
    v58 = 0;
    IsEmergencyMonitorConnected(a1, v7, &v58);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v65);
    *(_DWORD *)&v60.Length = 0;
    if ( v58 )
    {
      *(_DWORD *)&v60.Length = dword_1C00B2A80;
    }
    else
    {
      v18 = DpiPersistence::ReadDpiFromRegistry(
              (struct _LUID *)(a1 + 316),
              (const struct _LUID *)(unsigned int)v7,
              1,
              &v60);
      v22 = v18;
      if ( v18 < 0 )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
        v43[3] = v22;
        CurrentProcess = PsGetCurrentProcess(v45, v44, v46, v47);
        v43[5] = a1;
        v43[4] = CurrentProcess;
        WdLogEvent5_WdWarning(v43);
      }
    }
    v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65, 0LL);
    v17 = v23;
    if ( v23 < 0 )
    {
LABEL_21:
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v37[3] = v17;
      v37[4] = PsGetCurrentProcess(v39, v38, v40, v41);
      v42 = v37;
      v37[5] = a1;
    }
    else
    {
      *(_QWORD *)(&v60.MaximumLength + 1) = 0LL;
      DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1, v15, &v60.MaximumLength + 1);
      v17 = DmmInterface;
      if ( DmmInterface >= 0 )
      {
        LODWORD(v13) = UpdateGdiInfoForVidPnSource(
                         *(const struct _DXGDMM_INTERFACE **)(&v60.MaximumLength + 1),
                         a1,
                         (unsigned int)v7,
                         *(unsigned int *)&v60.Length,
                         a3,
                         a4);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v65);
        if ( *((_DWORD *)a4 + 21) == 1234568 )
        {
          v49 = *((_DWORD *)a4 + 2);
          *(_OWORD *)v63 = 0LL;
          v64 = 0LL;
          QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v63, v28, v29);
          DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a4 + 3), (__int64)v63, v50);
          PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                         (DpiInternal *)v49,
                                         (__int64)v63,
                                         v51);
          v55 = DpiPersistence::WriteDpiToHKLMRegistry(
                  (DpiPersistence *)(a1 + 316),
                  (const struct _LUID *)(unsigned int)v7,
                  PlateauIndexForScaleFactor - v53,
                  v54);
          v13 = v55;
          if ( v55 < 0 )
          {
            v57 = WdLogNewEntry5_WdError(v56, v27);
            *(_QWORD *)(v57 + 24) = v13;
            WdLogEvent5_WdError(v57);
            LODWORD(v13) = 0;
          }
        }
        goto LABEL_12;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
      v42[3] = v17;
      v42[4] = a1;
      v42[5] = v7;
    }
    WdLogEvent5_WdError(v42);
    LODWORD(v13) = v17;
LABEL_12:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65, v27);
    goto LABEL_13;
  }
  v36 = WdLogNewEntry5_WdError(v12, v11);
  *(_QWORD *)(v36 + 24) = v13;
  WdLogEvent5_WdError(v36);
LABEL_13:
  if ( v59[0] )
    DxgkReleaseSessionModeChangeLock(v31, v30);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)((char *)&v60.Buffer + 4), v30);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, SHIDWORD(v60.Buffer));
  return (unsigned int)v13;
}
