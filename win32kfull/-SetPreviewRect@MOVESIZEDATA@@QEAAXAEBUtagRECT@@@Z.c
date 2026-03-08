/*
 * XREFs of ?SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1C023DD44
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F3238 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C01ED7A4 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 */

void __fastcall MOVESIZEDATA::SetPreviewRect(MOVESIZEDATA *this, const struct tagRECT *a2)
{
  bool v2; // zf
  char v4; // [rsp+50h] [rbp+8h] BYREF

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
        (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids);
    *((_DWORD *)this + 50) |= 0x1000000u;
    if ( (*((_DWORD *)this + 50) & 0x20) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v4);
      xxxDrawDragRect(this, 0LL, 0x80000000);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v4);
    }
  }
}
