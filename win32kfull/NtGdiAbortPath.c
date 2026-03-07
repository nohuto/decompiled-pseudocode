__int64 __fastcall NtGdiAbortPath(HDC a1)
{
  DC *v1; // rax
  int v3; // ecx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = (DC *)v4[0];
  if ( v4[0] )
  {
    if ( *(_QWORD *)(v4[0] + 200LL) )
    {
      v3 = *(_DWORD *)(v4[0] + 248LL);
      if ( (v3 & 2) != 0 )
      {
        *(_DWORD *)(v4[0] + 248LL) = v3 & 0xFFFFFFFD;
        v1 = (DC *)v4[0];
      }
      *((_DWORD *)v1 + 62) &= ~1u;
      DC::hpath(v1, 0LL);
      v1 = (DC *)v4[0];
    }
    if ( v1 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v4);
    return 1LL;
  }
  else
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 0LL;
  }
}
