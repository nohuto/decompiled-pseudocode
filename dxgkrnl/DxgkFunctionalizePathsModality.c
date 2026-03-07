__int64 __fastcall DxgkFunctionalizePathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+58h] [rbp-39h] BYREF
  __int64 v11; // [rsp+60h] [rbp-31h]
  char v12; // [rsp+68h] [rbp-29h]
  int v13; // [rsp+78h] [rbp-19h] BYREF
  __int128 v14; // [rsp+80h] [rbp-11h]
  __int64 v15; // [rsp+90h] [rbp-1h]
  __int16 v16; // [rsp+98h] [rbp+7h]
  __int128 v17; // [rsp+A0h] [rbp+Fh]
  __int64 v18; // [rsp+B0h] [rbp+1Fh]
  __int64 v19; // [rsp+B8h] [rbp+27h]
  char v20; // [rsp+C0h] [rbp+2Fh]
  BOOL v21; // [rsp+C4h] [rbp+33h]
  int v22; // [rsp+C8h] [rbp+37h]
  _BOOL8 v23; // [rsp+CCh] [rbp+3Bh]
  __int64 v24; // [rsp+D8h] [rbp+47h]

  v10 = -1;
  v4 = a1;
  v11 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2168;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2168);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2168);
  if ( a2 )
  {
    if ( (v4 & 0xFEFD7FFF) != 0 )
    {
      WdLogSingleEntry1(1LL, 228LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(Flags & ~(D3DKMT_GETPATHSMODALITY_DIAG_LOG_FUNCTIONAL_VIDPN | D3DKMT_GETPATHSMODALITY_ALLOW_BML_RAWMOD"
                  "E | D3DKMT_GETPATHSMODALITY_INCLUDING_NON_DESKTOP)) == 0",
        228LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = a2;
    v13 = 0;
    v15 = 0LL;
    v16 = 0;
    v18 = 0LL;
    v20 = 0;
    v24 = 0LL;
    v14 = 0LL;
    v17 = 0LL;
    v22 = 1;
    v21 = (v4 & 0x8000) != 0;
    v23 = (v4 & 0x1000000) != 0;
    v5 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v13, v4, 0);
    v21 = 0;
    v6 = v5;
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
