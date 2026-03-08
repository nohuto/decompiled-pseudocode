/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0019558 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreCreateRectRgn @ 0x1C0019F70 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C001C0B0 (NtGdiCreateRectRgn.c)
 *     GreValidateVisrgn @ 0x1C004145C (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00432EC (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0184084 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C018BB00 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C0197B70 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 * Callees:
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051B70 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this, const struct _RECTL *const a2)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
  RGNCOREOBJ::vSet((RGNCOREOBJ *)&v2, a2);
}
