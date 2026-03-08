/*
 * XREFs of ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01EBD54
 * Callers:
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01EBAF4 (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01EA46C (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESH.c)
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01EAB38 (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01EADC8 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01EB8FC (-SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01EC3A8 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 */

void __fastcall SnapSizeRect(
        struct MOVESIZEDATA *this,
        const struct tagRECT *a2,
        struct tagMONITOR *a3,
        unsigned int *a4)
{
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  struct tagMONITOR *v11; // rdx
  struct tagMONITOR *v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+64h] [rbp+1Ch]

  v14 = HIDWORD(a3);
  v12 = 0LL;
  v13 = 0;
  v7 = ComputeSizeOutcome((__int64)this, &v12, &v13) - 2;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          HandleNoTargetToDockTargetSizing((__int64)this, v12, v8, v13, a4);
      }
      else
      {
        HandleSizingAwayFromDockTarget(this, a2, a4);
      }
    }
    else
    {
      v11 = v12;
      *((_DWORD *)this + 60) = v13;
      SetCurrentHitTargetMonitor(this, v11, 1);
    }
  }
  else
  {
    VerticalSizeRectFromHitTarget(this, v12, v13);
  }
}
