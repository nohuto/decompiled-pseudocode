/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148
 * Callers:
 *     GrePtInRegion @ 0x1C0008190 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C000AE90 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C000C820 (GreIsValidRegion.c)
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C003EDB0 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C003F040 (SetRectRgnIndirect.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreGetRegionData @ 0x1C005AA00 (GreGetRegionData.c)
 *     GreCopyVisRgn @ 0x1C005BA60 (GreCopyVisRgn.c)
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     EngDeleteRgn @ 0x1C008A130 (EngDeleteRgn.c)
 *     GreSetRectRgn @ 0x1C008A530 (GreSetRectRgn.c)
 *     GreRectInRegion @ 0x1C0098880 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C0099280 (GreGetRgnBox.c)
 *     EngEqualRgn @ 0x1C016A930 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C02DB800 (InitializeGre.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0080460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  PopThreadGuardedObject((_QWORD *)this + 1);
}
