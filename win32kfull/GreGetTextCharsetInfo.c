__int64 __fastcall GreGetTextCharsetInfo(HDC a1)
{
  HDC v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  _BYTE v5[56]; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1;
  v2 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v5, *(struct Gre::Full::SESSION_GLOBALS **)(v2 + 32));
  LODWORD(v1) = GrepGetTextCharsetInfo(v1, 0LL, v3, 1026);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v5);
  return (unsigned int)v1;
}
