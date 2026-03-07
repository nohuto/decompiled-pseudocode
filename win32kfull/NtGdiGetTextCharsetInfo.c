__int64 __fastcall NtGdiGetTextCharsetInfo(HDC a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int TextCharsetInfo; // ebx
  _BYTE v8[48]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v4 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v8, *(struct Gre::Full::SESSION_GLOBALS **)(v4 + 32));
  TextCharsetInfo = GrepGetTextCharsetInfo(a1, (unsigned __int64)&v9 & ((unsigned __int128)-(__int128)a2 >> 64), v5, 14);
  if ( TextCharsetInfo != -1 && a2 )
  {
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v9;
    *(_QWORD *)(a2 + 16) = v10;
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v8);
  return TextCharsetInfo;
}
