/*
 * XREFs of ApiSetEditionPostAccessibilityShortcutNotification @ 0x1C020A4F4
 * Callers:
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B9070 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01B9490 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B95D0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01BAA50 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01BADF0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionPostAccessibilityShortcutNotification(unsigned int a1))(void)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  __int64 (*result)(void); // rax
  char v6; // dl

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      172,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  result = qword_1C029C648;
  if ( qword_1C029C648 )
  {
    result = (__int64 (*)(void))qword_1C029C648();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C029C650;
      if ( qword_1C029C650 )
        result = (__int64 (*)(void))qword_1C029C650(a1);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v6 || v2 )
    return (__int64 (*)(void))WPP_RECORDER_AND_TRACE_SF_(
                                WPP_GLOBAL_Control->AttachedDevice,
                                v6,
                                v2,
                                WPP_GLOBAL_Control->DeviceExtension,
                                5,
                                10,
                                173,
                                (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  return result;
}
