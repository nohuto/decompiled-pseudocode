/*
 * XREFs of ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C00267E0
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0027DA0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00968C0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00A8FE0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00CC200 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

void __fastcall RGNOBJ::vCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  *(_DWORD *)(*(_QWORD *)this + 80LL) = *(_DWORD *)(*(_QWORD *)a2 + 80LL);
  *(_DWORD *)(*(_QWORD *)this + 84LL) = *(_DWORD *)(*(_QWORD *)a2 + 84LL);
  *(_OWORD *)(*(_QWORD *)this + 96LL) = *(_OWORD *)(*(_QWORD *)a2 + 96LL);
  memmove(
    *(void **)(*(_QWORD *)this + 88LL),
    *(const void **)(*(_QWORD *)a2 + 88LL),
    *(unsigned int *)(*(_QWORD *)a2 + 80LL));
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL)
                                      + *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                      - *(_DWORD *)(*(_QWORD *)a2 + 88LL);
}
