/*
 * XREFs of CkptRestore @ 0x1C007C97C
 * Callers:
 *     UpdateCheckpoint @ 0x1C007C924 (UpdateCheckpoint.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01454C0 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z @ 0x1C016D756 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@KAEBUtagRECT@@PEAK@Z @ 0x1C020D59C (-xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUt.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023DD00 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C024AC80 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     CkptUpdate @ 0x1C007CA54 (CkptUpdate.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     DesktopAlloc @ 0x1C00C2D40 (DesktopAlloc.c)
 */

struct tagRECT *__fastcall CkptRestore(struct tagWND *a1, struct tagRECT *a2)
{
  struct tagRECT *Prop; // rbx
  __int64 v6; // rax

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    Prop = (struct tagRECT *)GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
    if ( Prop )
    {
LABEL_3:
      CkptUpdate(a1, a2);
      return Prop;
    }
    v6 = DesktopAlloc(*((_QWORD *)a1 + 3), 52LL, 1952674645LL);
    Prop = (struct tagRECT *)v6;
    if ( v6 )
    {
      if ( (unsigned int)InternalSetProp(a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), v6, 9LL) )
      {
        Prop[3].left &= 0xFFFFFF80;
        Prop[2].left = -1;
        Prop[2].top = -1;
        Prop[2].right = -1;
        Prop[2].bottom = -1;
        *Prop = *a2;
        Prop[1] = *a2;
        goto LABEL_3;
      }
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, Prop);
    }
  }
  return 0LL;
}
