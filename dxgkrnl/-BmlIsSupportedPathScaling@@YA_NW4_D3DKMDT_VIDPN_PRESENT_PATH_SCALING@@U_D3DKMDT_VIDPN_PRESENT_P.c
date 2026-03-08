/*
 * XREFs of ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C016D2E8
 * Callers:
 *     BmlInternalTryPinningScaling @ 0x1C016DF60 (BmlInternalTryPinningScaling.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedPathScaling(
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT a2)
{
  switch ( a1 )
  {
    case D3DKMDT_VPPS_IDENTITY:
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_CENTERED:
      a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)(*(unsigned int *)&a2 >> 1);
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_STRETCHED:
      a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)(*(unsigned int *)&a2 >> 2);
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX:
      a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)(*(unsigned int *)&a2 >> 3);
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_CUSTOM:
      a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)(*(unsigned int *)&a2 >> 4);
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_NOTSPECIFIED:
      return 1;
  }
  WdLogSingleEntry1(1LL, a1);
  return 0;
}
