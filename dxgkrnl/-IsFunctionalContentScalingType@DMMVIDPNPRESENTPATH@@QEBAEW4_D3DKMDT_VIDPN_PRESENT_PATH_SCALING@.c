unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v2 = a2 - 1;
  if ( !v2 )
    return 1;
  v4 = v2 - 1;
  if ( !v4 )
    return 1;
  v5 = v4 - 1;
  if ( !v5 )
    return 1;
  v6 = v5 - 1;
  if ( !v6 )
    return DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
  v7 = v6 - 1;
  if ( v7 )
    return v7 == 250;
  return DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported(this);
}
