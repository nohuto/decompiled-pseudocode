/*
 * XREFs of GreGetTextCharsetInfo @ 0x1C0290D68
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024FB18 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ?GrepGetTextCharsetInfo@@YAHPEAUHDC__@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C01119CC (-GrepGetTextCharsetInfo@@YAHPEAUHDC__@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 */

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
