/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C00427F0
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0053290 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C0053560 (-vSet@RGNOBJ@@QEAAXXZ.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, unsigned int a2)
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
  return this;
}
