/*
 * XREFs of vEnableSynchronize @ 0x1C00B3D38
 * Callers:
 *     bDynamicModeChange @ 0x1C00BA730 (bDynamicModeChange.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C013DEC0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0143CA4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vEnableSynchronize())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02563C8;
  if ( qword_1C02563C8 )
    return (__int64 (*)(void))qword_1C02563C8();
  return result;
}
