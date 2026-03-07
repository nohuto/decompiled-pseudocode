void __fastcall WaitForWinstaRundown(struct _KEVENT *StartContext)
{
  if ( StartContext )
    KeSetEvent(StartContext, 1, 0);
  ExWaitForRundownProtectionRelease(gWinstaRunRef);
  ExRundownCompleted(gWinstaRunRef);
}
