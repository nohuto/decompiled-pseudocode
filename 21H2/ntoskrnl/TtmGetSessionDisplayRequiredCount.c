/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x1408FE5FC
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140281CF4 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1408FF5F0 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140902AC4 (TtmiLogError.c)
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
