unsigned __int8 __fastcall ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(
        ADAPTER_DISPLAY *this,
        enum _D3DKMT_VIDPNSOURCEOWNER_TYPE a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  __int64 v4; // r10
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 24);
  v3 = 0;
  if ( !v2 )
    return 0;
  v4 = *((_QWORD *)this + 16);
  while ( 1 )
  {
    v5 = 4000LL * v3;
    if ( *(_QWORD *)(v5 + v4 + 728) )
    {
      if ( a2 == *(_DWORD *)(v5 + v4 + 736) )
        break;
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
