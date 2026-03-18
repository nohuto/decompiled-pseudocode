/*
 * XREFs of ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020A5F4
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C020B268 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x1C02096B0 (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C0209A78 (-DisableTemporayMetricsOverrides@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1C0209FFC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020AF4C (-SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020B00C (-SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z @ 0x1C020B480 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z.c)
 */

void __fastcall HandleSizingAwayFromDockTarget(struct MOVESIZEDATA *a1, const struct tagRECT *a2, unsigned int *a3)
{
  struct tagRECT *MonitorWorkRectForWindow; // rax
  struct tagWND *v7; // rdx
  _DWORD *v8; // rax
  int FrameBoundsOverlapInfo; // eax
  char v10; // dl
  int v11; // r8d
  bool v12; // r9
  int v13; // eax
  __int128 v14; // xmm0
  int v15; // eax
  int v16; // r10d
  __int128 v17; // [rsp+30h] [rbp-68h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-58h] BYREF
  __m128i si128; // [rsp+50h] [rbp-48h]
  __m128i v20; // [rsp+60h] [rbp-38h]

  MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(
                                                 (__int64)&v17,
                                                 *((_QWORD *)a1 + 27),
                                                 *((const struct tagWND **)a1 + 2));
  v7 = (struct tagWND *)*((_QWORD *)a1 + 2);
  v18 = *MonitorWorkRectForWindow;
  v8 = WindowMargins::ReduceRect(&v17, v7, (_DWORD *)a1 + 10);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v17 = *(_OWORD *)v8;
  v20 = _mm_load_si128((const __m128i *)&_xmm);
  FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(&v18, &v17, 0);
  v10 = 1;
  v11 = ~*(&v18.bottom + *((int *)a1 + 44)) & FrameBoundsOverlapInfo;
  v12 = v11 && v11 != 15 && ((v11 - 1) & v11) != 0;
  v13 = *((_DWORD *)a1 + 50);
  if ( (v13 & 0x2000000) != 0 || (v13 & 0x6000) == 0 || (v13 & 0x300) == 0 )
  {
    v10 = 0;
    if ( (*((_DWORD *)a1 + 50) & 0x2000000) != 0 )
    {
      v14 = *(_OWORD *)((char *)a1 + 40);
      *((_DWORD *)a1 + 50) = v13 & 0xFDFFFFFF;
      *(_OWORD *)((char *)a1 + 72) = v14;
      if ( a3 )
        *a3 |= 2u;
    }
  }
  if ( v12 )
  {
    v15 = ArrangementStyleFromOverlap(v11);
    *((_DWORD *)a1 + 50) ^= v16 & (*((_DWORD *)a1 + 50) ^ (v15 << 8));
    SetDragOutToDragInThreshold(a1);
  }
  else
  {
    if ( v10 )
    {
      UpdateDragRectForSizingAway(a1, &v18, a2);
      SetDragInThresholdAlways(a1);
    }
    *((_DWORD *)a1 + 50) &= 0xFFFFFCFF;
    *(_OWORD *)((char *)a1 + 296) = 0LL;
    *(_OWORD *)((char *)a1 + 312) = 0LL;
    *((_DWORD *)a1 + 83) &= 0xFFFFFFFC;
    *((_DWORD *)a1 + 82) = 0;
    DisableTemporayMetricsOverrides(a1);
  }
  MakeArrangedStateObservable(a1);
  *((_DWORD *)a1 + 60) = 4;
}
