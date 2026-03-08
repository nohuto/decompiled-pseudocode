/*
 * XREFs of NtGdiGetRealizationInfo @ 0x1C0112910
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetRealizationInfo@@YAHPEAUHDC__@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0112848 (-GreGetRealizationInfo@@YAHPEAUHDC__@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

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
