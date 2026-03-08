/*
 * XREFs of vMakeInactiveHelper @ 0x1C02A2F4C
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00DF0D8 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C0125504 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C02A3238 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02A3388 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C01147B0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall vMakeInactiveHelper(struct RFONT **a1)
{
  struct RFONT *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( *a1 )
    {
      v2 = *a1;
      RFONTOBJ::bMakeInactiveHelper(&v2, 0LL);
      *a1 = 0LL;
      v2 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v2);
    }
  }
}
