/*
 * XREFs of ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0043670
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0042720 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00434E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00AAC50 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183370 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 * Callees:
 *     ?vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z @ 0x1C0043830 (-vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z.c)
 */

void __fastcall RGNOBJ::vCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
  v2 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
  RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v3, (const struct RGNCOREOBJ *)&v2);
}
