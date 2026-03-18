/*
 * XREFs of ApiSetEditionCallAccessibilityHook @ 0x1C0205B98
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014E8D4 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014EA20 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014EBD4 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionCallAccessibilityHook(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0295D18 && (int)qword_1C0295D18() >= 0 && qword_1C0295D20 )
    return (unsigned int)qword_1C0295D20(a1);
  return v1;
}
