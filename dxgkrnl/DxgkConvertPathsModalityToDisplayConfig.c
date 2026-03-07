__int64 __fastcall DxgkConvertPathsModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        int *a2,
        __int64 a3,
        _DWORD *a4)
{
  int v8; // eax
  int TopologyClass; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-59h] BYREF
  __int64 v14; // [rsp+30h] [rbp-51h]
  char v15; // [rsp+38h] [rbp-49h]
  _DWORD v16[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v17; // [rsp+48h] [rbp-39h]
  __int64 v18; // [rsp+50h] [rbp-31h]
  int v19; // [rsp+58h] [rbp-29h] BYREF
  __int128 v20; // [rsp+60h] [rbp-21h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  __int16 v22; // [rsp+78h] [rbp-9h]
  __int128 v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  struct D3DKMT_GETPATHSMODALITY *v25; // [rsp+98h] [rbp+17h]
  bool v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  int v28; // [rsp+A8h] [rbp+27h]
  __int64 v29; // [rsp+ACh] [rbp+2Bh]
  __int64 v30; // [rsp+B8h] [rbp+37h]
  int v31; // [rsp+E8h] [rbp+67h] BYREF

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2177;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2177);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2177);
  if ( a4 )
    *a4 = 0;
  v8 = *a2;
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v26 = a1 == 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v25 = a1;
  v27 = 0;
  v28 = 1;
  v29 = 0LL;
  v30 = 0LL;
  v16[0] = 0;
  v17 = a3;
  v18 = a3;
  v16[1] = v8;
  TopologyClass = ConvertPathModalityToDisplayConfig(a1, 0, 0, (struct QDC_CONTEXT *)v16);
  if ( TopologyClass >= 0 )
  {
    *a2 = 1749801491 * ((v18 - v17) >> 3);
    if ( a4 )
    {
      v31 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)&v19, (enum CCD_TOPOLOGY_CLASS *)&v31);
      if ( TopologyClass >= 0 )
        *a4 = v31;
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v13);
  return (unsigned int)TopologyClass;
}
