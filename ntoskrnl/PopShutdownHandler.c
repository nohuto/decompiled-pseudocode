/*
 * XREFs of PopShutdownHandler @ 0x140AA5D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     InbvAcquireDisplayOwnership @ 0x14054C0D0 (InbvAcquireDisplayOwnership.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x14066F460 (BgDisplaySafeToPowerOffScreen.c)
 */

void __noreturn PopShutdownHandler()
{
  _disable();
  if ( !KeGetCurrentPrcb()->Number )
  {
    InbvAcquireDisplayOwnership();
    BgDisplaySafeToPowerOffScreen();
  }
  while ( 1 )
    off_140C019E8();
}
