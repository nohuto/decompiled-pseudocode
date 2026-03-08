/*
 * XREFs of vKillRFONTList @ 0x1C026E230
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00B7040 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0123C28 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall vKillRFONTList(PFFOBJ *this, struct _FONTOBJ *a2)
{
  struct _FONTOBJ *sizLogResPpi; // rbx
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _FONTOBJ *v5; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    sizLogResPpi = a2;
    do
    {
      sizLogResPpi = (struct _FONTOBJ *)sizLogResPpi[10].sizLogResPpi;
      v5 = a2;
      memset(v4, 0, sizeof(v4));
      PushThreadGuardedObject(v4, a2, vRestartKillEudcRFONTs);
      RFONTOBJ::vDeleteRFONT(&v5, 0LL, 0LL, 1);
      PopThreadGuardedObject(v4);
      PFFOBJ::vDeleteRFONTRef(this);
      v5 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
      a2 = sizLogResPpi;
    }
    while ( sizLogResPpi );
  }
}
