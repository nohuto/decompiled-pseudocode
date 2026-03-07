LONG __fastcall PopBsdFlush(char a1)
{
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = 0LL;
  if ( !PopBsdFlushInactiveEvent.Header.SignalState
    || KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, &Timeout) < 0 )
  {
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( (a1 & 1) != 0 )
    PopWriteBsdPoInfo(7u);
  if ( (a1 & 2) != 0 )
    PopWriteBsdPoInfo(0x10u);
  if ( (a1 & 4) != 0 )
    PopWriteBsdPoInfo(0xEu);
  return KeSetEvent(&PopBsdFlushInactiveEvent, 0, 0);
}
