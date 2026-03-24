/*
 * XREFs of ApiSetEditionKeyEventLLHook @ 0x1C004CAB4
 * Callers:
 *     xxxKeyEventEx @ 0x1C004BFD0 (xxxKeyEventEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     EditionKeyEventLLHook @ 0x1C004CBDC (EditionKeyEventLLHook.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionKeyEventLLHook(
        int a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        int a4,
        char a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  unsigned __int16 v14; // bp
  unsigned int v16; // ebx
  int v17; // eax

  v14 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      414,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v16 = 0;
  if ( qword_1C0258508 )
    v17 = qword_1C0258508();
  else
    v17 = -1073741637;
  if ( v17 >= 0 )
    v16 = EditionKeyEventLLHook(a1, v14, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      415,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v16;
}
