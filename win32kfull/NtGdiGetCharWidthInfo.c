__int64 __fastcall NtGdiGetCharWidthInfo(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned int CharWidthInfo; // ebx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+28h] [rbp-40h]
  _BYTE v9[56]; // [rsp+30h] [rbp-38h] BYREF

  v7 = 0LL;
  v8 = 0;
  v4 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v9, *(struct Gre::Full::SESSION_GLOBALS **)(v4 + 32));
  CharWidthInfo = GreGetCharWidthInfo(a1, &v7);
  if ( CharWidthInfo )
  {
    if ( a2 + 12 > MmUserProbeAddress || a2 + 12 <= a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a2 = v7;
    *(_DWORD *)(a2 + 8) = v8;
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v9);
  return CharWidthInfo;
}
