/*
 * XREFs of ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C01EB47C
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01EAB38 (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01EADC8 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01ECE40 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F3238 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

void __fastcall MakeArrangedStateObservable(const struct MOVESIZEDATA *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rdx
  int v5; // r9d

  v1 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 50) & 0x100) != 0 )
    *(_DWORD *)(v1 + 320) |= 0x4000000u;
  else
    *(_DWORD *)(v1 + 320) &= ~0x4000000u;
  v3 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 50) & 0x200) != 0 )
    *(_DWORD *)(v3 + 320) |= 0x8000000u;
  else
    *(_DWORD *)(v3 + 320) &= ~0x8000000u;
  if ( !IsSemiMaximized(*((const struct tagWND **)a1 + 2)) && (*(_BYTE *)(v4[5] + 233) & 0x10) != 0 )
    SetOrClrWF(0, v4, 0xD910u, v5);
}
