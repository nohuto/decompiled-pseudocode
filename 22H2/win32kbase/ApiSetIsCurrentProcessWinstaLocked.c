/*
 * XREFs of ApiSetIsCurrentProcessWinstaLocked @ 0x1C0096D0C
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x1C0059240 (UserGlobalAtomTableCallout.c)
 *     UserSurfaceAccessCheck @ 0x1C0096C50 (UserSurfaceAccessCheck.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetIsCurrentProcessWinstaLocked()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02953B8 && (int)qword_1C02953B8() >= 0 && qword_1C02953C0 )
    return (unsigned int)qword_1C02953C0();
  return v0;
}
