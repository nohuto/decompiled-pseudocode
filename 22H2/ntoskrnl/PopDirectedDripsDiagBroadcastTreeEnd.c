/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeEnd @ 0x14099DEDC
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x14099FE48 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall PopDirectedDripsDiagBroadcastTreeEnd(__int64 a1, int a2, int a3, char a4)
{
  int v8; // ebx
  signed __int32 result; // eax

  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    if ( a2 < 0
      || (v8 = *(_DWORD *)(a1 + 40) ^ (*(_DWORD *)(a1 + 40) ^ (16 * a3)) & 0xF0, *(_DWORD *)(a1 + 40) = v8, a4) )
    {
      *(_DWORD *)(a1 + 40) |= 0x100u;
    }
    else
    {
      *(_DWORD *)(a1 + 40) = v8 & 0xFFFFFEFF;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
