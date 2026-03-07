__int64 __fastcall DxgkOpmGetRedirectionInfo(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // r15
  unsigned int SourceConnectedToTargetInClientVidPn; // esi
  __int64 result; // rax
  const wchar_t *v10; // r9
  __int64 Numerator; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  struct _D3DDDI_RATIONAL v13; // [rsp+50h] [rbp-10h] BYREF
  struct _D3DDDI_RATIONAL v14; // [rsp+A0h] [rbp+40h] BYREF
  struct _D3DKMDT_2DREGION v15; // [rsp+B0h] [rbp+50h] BYREF

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    WdLogSingleEntry1(1LL, 1078LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAdapter->IsCoreResourceSharedOwner()",
      1078LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SourceConnectedToTargetInClientVidPn = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( (*((_DWORD *)a1 + 109) & 0x100) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Try to call DxgkOpmGetRedirectionInfo on a non-indirect display adapter 0x%I64x!",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  result = ADAPTER_DISPLAY::DodGetOpmMftContext(a1[365], (unsigned int)v5, a3);
  SourceConnectedToTargetInClientVidPn = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    if ( a4 )
    {
      v14.Numerator = 0;
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(a1, v5, (unsigned int *)&v14);
      if ( (SourceConnectedToTargetInClientVidPn & 0x80000000) != 0 )
      {
        WdLogSingleEntry2(2LL, v5, a1);
        v10 = L"Could not find SourceID for TargetId 0x%I64x on adapter 0x%I64x!";
LABEL_10:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v5, (__int64)a1, 0LL, 0LL, 0LL);
        return SourceConnectedToTargetInClientVidPn;
      }
      Numerator = v14.Numerator;
      if ( v14.Numerator == -1 )
      {
        WdLogSingleEntry1(1LL, 1108LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
          1108LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(a1[365], Numerator);
      if ( !DisplayModeInfo )
      {
        WdLogSingleEntry2(2LL, Numerator, a1);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Could not find display infoSource 0x%I64x on adapter 0x%I64x!",
          Numerator,
          (__int64)a1,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      v15 = 0LL;
      v13 = 0LL;
      v14.Numerator = 0;
      SourceConnectedToTargetInClientVidPn = DmmGetClientVidPnTargetModeInfo(
                                               a1,
                                               v5,
                                               0LL,
                                               0LL,
                                               0LL,
                                               (struct _D3DDDI_RATIONAL)&v14,
                                               &v15,
                                               &v13);
      if ( (SourceConnectedToTargetInClientVidPn & 0x80000000) != 0 )
      {
        WdLogSingleEntry2(2LL, v5, a1);
        v10 = L"Could not find target mode info for TargetId 0x%I64x on adapter 0x%I64x!";
        goto LABEL_10;
      }
      *(_OWORD *)a4 = 0LL;
      *(_OWORD *)(a4 + 16) = 0LL;
      *(_QWORD *)(a4 + 32) = 0LL;
      *(_DWORD *)(a4 + 40) = 0;
      *(struct _D3DKMDT_2DREGION *)(a4 + 20) = v15;
      *(_DWORD *)(a4 + 32) = *((_DWORD *)DisplayModeInfo + 2);
      *(struct _D3DDDI_RATIONAL *)(a4 + 36) = v13;
      if ( v14.Numerator != *((_DWORD *)DisplayModeInfo + 6) )
      {
        WdLogSingleEntry1(1LL, 1134LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ScanLineOrder == pDisplayModeInfo->DisplayMode.ScanLineOrdering",
          1134LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      switch ( *((_DWORD *)DisplayModeInfo + 6) )
      {
        case 1:
          goto LABEL_26;
        case 2:
          *(_DWORD *)(a4 + 28) = 4;
          return SourceConnectedToTargetInClientVidPn;
        case 3:
          *(_DWORD *)(a4 + 28) = 3;
          return SourceConnectedToTargetInClientVidPn;
      }
      if ( *((_DWORD *)DisplayModeInfo + 6) != 255 )
      {
LABEL_26:
        *(_DWORD *)(a4 + 28) = 2;
        return SourceConnectedToTargetInClientVidPn;
      }
      *(_DWORD *)(a4 + 28) = 0;
    }
    return SourceConnectedToTargetInClientVidPn;
  }
  return result;
}
