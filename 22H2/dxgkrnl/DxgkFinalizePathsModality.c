/*
 * XREFs of DxgkFinalizePathsModality @ 0x1C00E3430
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00E34F4 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C013E924 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkFinalizePathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-29h] BYREF
  __int64 v10; // [rsp+28h] [rbp-21h]
  char v11; // [rsp+30h] [rbp-19h]
  int v12; // [rsp+40h] [rbp-9h] BYREF
  __int128 v13; // [rsp+48h] [rbp-1h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  __int16 v15; // [rsp+60h] [rbp+17h]
  __int128 v16; // [rsp+68h] [rbp+1Fh]
  __int64 v17; // [rsp+78h] [rbp+2Fh]
  __int64 v18; // [rsp+80h] [rbp+37h]
  char v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]
  int v21; // [rsp+90h] [rbp+47h]
  __int64 v22; // [rsp+94h] [rbp+4Bh]

  v9 = -1;
  v10 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2170;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2170);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v9, 2170LL);
  if ( a1 )
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v16 = 0LL;
    v15 = 0;
    v17 = 0LL;
    v18 = a1;
    v19 = 0;
    v20 = 0;
    v21 = 1;
    v22 = 0LL;
    v5 = CCD_TOPOLOGY::FinalizeTopology((CCD_TOPOLOGY *)&v12);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v12);
  }
  else
  {
    v5 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9, v4);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v9);
  return v5;
}
