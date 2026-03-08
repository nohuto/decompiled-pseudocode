/*
 * XREFs of ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C01E42E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C01E43AC (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 */

__int64 __fastcall CsExitInitiatedWnfCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        DXGGLOBAL *a6)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  int v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  char v17; // [rsp+40h] [rbp-10h]
  unsigned int v18; // [rsp+78h] [rbp+28h] BYREF

  v18 = a4;
  v15 = -1;
  v16 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 8014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 8014);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 8014);
  v14 = 0LL;
  v13 = 8;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = ExQueryWnfStateData(a1, &v18, &v14, &v13);
  v9 = v8;
  if ( v8 < 0 )
    WdLogSingleEntry3(3LL, a1, v18, v8);
  else
    DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(a6, v14, PerformanceCounter.QuadPart);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v15);
  return v9;
}
