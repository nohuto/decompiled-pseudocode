__int64 __fastcall NtGdiGetFontData(HDC a1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5)
{
  unsigned __int8 *v9; // rdi
  unsigned int FontData; // ebx
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  ULONG64 v16; // rax
  _BYTE v17[56]; // [rsp+38h] [rbp-50h] BYREF

  v9 = 0LL;
  FontData = -1;
  if ( !a5 )
  {
    v11 = SGDGetSessionState(a1);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v17, *(struct Gre::Full::SESSION_GLOBALS **)(v11 + 32));
    FontData = ulGetFontData(a1, a2, a3, 0LL, 0);
LABEL_3:
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v17);
    return FontData;
  }
  if ( a5 <= 0x2710000 )
    v9 = (unsigned __int8 *)AllocFreeTmpBuffer(a5);
  if ( v9 )
  {
    v13 = SGDGetSessionState(a1);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v17, *(struct Gre::Full::SESSION_GLOBALS **)(v13 + 32));
    FontData = ulGetFontData(a1, a2, a3, v9, a5);
    if ( FontData != -1 )
    {
      if ( FontData > a5 )
        FontData = -1;
      if ( FontData != -1 )
      {
        v16 = (ULONG64)a4 + FontData;
        if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v9, FontData);
      }
    }
    FreeTmpBuffer(v9, v14, v15);
    goto LABEL_3;
  }
  return FontData;
}
