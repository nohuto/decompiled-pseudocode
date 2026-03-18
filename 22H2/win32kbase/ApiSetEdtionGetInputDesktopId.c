/*
 * XREFs of ApiSetEdtionGetInputDesktopId @ 0x1C0207BA4
 * Callers:
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C00E635A (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01F6A3C (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEdtionGetInputDesktopId()
{
  __int64 v0; // rbx

  v0 = 0LL;
  if ( qword_1C0296C60 && (int)qword_1C0296C60() >= 0 && qword_1C0296C68 )
    return qword_1C0296C68();
  return v0;
}
