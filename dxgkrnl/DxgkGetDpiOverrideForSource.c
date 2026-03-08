/*
 * XREFs of DxgkGetDpiOverrideForSource @ 0x1C01C4DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01C1E30 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 */

__int64 __fastcall DxgkGetDpiOverrideForSource(struct _LUID *this, struct _LUID *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rbx
  int v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]
  char v13; // [rsp+60h] [rbp-10h]
  char v14; // [rsp+90h] [rbp+20h] BYREF
  int v15; // [rsp+98h] [rbp+28h] BYREF

  v11 = -1;
  v3 = (unsigned int)a2;
  v12 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2193;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 2193);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2193);
  v14 = 0;
  v5 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v14, 0);
  if ( v5 < 0 )
  {
    v10 = v5;
    WdLogSingleEntry1(2LL, v5);
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
  }
  else
  {
    v15 = 0;
    if ( (int)DpiPersistence::ReadDpiFromRegistry(this, (const struct _LUID *)v3, 0, (struct _UNICODE_STRING *)&v15) >= 0 )
    {
      v6 = v15;
      goto LABEL_6;
    }
  }
  v6 = 0;
LABEL_6:
  if ( v14 )
    DxgkReleaseSessionModeChangeLock();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v11);
  }
  return v6;
}
