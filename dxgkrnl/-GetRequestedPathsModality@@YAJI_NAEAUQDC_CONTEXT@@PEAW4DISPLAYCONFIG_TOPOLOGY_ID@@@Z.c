__int64 __fastcall GetRequestedPathsModality(
        __int64 a1,
        __int64 a2,
        struct QDC_CONTEXT *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  int v4; // eax
  __int64 v5; // rdi
  char v8; // r12
  unsigned __int16 v9; // si
  unsigned __int16 v10; // ax
  int PathsModality; // ebx
  __int64 v13; // rcx
  int DisplayConfigBufferSizes; // eax
  __int64 v15; // rbx
  _BYTE v16[64]; // [rsp+50h] [rbp-98h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v17; // [rsp+90h] [rbp-58h]
  int v18; // [rsp+100h] [rbp+18h] BYREF

  v4 = *((_DWORD *)a3 + 1);
  v5 = (unsigned int)a1;
  v8 = a2;
  if ( !v4 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 1242LL;
    return 3221225507LL;
  }
  v18 = 0;
  if ( (a1 & 0x200000) != 0 )
  {
    v9 = 2;
    if ( (a1 & 0x10) != 0 )
    {
      v13 = 1LL;
    }
    else if ( (a1 & 0x40) != 0 )
    {
      v13 = 2LL;
    }
    else
    {
      if ( (a1 & 0xF) == 0 )
      {
        WdLogSingleEntry1(1LL, (unsigned int)a1);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Flags (0x%I64x) doesn't have one of the necessary values",
          v5,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      v13 = 4LL;
    }
    DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(v13, &v18, (__int64)a3);
    if ( DisplayConfigBufferSizes < 0 )
    {
      v15 = DisplayConfigBufferSizes;
      WdLogSingleEntry2(2LL, DisplayConfigBufferSizes, 2LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed (0x%I64x) to get display config buffer sizes when looking for internal target/priority. Trying with %d",
        v15,
        2LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v9 = v18;
    }
  }
  else
  {
    v9 = v4;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v16, v9, 0);
  if ( v17 )
    v10 = *((_WORD *)v17 + 11);
  else
    v10 = 0;
  if ( (unsigned int)v10 < *((_DWORD *)a3 + 1) )
  {
    WdLogSingleEntry1(6LL, *((unsigned int *)a3 + 1));
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate PathModality for 0x%I64x paths",
      *((unsigned int *)a3 + 1),
      0LL,
      0LL,
      0LL,
      0LL);
    PathsModality = -1073741801;
  }
  else
  {
    PathsModality = DxgkGetPathsModality((unsigned int)v5, v17, 0LL);
    if ( PathsModality >= 0 )
    {
      PathsModality = ConvertPathModalityToDisplayConfig(v17, v8, (v5 & 0x200000) != 0, a3);
      if ( PathsModality >= 0 )
        *(_DWORD *)a4 = *((_DWORD *)v17 + 8);
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v16);
  return (unsigned int)PathsModality;
}
