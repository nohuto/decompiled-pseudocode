/*
 * XREFs of ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z @ 0x1C01EC088
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01EADC8 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00E3308 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00FF518 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1C01EAAAC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 */

void __fastcall UpdateDragRectForSizingAway(struct tagRECT **a1, struct tagRECT *a2, const struct tagRECT *a3)
{
  char FrameBoundsOverlapInfo; // r8
  int v7; // esi
  int v8; // edi
  char v9; // dl
  struct tagRECT v10; // [rsp+50h] [rbp-18h] BYREF

  v10 = *WindowMargins::ReduceRect(
           &v10,
           a1[2],
           (const struct tagWND *)(*(_QWORD *)&a1[2][2].right + 88LL),
           (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)&a1[27][2].right + 60LL));
  FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(a2, &v10, 0);
  if ( (FrameBoundsOverlapInfo & 5) == 5 )
    v7 = (a2->right - a2->left) / 2;
  else
    v7 = a3->right - a3->left;
  if ( (FrameBoundsOverlapInfo & 0xA) == 0xA )
    v8 = (a2->bottom - a2->top) / 2;
  else
    v8 = a3->bottom - a3->top;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0x21u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      v7,
      v8);
  switch ( *((_DWORD *)a1 + 44) )
  {
    case 1:
      goto LABEL_26;
    case 2:
LABEL_24:
      *((_DWORD *)a1 + 10) = *((_DWORD *)a1 + 12) - v7;
      return;
    case 3:
      *((_DWORD *)a1 + 13) = v8 + *((_DWORD *)a1 + 11);
      return;
    case 4:
      *((_DWORD *)a1 + 13) = v8 + *((_DWORD *)a1 + 11);
      goto LABEL_26;
    case 5:
      *((_DWORD *)a1 + 13) = v8 + *((_DWORD *)a1 + 11);
      goto LABEL_24;
    case 6:
      *((_DWORD *)a1 + 11) = *((_DWORD *)a1 + 13) - v8;
      return;
    case 7:
      *((_DWORD *)a1 + 11) = *((_DWORD *)a1 + 13) - v8;
LABEL_26:
      *((_DWORD *)a1 + 12) = v7 + *((_DWORD *)a1 + 10);
      return;
    case 8:
      *((_DWORD *)a1 + 11) = *((_DWORD *)a1 + 13) - v8;
      goto LABEL_24;
  }
}
