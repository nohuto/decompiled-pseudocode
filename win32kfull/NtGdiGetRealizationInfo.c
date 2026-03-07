__int64 __fastcall NtGdiGetRealizationInfo(HDC a1, unsigned int *a2)
{
  unsigned int *v4; // rax
  __int64 v5; // rax
  unsigned int RealizationInfo; // edi
  unsigned int v7; // ebx
  _BYTE v9[48]; // [rsp+20h] [rbp-378h] BYREF
  unsigned int Length[204]; // [rsp+50h] [rbp-348h] BYREF

  memset_0(Length, 0, 0x32CuLL);
  v4 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  Length[0] = *v4;
  if ( Length[0] != 16 && Length[0] != 812 && Length[0] != 24 )
    return 0LL;
  v5 = SGDGetSessionState(Length[0]);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v9, *(struct Gre::Full::SESSION_GLOBALS **)(v5 + 32));
  RealizationInfo = GreGetRealizationInfo(a1, (struct tagFONT_REALIZATION_INFO2 *)Length);
  if ( RealizationInfo )
  {
    v7 = Length[0];
    ProbeForWrite(a2, Length[0], 4u);
    memmove(a2, Length, v7);
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v9);
  return RealizationInfo;
}
