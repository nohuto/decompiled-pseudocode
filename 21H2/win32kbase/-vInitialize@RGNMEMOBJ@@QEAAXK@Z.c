/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C00277CC (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0027DA0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C008EE00 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00968C0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00A8FE0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00AB334 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00CC200 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00CC88C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C016D8A0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngCreateClip @ 0x1C0177EF0 (EngCreateClip.c)
 * Callees:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  unsigned int v2; // edi
  struct REGION *Region; // rax
  struct REGION *v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rax

  v2 = 112;
  if ( a2 >= 0x70 )
    v2 = a2;
  Region = RGNMEMOBJ::AllocateRegion(v2);
  *(_QWORD *)this = Region;
  v5 = Region;
  if ( Region )
  {
    *((_DWORD *)Region + 20) = 16;
    *((_DWORD *)Region + 21) = 1;
    *((_QWORD *)Region + 12) = 0LL;
    *((_QWORD *)Region + 13) = 0LL;
    v6 = *((_QWORD *)Region + 11);
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0x80000000;
    *(_QWORD *)(v6 + 8) = 0x7FFFFFFFLL;
    *((_QWORD *)v5 + 5) = v6 + 16;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v2;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v7 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v7[1] = v7;
    *v7 = v7;
  }
}
