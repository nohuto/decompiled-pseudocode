/*
 * XREFs of ?GetFromPointerType@@YA?AW4CompositionInputType@@K@Z @ 0x1C0002270
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 */

__int64 __fastcall GetFromPointerType(int a1)
{
  unsigned int v1; // ebx
  int v2; // edx

  v1 = 0;
  v2 = 1;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
    {
      if ( a1 == 3 )
      {
        v1 = 4;
        goto LABEL_6;
      }
      if ( a1 == 4 )
        goto LABEL_5;
      if ( a1 != 5 )
        goto LABEL_6;
    }
    v1 = 3;
    goto LABEL_6;
  }
LABEL_5:
  v1 = 1;
LABEL_6:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(v2) = 0;
  }
  if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      5,
      24,
      (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
      a1,
      v1);
  return v1;
}
