/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1404FEE90
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403B4748 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1404FEB7C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1404FEBB0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1404FEC0C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404FECAC (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1404FEFEC (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406A3340 (PsTerminateSystemThread.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock();
    if ( !(unsigned int)InbvGetDisplayState() && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock();
  }
  while ( InbvCheckDisplayOwnership() );
  InbvReleaseResources();
  PsTerminateSystemThread(0);
}
