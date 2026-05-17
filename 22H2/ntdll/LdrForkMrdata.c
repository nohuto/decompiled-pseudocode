/*
 * XREFs of LdrForkMrdata @ 0x1800D5920
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009BA40 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BB80 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6340 (RtlCloneUserProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrForkMrdata(int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      LdrpMrdataLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, a2, a3, a4);
  }
}
