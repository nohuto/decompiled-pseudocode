__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4)
{
  __int64 v8; // rax
  _BYTE v10[48]; // [rsp+30h] [rbp-38h] BYREF

  v8 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v10, *(struct Gre::Full::SESSION_GLOBALS **)(v8 + 32));
  LODWORD(a4) = GrepGetTextExtentW(a1, a2, a3, a4, 1u, COERCE_FLOAT(1024));
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v10);
  return (unsigned int)a4;
}
