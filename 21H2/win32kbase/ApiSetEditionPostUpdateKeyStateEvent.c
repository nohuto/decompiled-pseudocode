/*
 * XREFs of ApiSetEditionPostUpdateKeyStateEvent @ 0x1C0006F84
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C0006990 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionPostUpdateKeyStateEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      422,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0258548 )
    v4 = qword_1C0258548();
  else
    v4 = -1073741637;
  v5 = 0;
  if ( v4 >= 0 )
  {
    if ( qword_1C0258550 )
      v6 = qword_1C0258550(a1, v2);
    else
      v6 = 0;
    LOBYTE(v5) = v6 != 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      423,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v5;
}
