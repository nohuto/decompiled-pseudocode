/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00348A0
 * Callers:
 *     bDeleteRegion @ 0x1C001C640 (bDeleteRegion.c)
 *     GreGetRegionData @ 0x1C001F660 (GreGetRegionData.c)
 *     NtGdiDeleteObjectApp @ 0x1C0032310 (NtGdiDeleteObjectApp.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0034520 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C00347A0 (SetRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00362B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C003809C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreDeleteObject @ 0x1C0038500 (GreDeleteObject.c)
 *     GreOffsetRgn @ 0x1C0039190 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C0039860 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C007FC00 (GreSetRectRgn.c)
 *     GreRectInRegion @ 0x1C0080BB0 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C00849A0 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C0085BF0 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C0093D80 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C00A7980 (GreIsValidRegion.c)
 *     GreCopyVisRgn @ 0x1C00BB990 (GreCopyVisRgn.c)
 *     EngDeleteRgn @ 0x1C014B7B0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014B830 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C029A0FC (InitializeGre.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0066670 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  PopThreadGuardedObject((_QWORD *)this + 1);
}
