unsigned __int8 __fastcall ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(DXGADAPTER **this)
{
  unsigned int v2; // r8d
  unsigned int v3; // edx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 8103LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 8103LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = *((_DWORD *)this + 24);
  v3 = 0;
  if ( !v2 )
    return 0;
  while ( !*((_QWORD *)this[16] + 500 * v3 + 91) )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
