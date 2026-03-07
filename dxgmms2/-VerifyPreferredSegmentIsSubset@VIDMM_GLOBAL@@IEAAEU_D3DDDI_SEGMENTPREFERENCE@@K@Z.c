unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
        VIDMM_GLOBAL *this,
        struct _D3DDDI_SEGMENTPREFERENCE a2,
        int a3)
{
  unsigned int v3; // r9d
  UINT v4; // eax
  unsigned __int8 v5; // cl
  int v6; // eax

  v3 = 0;
  while ( 1 )
  {
    v4 = (a2.Value >> v3) & 0x1F;
    if ( v4 )
    {
      v5 = v4 - 1;
      v6 = ~a3;
      if ( _bittest(&v6, v5) )
        break;
    }
    v3 += 6;
    if ( v3 >= 0x1E )
      return 1;
  }
  return 0;
}
