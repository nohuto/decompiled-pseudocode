/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0019558 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 *     GreCreateRectRgn @ 0x1C0019F70 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C001C0B0 (NtGdiCreateRectRgn.c)
 *     ?GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z @ 0x1C001C5D0 (-GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0042720 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C00427C4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00434E0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00436C0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0056EF8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00AAC50 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183370 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0184084 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0189A30 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0189D98 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngCreateClip @ 0x1C0197B70 (EngCreateClip.c)
 * Callees:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0053290 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C0053560 (-vSet@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  unsigned int v2; // edi
  struct REGION *Region; // rax
  _QWORD *v5; // rax

  v2 = 112;
  if ( a2 >= 0x70 )
    v2 = a2;
  Region = RGNMEMOBJ::AllocateRegion(v2);
  *(_QWORD *)this = Region;
  if ( Region )
  {
    RGNOBJ::vSet(this);
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v2;
    *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
    v5 = (_QWORD *)(*(_QWORD *)this + 88LL);
    v5[1] = v5;
    *v5 = v5;
  }
}
