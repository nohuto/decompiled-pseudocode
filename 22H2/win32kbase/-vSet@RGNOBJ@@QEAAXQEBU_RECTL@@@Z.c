/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreValidateVisrgn @ 0x1C004B7A8 (GreValidateVisrgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007CEAC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCreateRectRgn @ 0x1C008A630 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C008A780 (NtGdiCreateRectRgn.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0157418 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD90 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C015EE80 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C016ADA0 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C016AF70 (GreIntersectVisRect.c)
 * Callees:
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003F180 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this, const struct _RECTL *const a2)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
  RGNCOREOBJ::vSet((RGNCOREOBJ *)&v2, a2);
}
