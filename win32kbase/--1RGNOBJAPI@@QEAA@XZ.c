/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005173C
 * Callers:
 *     GrePtInRegion @ 0x1C0007000 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C00099E0 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C000B060 (GreIsValidRegion.c)
 *     EngDeleteRgn @ 0x1C0019A50 (EngDeleteRgn.c)
 *     GreCopyVisRgn @ 0x1C003CF00 (GreCopyVisRgn.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     EngEqualRgn @ 0x1C0197710 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0051CB0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
