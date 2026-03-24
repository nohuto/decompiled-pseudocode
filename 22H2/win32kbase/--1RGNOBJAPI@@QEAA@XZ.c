/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0035D10
 * Callers:
 *     bDeleteRegion @ 0x1C001DAB0 (bDeleteRegion.c)
 *     GreGetRegionData @ 0x1C0020AD0 (GreGetRegionData.c)
 *     NtGdiDeleteObjectApp @ 0x1C0033780 (NtGdiDeleteObjectApp.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0035990 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C0035C10 (SetRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0037720 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C003950C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreDeleteObject @ 0x1C0039970 (GreDeleteObject.c)
 *     GreOffsetRgn @ 0x1C003A600 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C003ACD0 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C0080E90 (GreSetRectRgn.c)
 *     GreRectInRegion @ 0x1C0081E00 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C00858A0 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C0086AF0 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C0094B40 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C00A7E80 (GreIsValidRegion.c)
 *     GreCopyVisRgn @ 0x1C00BBBB0 (GreCopyVisRgn.c)
 *     EngDeleteRgn @ 0x1C014BAA0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014BB20 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C02990FC (InitializeGre.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0067670 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  PopThreadGuardedObject((_QWORD *)this + 1);
}
