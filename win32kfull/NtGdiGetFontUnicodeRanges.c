__int64 __fastcall NtGdiGetFontUnicodeRanges(HDC a1, char *a2)
{
  __int64 v4; // rax
  unsigned int FontUnicodeRanges; // eax
  __int64 v6; // rbx
  unsigned int *v7; // rax
  unsigned int *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v13, *(struct Gre::Full::SESSION_GLOBALS **)(v4 + 32));
  FontUnicodeRanges = GreGetFontUnicodeRanges(a1, 0LL);
  v6 = FontUnicodeRanges;
  if ( FontUnicodeRanges && a2 )
  {
    v7 = (unsigned int *)AllocFreeTmpBuffer(FontUnicodeRanges);
    v8 = v7;
    if ( v7 )
    {
      *v7 = v6;
      v9 = GreGetFontUnicodeRanges(a1, v7);
      if ( v9 && (_DWORD)v6 == v9 )
      {
        if ( (unsigned __int64)&a2[v6] > MmUserProbeAddress || &a2[v6] <= a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a2, v8, (unsigned int)v6);
      }
      else
      {
        LODWORD(v6) = 0;
      }
      FreeTmpBuffer(v8, v10, v11);
    }
    else
    {
      LODWORD(v6) = 0;
    }
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v13);
  return (unsigned int)v6;
}
