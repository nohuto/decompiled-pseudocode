/*
 * XREFs of ApiSetEditionDoHotKeys @ 0x1C004C884
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004C1F0 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionDoHotKeys(
        PDEVICE_OBJECT a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  char v8; // bp
  char v9; // r14
  unsigned int v10; // ebx
  int v11; // eax

  v8 = a2;
  v9 = (char)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        10,
        412,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  v10 = 0;
  if ( qword_1C02584F8 )
    v11 = qword_1C02584F8();
  else
    v11 = -1073741637;
  if ( v11 >= 0 && qword_1C0258500 )
  {
    LOBYTE(a2) = v8;
    LOBYTE(a1) = v9;
    v10 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, __int64, _QWORD, _QWORD, __int64, __int64))qword_1C0258500)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      413,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v10;
}
