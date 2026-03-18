/*
 * XREFs of vMakeInactiveHelper @ 0x1C02A07F0
 * Callers:
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C008AA18 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00A82C8 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C02A0ADC (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02A0C30 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00932EC (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 */

void __fastcall vMakeInactiveHelper(__int64 *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( *a1 )
    {
      v2 = *a1;
      RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v2, 0LL);
      *a1 = 0LL;
      v2 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v2);
    }
  }
}
