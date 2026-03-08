/*
 * XREFs of BmlDoesTargetModeSupportWireFormat @ 0x1C01DD3C4
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C016D868 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C016E538 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C017116C (BmlCompareTargetModesWithConstraint.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0176CA0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall BmlDoesTargetModeSupportWireFormat(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  char v3; // bp
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // esi

  v2 = *(_DWORD *)(a1 + 128);
  v3 = 0;
  if ( !*(_QWORD *)(a1 + 40) )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
  if ( !*(_QWORD *)(v6 + 40) )
    WdLogSingleEntry0(1LL);
  v7 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v6 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v7 + 8) )
    WdLogSingleEntry0(1LL);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = a2 >> 2;
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v8 + 16)) )
    return (v9 & 0x3F) == 2;
  if ( ((unsigned __int8)v9 & (unsigned __int8)(v2 >> 2) & 0x3F) != 0
    || ((a2 & v2 | ((a2 & v2 | ((a2 & v2) >> 6)) >> 6)) & 0x3F00) != 0
    || (a2 & v2) >= 0x4000000 )
  {
    return 1;
  }
  return v3;
}
