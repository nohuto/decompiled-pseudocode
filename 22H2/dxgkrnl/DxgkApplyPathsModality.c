/*
 * XREFs of DxgkApplyPathsModality @ 0x1C016A800
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149090 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkApplyPathsModality(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  DWORD v5; // edi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+28h] [rbp-39h] BYREF
  __int64 v12; // [rsp+30h] [rbp-31h]
  char v13; // [rsp+38h] [rbp-29h]
  int v14; // [rsp+48h] [rbp-19h] BYREF
  __int128 v15; // [rsp+50h] [rbp-11h]
  __int64 v16; // [rsp+60h] [rbp-1h]
  __int16 v17; // [rsp+68h] [rbp+7h]
  __int128 v18; // [rsp+70h] [rbp+Fh]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  __int64 v20; // [rsp+88h] [rbp+27h]
  char v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  int v23; // [rsp+98h] [rbp+37h]
  BOOL v24; // [rsp+9Ch] [rbp+3Bh]
  int v25; // [rsp+A0h] [rbp+3Fh]

  v11 = -1;
  v12 = 0LL;
  v5 = a1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2169;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2169);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2169LL);
  if ( a2 )
  {
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0;
    v18 = 0LL;
    v19 = 0LL;
    v20 = a2;
    v21 = 0;
    v22 = 0;
    v24 = (v5 & 0x1000000) != 0;
    v23 = 1;
    v25 = 0;
    v7 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)&v14, v5, a3);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v14);
  }
  else
  {
    v7 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11, v6);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  return v7;
}
