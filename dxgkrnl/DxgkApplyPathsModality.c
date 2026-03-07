__int64 __fastcall DxgkApplyPathsModality(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+28h] [rbp-49h] BYREF
  __int64 v11; // [rsp+30h] [rbp-41h]
  char v12; // [rsp+38h] [rbp-39h]
  int v13; // [rsp+48h] [rbp-29h] BYREF
  __int128 v14; // [rsp+50h] [rbp-21h]
  __int64 v15; // [rsp+60h] [rbp-11h]
  __int16 v16; // [rsp+68h] [rbp-9h]
  __int128 v17; // [rsp+70h] [rbp-1h]
  __int64 v18; // [rsp+80h] [rbp+Fh]
  __int64 v19; // [rsp+88h] [rbp+17h]
  char v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  int v22; // [rsp+98h] [rbp+27h]
  BOOL v23; // [rsp+9Ch] [rbp+2Bh]
  int v24; // [rsp+A0h] [rbp+2Fh]
  __int64 v25; // [rsp+A8h] [rbp+37h]

  v10 = -1;
  v11 = 0LL;
  v5 = a1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2169;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2169);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2169);
  if ( a2 )
  {
    v13 = 0;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0;
    v17 = 0LL;
    v18 = 0LL;
    v19 = a2;
    v20 = 0;
    v21 = 0;
    v23 = (v5 & 0x1000000) != 0;
    v22 = 1;
    v24 = 0;
    v25 = 0LL;
    v6 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)&v13, v5, a3);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v13);
  }
  else
  {
    v6 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v10);
  }
  return v6;
}
