/*
 * XREFs of ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C02B8468
 * Callers:
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C02B977C (-UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C02B9850 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x1C02BD350 (-UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z.c)
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029955C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 */

__int64 __fastcall UMPDOBJ::ThunkStringW(UMPDOBJ *this, unsigned __int16 **a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  unsigned __int64 v5; // rax

  v2 = 0;
  if ( !*a2 )
    return 1LL;
  v4 = -1LL;
  do
    ++v4;
  while ( (*a2)[v4] );
  v5 = v4 + 1;
  if ( v5 < 0x7FFFFFFF )
    return (unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)a2, 2 * (int)v5);
  return v2;
}
