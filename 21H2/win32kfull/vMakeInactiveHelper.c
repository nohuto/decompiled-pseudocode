/*
 * XREFs of vMakeInactiveHelper @ 0x1C02971C8
 * Callers:
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C015EA48 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C015ED74 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C029747C (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02975D8 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C000A940 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
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
