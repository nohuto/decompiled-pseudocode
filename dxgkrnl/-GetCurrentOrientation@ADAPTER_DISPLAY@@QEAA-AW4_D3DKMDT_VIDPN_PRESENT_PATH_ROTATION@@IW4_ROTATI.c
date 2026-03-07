__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v7; // edi
  _QWORD *v8; // rcx
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2;
  if ( a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 289) )
      return 1LL;
  }
  else if ( (a3 & 0xFFFFFFFD) != 0 )
  {
    WdLogSingleEntry1(1LL, 8220LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(Type == ROTATION_MODE_TYPE_HARDWARE) || (Type == ROTATION_MODE_TYPE_SOFTWARE) || (Type == ROTATION_MODE_TYPE_OVERALL)",
      8220LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 && !*(_BYTE *)(a1 + 289) )
    return 1LL;
  v6 = *(_QWORD *)(a1 + 128);
  if ( *(_DWORD *)(v6 + 4000 * v3 + 1036) != 1 )
  {
    switch ( *(_DWORD *)(v6 + 4000 * v3 + 1036) )
    {
      case 2:
        v7 = D3DKMDT_VPPR_ROTATE90;
        goto LABEL_7;
      case 3:
        v7 = D3DKMDT_VPPR_ROTATE180;
        goto LABEL_7;
      case 4:
        v7 = D3DKMDT_VPPR_ROTATE270;
        goto LABEL_7;
    }
    WdLogSingleEntry2(2LL, *(int *)(v6 + 4000 * v3 + 1036), *(_QWORD *)(a1 + 16));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
      *(int *)(4000 * v3 + *(_QWORD *)(a1 + 128) + 1036),
      *(_QWORD *)(a1 + 16),
      0LL,
      0LL,
      0LL);
  }
  v7 = D3DKMDT_VPPR_IDENTITY;
LABEL_7:
  if ( a3 != 1 )
  {
    v8 = *(_QWORD **)(a1 + 16);
    v10 = 0;
    if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v8, v3, 0LL, &v10) >= 0 )
      return (unsigned int)ADAPTER_DISPLAY::AddingMonitorOrientation((ADAPTER_DISPLAY *)a1, v7, v10);
  }
  return (unsigned int)v7;
}
