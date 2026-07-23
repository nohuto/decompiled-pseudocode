/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x1408FE75C
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x14026FF34 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1408FF750 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 */

__int64 __fastcall TtmGetSessionDisplayRequiredCount(unsigned int a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0LL;
  v2 = TtmpAcquireSessionById(&v4, a1);
  if ( v2 < 0 )
  {
    TtmiLogError("TtmGetSessionDisplayRequiredCount", 4015LL, (unsigned int)v2, 0xFFFFFFFFLL);
  }
  else
  {
    v1 = *(_DWORD *)(v4 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v1;
}
