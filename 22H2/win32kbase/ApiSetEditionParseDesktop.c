/*
 * XREFs of ApiSetEditionParseDesktop @ 0x1C004F9E4
 * Callers:
 *     ParseWindowStation @ 0x1C004F8A0 (ParseWindowStation.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     EditionParseDesktop @ 0x1C004FAF8 (EditionParseDesktop.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionParseDesktop(
        int a1,
        int a2,
        int a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v12; // ebp
  unsigned int v14; // ebx
  int v15; // eax

  v12 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      474,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v14 = 0;
  if ( qword_1C02564B0 )
    v15 = qword_1C02564B0();
  else
    v15 = -1073741637;
  if ( v15 >= 0 )
    v14 = EditionParseDesktop(a1, v12, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      475,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v14;
}
