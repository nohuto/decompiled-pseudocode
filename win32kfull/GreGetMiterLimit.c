__int64 __fastcall GreGetMiterLimit(HDC a1, _DWORD *a2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    *a2 = *(_DWORD *)(v4[0] + 224LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
    return 1LL;
  }
  else
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 0LL;
  }
}
