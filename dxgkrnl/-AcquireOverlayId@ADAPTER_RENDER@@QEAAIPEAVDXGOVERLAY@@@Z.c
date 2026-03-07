__int64 __fastcall ADAPTER_RENDER::AcquireOverlayId(ADAPTER_RENDER *this, struct DXGOVERLAY *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  _QWORD *i; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3236LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pOverlayOwner != NULL", 3236LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = 0LL;
  v5 = *(_DWORD *)(*((_QWORD *)this + 2) + 2260LL);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  for ( i = (_QWORD *)((char *)this + 824); *i; ++i )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v5 )
      return 0xFFFFFFFFLL;
  }
  *((_QWORD *)this + v4 + 103) = a2;
  return (unsigned int)v4;
}
