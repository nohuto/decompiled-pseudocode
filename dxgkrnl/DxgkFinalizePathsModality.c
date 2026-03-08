/*
 * XREFs of DxgkFinalizePathsModality @ 0x1C0167780
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0167848 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkFinalizePathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-39h] BYREF
  __int64 v9; // [rsp+28h] [rbp-31h]
  char v10; // [rsp+30h] [rbp-29h]
  int v11; // [rsp+40h] [rbp-19h] BYREF
  __int128 v12; // [rsp+48h] [rbp-11h]
  __int64 v13; // [rsp+58h] [rbp-1h]
  __int16 v14; // [rsp+60h] [rbp+7h]
  __int128 v15; // [rsp+68h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  __int64 v17; // [rsp+80h] [rbp+27h]
  char v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  int v20; // [rsp+90h] [rbp+37h]
  __int64 v21; // [rsp+94h] [rbp+3Bh]
  __int64 v22; // [rsp+A0h] [rbp+47h]

  v8 = -1;
  v9 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v10 = 1;
    v8 = 2170;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2170);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v8, 2170);
  if ( a1 )
  {
    v11 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v15 = 0LL;
    v14 = 0;
    v16 = 0LL;
    v17 = a1;
    v18 = 0;
    v19 = 0;
    v20 = 1;
    v21 = 0LL;
    v22 = 0LL;
    v4 = CCD_TOPOLOGY::FinalizeTopology((CCD_TOPOLOGY *)&v11);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v11);
  }
  else
  {
    v4 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    LOBYTE(v5) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v8);
  }
  return v4;
}
