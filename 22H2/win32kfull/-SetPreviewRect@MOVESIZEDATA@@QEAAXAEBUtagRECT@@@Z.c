/*
 * XREFs of ?SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1C023B0D4
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F2058 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C01EC5E0 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 */

void __fastcall MOVESIZEDATA::SetPreviewRect(MOVESIZEDATA *this, const struct tagRECT *a2)
{
  bool v2; // zf
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 50) & 0x1000000) == 0;
  *(struct tagRECT *)((char *)this + 72) = *a2;
  if ( v2 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        28,
        4,
        1,
        28,
        (__int64)&WPP_0bf01d38e7493d5599743f09d218946b_Traceguids);
    *((_DWORD *)this + 50) |= 0x1000000u;
    if ( (*((_DWORD *)this + 50) & 0x20) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
      xxxDrawDragRect(this, 0LL, 0x80000000);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6, v4, v5);
    }
  }
}
