__int64 __fastcall DMMVIDPNPRESENTPATH::SetContentType(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT a2)
{
  __int64 v2; // rbx

  if ( a2 == D3DKMDT_VPPC_GRAPHICS || a2 == D3DKMDT_VPPC_VIDEO || a2 == D3DKMDT_VPPC_NOTSPECIFIED )
  {
    *((_DWORD *)this + 41) = a2;
    return 0LL;
  }
  else
  {
    v2 = a2;
    WdLogSingleEntry1(2LL, a2);
    WdLogSingleEntry1(3LL, v2);
    return 3223192398LL;
  }
}
