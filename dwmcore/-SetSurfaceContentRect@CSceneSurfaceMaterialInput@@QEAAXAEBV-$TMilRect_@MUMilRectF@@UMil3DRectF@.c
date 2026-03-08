/*
 * XREFs of ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024E208
 * Callers:
 *     ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z @ 0x18024E014 (-ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFA.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180049484 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CSceneSurfaceMaterialInput::SetSurfaceContentRect(__int64 a1, float *a2)
{
  char result; // al
  _OWORD *v3; // r10
  __int64 *v4; // r11
  __int64 v5; // rax

  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a2, (float *)(a1 + 88));
  if ( !result )
  {
    v5 = *v4;
    *(_OWORD *)(v4 + 11) = *v3;
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v5 + 72))(v4, 0LL, v4);
  }
  return result;
}
