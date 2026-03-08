/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x14054C410
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403A4BA0 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x14054C0FC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x14054C130 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x14054C18C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14054C22C (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x14054C56C (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1407DC870 (PsTerminateSystemThread.c)
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
