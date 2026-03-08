/*
 * XREFs of KdpSuspendAllBreakpoints @ 0x140AB2D04
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x140565128 (KdDisableDebuggerWithLock.c)
 * Callees:
 *     KdpLowWriteContent @ 0x140AB29EC (KdpLowWriteContent.c)
 */

char KdpSuspendAllBreakpoints()
{
  unsigned int i; // ebx
  __int64 v1; // rcx
  char result; // al

  for ( i = 1; i <= 0x20; ++i )
  {
    v1 = i - 1;
    result = *((_DWORD *)&unk_140C49560 + 10 * v1) & 5;
    if ( result == 1 )
    {
      *((_DWORD *)&unk_140C49560 + 10 * v1) |= 4u;
      result = KdpLowWriteContent(v1);
    }
  }
  return result;
}
