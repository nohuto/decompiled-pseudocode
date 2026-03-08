/*
 * XREFs of DxgkPersistPathsModality @ 0x1C01C15B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C0D10 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkPersistPathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+28h] [rbp-39h] BYREF
  __int64 v12; // [rsp+30h] [rbp-31h]
  char v13; // [rsp+38h] [rbp-29h]
  struct D3DKMT_GETPATHSMODALITY *v14; // [rsp+48h] [rbp-19h] BYREF
  __int128 v15; // [rsp+50h] [rbp-11h]
  __int64 v16; // [rsp+60h] [rbp-1h]
  __int16 v17; // [rsp+68h] [rbp+7h]
  __int128 v18; // [rsp+70h] [rbp+Fh]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  __int64 v20; // [rsp+88h] [rbp+27h]
  bool v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  int v23; // [rsp+98h] [rbp+37h]
  __int64 v24; // [rsp+9Ch] [rbp+3Bh]
  __int64 v25; // [rsp+A8h] [rbp+47h]

  v11 = -1;
  v4 = a1;
  v12 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2167;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2167);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2167);
  LODWORD(v14) = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v21 = a2 == 0;
  v20 = a2;
  v22 = 0;
  v23 = 1;
  v24 = 0LL;
  v25 = 0LL;
  v7 = CCD_TOPOLOGY::Persist(&v14, v4, v5, v6);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  }
  return v7;
}
