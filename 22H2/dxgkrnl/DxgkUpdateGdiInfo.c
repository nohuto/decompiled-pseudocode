/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C01DABA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000A924 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00140C0 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C0184BC0 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01DAD7C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C01DADD8 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01DAF30 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01DB9FC (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C0302D10 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(__int64 a1, struct _LUID *a2, __int64 a3, __int64 a4, struct _DPI_INFORMATION *a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r12d
  char *v7; // rdi
  unsigned __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  int DmmInterface; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // r14
  __int64 CurrentProcess; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  const wchar_t *v30; // r9
  char *v31; // rbx
  unsigned __int64 v32; // r9
  unsigned int v33; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v34; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v35; // r8
  int PlateauIndexForScaleFactor; // eax
  int v37; // r10d
  unsigned int v38; // r9d
  int v39; // eax
  unsigned __int8 v40; // [rsp+50h] [rbp-B0h] BYREF
  char v41[3]; // [rsp+51h] [rbp-AFh] BYREF
  struct _UNICODE_STRING v42; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h]
  char v44; // [rsp+70h] [rbp-90h]
  unsigned int v45[4]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v46; // [rsp+88h] [rbp-78h]
  _BYTE v47[144]; // [rsp+A0h] [rbp-60h] BYREF

  HIDWORD(v42.Buffer) = -1;
  v5 = a4;
  v6 = a3;
  *(_QWORD *)(&v42.MaximumLength + 1) = a4;
  v7 = (char *)a1;
  v8 = (unsigned int)a2;
  v43 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v44 = 1;
    HIDWORD(v42.Buffer) = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42.Buffer + 4, 2172);
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
  v41[0] = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v41, 0);
  v10 = v9;
  if ( v9 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, (struct DXGADAPTER *const)v7, 0LL);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47, 0LL);
    v13 = v11;
    if ( v11 < 0 )
    {
      v23 = v11;
      CurrentProcess = PsGetCurrentProcess(v12);
      WdLogSingleEntry3(2LL, v13, CurrentProcess, v7);
      v26 = PsGetCurrentProcess(v25);
    }
    else
    {
      v40 = 0;
      IsEmergencyMonitorConnected(v7, v8, &v40);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v47);
      *(_DWORD *)&v42.Length = 0;
      if ( v40 )
      {
        *(_DWORD *)&v42.Length = dword_1C01403E4;
      }
      else
      {
        v14 = DpiPersistence::ReadDpiFromRegistry(
                (struct _LUID *)(v7 + 404),
                (const struct _LUID *)(unsigned int)v8,
                1,
                &v42);
        v16 = v14;
        if ( v14 < 0 )
        {
          v27 = PsGetCurrentProcess(v15);
          WdLogSingleEntry3(3LL, v16, v27, v7);
        }
        v5 = *(_QWORD *)(&v42.MaximumLength + 1);
      }
      v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47, 0LL);
      v13 = v17;
      if ( v17 >= 0 )
      {
        *(_QWORD *)(&v42.MaximumLength + 1) = 0LL;
        DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v7);
        LODWORD(v13) = DmmInterface;
        if ( DmmInterface >= 0 )
        {
          LODWORD(v5) = UpdateGdiInfoForVidPnSource(
                          *(const struct _DXGDMM_INTERFACE **)(&v42.MaximumLength + 1),
                          v7,
                          v8,
                          *(int *)&v42.Length,
                          v6,
                          (struct _GDIINFO *)v5,
                          a5);
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v47);
          if ( *((_DWORD *)a5 + 21) == 1234568 )
          {
            v33 = *((_DWORD *)a5 + 2);
            *(_OWORD *)v45 = 0LL;
            v46 = 0LL;
            QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v45);
            DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a5 + 3), (__int64)v45, v34);
            PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                           (DpiInternal *)v33,
                                           (__int64)v45,
                                           v35);
            v39 = DpiPersistence::WriteDpiToHKLMRegistry(
                    (DpiPersistence *)(v7 + 404),
                    (const struct _LUID *)(unsigned int)v8,
                    PlateauIndexForScaleFactor - v37,
                    v38);
            v5 = v39;
            if ( v39 < 0 )
            {
              WdLogSingleEntry1(2LL, v39);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to write DPI to registry with Status = 0x%I64x",
                v5,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v5) = 0;
            }
          }
          goto LABEL_13;
        }
        v31 = (char *)v8;
        v32 = v8;
        v23 = DmmInterface;
        WdLogSingleEntry3(2LL, DmmInterface, v7, v32);
        v26 = (__int64)v7;
        v30 = L"Failed DxgkQueryDmmInterface with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x";
        v7 = v31;
LABEL_27:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v30, v23, v26, (__int64)v7, 0LL, 0LL);
        LODWORD(v5) = v13;
LABEL_13:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
        goto LABEL_14;
      }
      v23 = v17;
      v28 = PsGetCurrentProcess(v18);
      WdLogSingleEntry3(2LL, v13, v28, v7);
      v26 = PsGetCurrentProcess(v29);
    }
    v30 = L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x";
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
  if ( v41[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)((char *)&v42.Buffer + 4));
  if ( v44 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, SHIDWORD(v42.Buffer));
  }
  return (unsigned int)v5;
}
