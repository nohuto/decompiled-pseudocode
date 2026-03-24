/*
 * XREFs of bSpEnableSprites @ 0x1C00B54EC
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C013DEC0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0143CA4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*bSpEnableSprites())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02563B8;
  if ( qword_1C02563B8 )
    return (__int64 (*)(void))qword_1C02563B8();
  return result;
}
