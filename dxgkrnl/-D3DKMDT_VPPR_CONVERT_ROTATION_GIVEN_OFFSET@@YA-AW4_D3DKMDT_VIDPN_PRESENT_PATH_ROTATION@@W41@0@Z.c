__int64 __fastcall D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  if ( (unsigned int)(a1 - 1) > 3 || (unsigned int)(a2 - 1) > 3 )
    return 255LL;
  else
    return (unsigned int)(a1 + 4 * (a2 - 1));
}
