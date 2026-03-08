/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C01695F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00019BC (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0169530 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01697CC (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     DxgkQueryDmmInterface @ 0x1C016A964 (DxgkQueryDmmInterface.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01C1E30 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FDEE0 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        __int64 a1,
        struct _LUID *a2,
        __int64 a3,
        struct _GDIINFO *a4,
        struct _DPI_INFORMATION *a5)
{
  struct _GDIINFO *v5; // rbx
  unsigned int v6; // r12d
  char *v7; // rdi
  unsigned __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rsi
  int DpiFromRegistry; // eax
  __int64 v14; // rbx
  int v15; // eax
  int DmmInterface; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // r14
  __int64 CurrentProcess; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  const wchar_t *v25; // r9
  char *v26; // rbx
  unsigned __int64 v27; // r9
  unsigned int v28; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v29; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v30; // r8
  int PlateauIndexForScaleFactor; // eax
  int v32; // r10d
  unsigned int v33; // r9d
  int v34; // eax
  unsigned int *v35; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v36; // [rsp+50h] [rbp-B0h] BYREF
  char v37[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  struct _GDIINFO *v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  char v42; // [rsp+70h] [rbp-90h]
  unsigned int v43[4]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v44; // [rsp+88h] [rbp-78h]
  _BYTE v45[144]; // [rsp+A0h] [rbp-60h] BYREF

  v40 = -1;
  v5 = a4;
  v6 = a3;
  v39 = a4;
  v7 = (char *)a1;
  v8 = (unsigned int)a2;
  v41 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2172);
  if ( !v7 )
  {
    LODWORD(v5) = -1073741811;
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
    goto LABEL_16;
  }
  v37[0] = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v37, 0);
  v10 = v9;
  if ( v9 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, (struct DXGADAPTER *const)v7, 0LL);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45, 0LL);
    v12 = v11;
    if ( v11 < 0 )
    {
      v20 = v11;
      CurrentProcess = PsGetCurrentProcess();
      WdLogSingleEntry3(2LL, v12, CurrentProcess, v7);
      v22 = PsGetCurrentProcess();
    }
    else
    {
      v36 = 0;
      IsEmergencyMonitorConnected(v7, v8, &v36);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v45);
      v38 = 0;
      if ( v36 )
      {
        v38 = dword_1C013B3E4;
      }
      else
      {
        DpiFromRegistry = DpiPersistence::ReadDpiFromRegistry(
                            (DpiPersistence *)(v7 + 404),
                            (const struct _LUID *)(unsigned int)v8,
                            1u,
                            (int)&v38,
                            v35);
        v14 = DpiFromRegistry;
        if ( DpiFromRegistry < 0 )
        {
          v23 = PsGetCurrentProcess();
          WdLogSingleEntry3(3LL, v14, v23, v7);
        }
        v5 = v39;
      }
      v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45, 0LL);
      v12 = v15;
      if ( v15 >= 0 )
      {
        v39 = 0LL;
        DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v7);
        LODWORD(v12) = DmmInterface;
        if ( DmmInterface >= 0 )
        {
          LODWORD(v5) = UpdateGdiInfoForVidPnSource((const struct _DXGDMM_INTERFACE *)v39, v7, v8, v38, v6, v5, a5);
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v45);
          if ( *((_DWORD *)a5 + 21) == 1234568 )
          {
            v28 = *((_DWORD *)a5 + 2);
            *(_OWORD *)v43 = 0LL;
            v44 = 0LL;
            QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v43);
            DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a5 + 3), (__int64)v43, v29);
            PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                           (DpiInternal *)v28,
                                           (__int64)v43,
                                           v30);
            v34 = DpiPersistence::WriteDpiToHKLMRegistry(
                    (DpiPersistence *)(v7 + 404),
                    (const struct _LUID *)(unsigned int)v8,
                    PlateauIndexForScaleFactor - v32,
                    v33);
            v5 = (struct _GDIINFO *)v34;
            if ( v34 < 0 )
            {
              WdLogSingleEntry1(2LL, v34);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to write DPI to registry with Status = 0x%I64x",
                (__int64)v5,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v5) = 0;
            }
          }
          goto LABEL_13;
        }
        v26 = (char *)v8;
        v27 = v8;
        v20 = DmmInterface;
        WdLogSingleEntry3(2LL, DmmInterface, v7, v27);
        v22 = (__int64)v7;
        v25 = L"Failed DxgkQueryDmmInterface with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x";
        v7 = v26;
LABEL_27:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v25, v20, v22, (__int64)v7, 0LL, 0LL);
        LODWORD(v5) = v12;
LABEL_13:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
        goto LABEL_14;
      }
      v20 = v15;
      v24 = PsGetCurrentProcess();
      WdLogSingleEntry3(2LL, v12, v24, v7);
      v22 = PsGetCurrentProcess();
    }
    v25 = L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x";
    goto LABEL_27;
  }
  WdLogSingleEntry1(2LL, v9);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
    v10,
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v5) = v10;
LABEL_14:
  if ( v37[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v40);
  }
  return (unsigned int)v5;
}
