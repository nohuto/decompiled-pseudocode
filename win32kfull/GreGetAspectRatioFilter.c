__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v4 = v6[0];
  if ( !v6[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0LL;
  }
  v7 = *(_QWORD *)(v6[0] + 48LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v6[0] + 976LL) + 236LL) & 1) != 0 )
  {
    *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v7);
    v5 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v7);
    v4 = v6[0];
  }
  else
  {
    *a2 = 0;
    v5 = 0;
  }
  a2[1] = v5;
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return 1LL;
}
