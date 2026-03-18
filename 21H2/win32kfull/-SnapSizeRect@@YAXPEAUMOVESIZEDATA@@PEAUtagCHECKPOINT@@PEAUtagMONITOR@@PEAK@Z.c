/*
 * XREFs of ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C020B268
 * Callers:
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C020B09C (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02097EC (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@.c)
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C020A3AC (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020A5F4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C020AF14 (-SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020B688 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 */

void __fastcall SnapSizeRect(struct tagPOINT *a1, const struct tagRECT *a2, struct tagMONITOR *a3, unsigned int *a4)
{
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  struct tagMONITOR *v11; // rdx
  struct tagMONITOR *v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF
  int v14; // [rsp+54h] [rbp+1Ch]

  v14 = HIDWORD(a3);
  v12 = 0LL;
  v13 = 0;
  v7 = ComputeSizeOutcome(a1[33], (__int64)a1, &v12, &v13) - 2;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          HandleNoTargetToDockTargetSizing((__int64)a1, v12, v8, v13, a4);
      }
      else
      {
        HandleSizingAwayFromDockTarget((struct MOVESIZEDATA *)a1, a2, a4);
      }
    }
    else
    {
      v11 = v12;
      a1[30].x = v13;
      SetCurrentHitTargetMonitor((struct MOVESIZEDATA *)a1, v11, 1);
    }
  }
  else
  {
    VerticalSizeRectFromHitTarget(a1, v12, v13, 0LL, a1[33].x);
  }
}
