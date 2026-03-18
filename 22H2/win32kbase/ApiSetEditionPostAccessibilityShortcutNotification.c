/*
 * XREFs of ApiSetEditionPostAccessibilityShortcutNotification @ 0x1C0207294
 * Callers:
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B5CE0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6100 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6240 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6F90 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B73C0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionPostAccessibilityShortcutNotification(unsigned int a1))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295D28;
  if ( qword_1C0295D28 )
  {
    result = (__int64 (*)(void))qword_1C0295D28();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0295D30;
      if ( qword_1C0295D30 )
        return (__int64 (*)(void))qword_1C0295D30(a1);
    }
  }
  return result;
}
