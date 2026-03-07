__int64 __fastcall DxgkGetMonitorHash(struct _LUID a1, unsigned int a2, unsigned int *a3, struct D3DKMT_HASH *a4)
{
  int DisplayConfigBufferSizes; // eax
  __int64 v9; // rdi
  unsigned __int16 v10; // ax
  int PathsModality; // eax
  __int64 v13; // rbx
  const wchar_t *v14; // r9
  __int64 v15; // rbx
  int v16; // edx
  const wchar_t *v17; // r9
  _BYTE v18[64]; // [rsp+50h] [rbp-88h] BYREF
  _DWORD *v19; // [rsp+90h] [rbp-48h]
  unsigned int v20; // [rsp+F0h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( !*a3 || a4 )
    {
      v20 = 0;
      DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(2LL, (int *)&v20, (__int64)a3);
      v9 = DisplayConfigBufferSizes;
      if ( DisplayConfigBufferSizes < 0 )
      {
        WdLogSingleEntry1(2LL, DisplayConfigBufferSizes);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed (0x%I64x) to get display config buffer sizes",
          v9,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v9;
      }
      v9 = v20;
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v18, v20, 0);
      if ( v19 )
        v10 = *((_WORD *)v19 + 11);
      else
        v10 = 0;
      if ( v10 < (unsigned int)v9 )
      {
        v15 = v9;
        WdLogSingleEntry1(6LL, v9);
        v16 = 262145;
        v17 = L"Failed to allocate PathModality for 0x%I64x paths";
        LODWORD(v9) = -1073741801;
      }
      else
      {
        PathsModality = DxgkGetPathsModality(64LL, v19, 0LL);
        LODWORD(v9) = PathsModality;
        if ( PathsModality >= 0 )
        {
          LODWORD(v9) = CCD_TOPOLOGY::GetMonitorHashsForPath((CCD_TOPOLOGY *)v18, a1, a2, a3, a4);
LABEL_10:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v18);
          return (unsigned int)v9;
        }
        v15 = PathsModality;
        WdLogSingleEntry1(2LL, PathsModality);
        v16 = 0x40000;
        v17 = L"DxgkGetPathsModality failed (0x%I64x)";
      }
      DxgkLogInternalTriageEvent(0LL, v16, -1, (__int64)v17, v15, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_10;
    }
    v13 = 12586LL;
    WdLogSingleEntry1(2LL, 12586LL);
    v14 = L"pMonitorHashArray cannot be null if caller reports non-zero size";
  }
  else
  {
    v13 = 12580LL;
    WdLogSingleEntry1(2LL, 12580LL);
    v14 = L"pMonitorHashArraySize cannot be null";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
