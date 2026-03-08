/*
 * XREFs of ?GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C01136A4
 * Callers:
 *     GreExtTextOutW @ 0x1C0113604 (GreExtTextOutW.c)
 * Callees:
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C004D014 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 */

__int64 __fastcall GrepExtTextOutW(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7)
{
  __int64 v11; // rax
  unsigned int v12; // ebx
  _BYTE v14[48]; // [rsp+60h] [rbp-38h] BYREF

  v11 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v14, *(struct Gre::Full::SESSION_GLOBALS **)(v11 + 32));
  v12 = GreExtTextOutWInternal(a1, a2, a3, a4, a5, a6, a7, 0LL, 0LL, 0, 1025);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v14);
  return v12;
}
