/*
 * XREFs of NtGdiGetTextMetricsW @ 0x1C0112560
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0112400 (-GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtGdiGetTextMetricsW(HDC a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int TextMetricsW; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE v9[48]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v10[4]; // [rsp+50h] [rbp-58h] BYREF
  int v11; // [rsp+90h] [rbp-18h]

  TextMetricsW = 0;
  if ( a3 >= 0x44 )
  {
    memset_0(v10, 0, 0x44uLL);
    v7 = SGDGetSessionState(v6);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v9, *(struct Gre::Full::SESSION_GLOBALS **)(v7 + 32));
    TextMetricsW = GrepGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v10, 20);
    if ( TextMetricsW )
    {
      if ( a2 + 68 > MmUserProbeAddress || a2 + 68 <= a2 || (a2 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a2 = v10[0];
      *(_OWORD *)(a2 + 16) = v10[1];
      *(_OWORD *)(a2 + 32) = v10[2];
      *(_OWORD *)(a2 + 48) = v10[3];
      *(_DWORD *)(a2 + 64) = v11;
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v9);
  }
  return TextMetricsW;
}
