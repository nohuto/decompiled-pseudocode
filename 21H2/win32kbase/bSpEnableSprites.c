/*
 * XREFs of bSpEnableSprites @ 0x1C00C4470
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C016AE70 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*bSpEnableSprites())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029B138;
  if ( qword_1C029B138 )
    return (__int64 (*)(void))qword_1C029B138();
  return result;
}
