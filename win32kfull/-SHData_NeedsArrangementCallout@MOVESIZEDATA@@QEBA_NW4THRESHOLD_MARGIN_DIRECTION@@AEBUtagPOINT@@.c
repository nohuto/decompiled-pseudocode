/*
 * XREFs of ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x1C023D2A4
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1C01F230C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddsdddddd @ 0x1C023E0D0 (WPP_RECORDER_AND_TRACE_SF_ddsdddddd.c)
 */

char __fastcall MOVESIZEDATA::SHData_NeedsArrangementCallout(__int64 a1, int a2, unsigned __int64 *a3)
{
  int v3; // r10d
  __int64 v4; // r9
  int v5; // ebp

  v3 = a2;
  v4 = a1;
  if ( *(_BYTE *)(a1 + 316) )
  {
    v5 = *(unsigned __int8 *)(a1 + 317);
    LODWORD(a3) = PtInRect((_DWORD *)(a1 + 300), *a3);
    if ( v5 != (_DWORD)a3 )
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_ddsdddddd(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          (_DWORD)a3,
          *(_DWORD *)(v4 + 312) - *(_DWORD *)(v4 + 304));
      }
      return 1;
    }
  }
  if ( v3 == 4 && *(_BYTE *)(v4 + 337) )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)a3,
        14,
        4,
        1,
        14,
        (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids);
    }
    return 1;
  }
  return 0;
}
