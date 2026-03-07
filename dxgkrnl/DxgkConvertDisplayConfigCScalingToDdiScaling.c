__int64 __fastcall DxgkConvertDisplayConfigCScalingToDdiScaling(
        int a1,
        struct _LUID *a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx

  v3 = 0;
  switch ( a1 )
  {
    case 1:
LABEL_2:
      DxgkGetAdapterDefaultScaling(a2, a3);
      return v3;
    case 2:
      *a3 = D3DKMDT_VPPS_CENTERED;
      return v3;
    case 3:
      *a3 = D3DKMDT_VPPS_STRETCHED;
      return v3;
    case 4:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX;
        return v3;
      }
      goto LABEL_2;
    case 5:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = D3DKMDT_VPPS_CUSTOM;
        return v3;
      }
      goto LABEL_2;
    case 128:
      *a3 = D3DKMDT_VPPS_RESERVED1;
      break;
    default:
      v7 = a1;
      WdLogSingleEntry1(2LL, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unknown DISPLAYCONFIG_SCALING 0x%I64x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741811;
  }
  return v3;
}
