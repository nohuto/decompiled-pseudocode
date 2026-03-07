bool __fastcall DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1)
{
  __int32 v1; // eax
  bool result; // al
  __int32 v3; // eax
  __int32 v4; // eax
  __int32 v5; // eax

  v1 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  result = 1;
  if ( v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 251 )
            return 0;
        }
      }
    }
  }
  return result;
}
