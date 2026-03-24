/*
 * XREFs of bSpEnableSprites @ 0x1C00B582C
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C013E1D0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0143FF4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*bSpEnableSprites())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02553B8;
  if ( qword_1C02553B8 )
    return (__int64 (*)(void))qword_1C02553B8();
  return result;
}
