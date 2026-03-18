/*
 * XREFs of PopShutdownHandler @ 0x140AA8FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     InbvAcquireDisplayOwnership @ 0x14054E570 (InbvAcquireDisplayOwnership.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140671AB0 (BgDisplaySafeToPowerOffScreen.c)
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
