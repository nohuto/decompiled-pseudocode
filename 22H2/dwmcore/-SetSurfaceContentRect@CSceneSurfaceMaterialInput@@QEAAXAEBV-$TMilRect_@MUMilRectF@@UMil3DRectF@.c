/*
 * XREFs of ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EC0FC
 * Callers:
 *     ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z @ 0x1801EBF84 (-ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFA.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A0EB4 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSceneSurfaceMaterialInput::SetSurfaceContentRect(__int64 a1, float *a2)
{
  char result; // al
  _OWORD *v3; // r10
  _OWORD *v4; // r11
  __int64 (__fastcall *v5)(_OWORD *, _QWORD, _OWORD *); // rax

  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a2, (float *)(a1 + 80));
  if ( !result )
  {
    v5 = *(__int64 (__fastcall **)(_OWORD *, _QWORD, _OWORD *))(*(_QWORD *)v3 + 72LL);
    v3[5] = *v4;
    return v5(v3, 0LL, v3);
  }
  return result;
}
