/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x1408E4350
 * Callers:
 *     <none>
 * Callees:
 *     ExQueryWnfStateData @ 0x14061A450 (ExQueryWnfStateData.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F586C (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopWnfUserAwayPredictionCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v6 = 8;
  v2 = ExQueryWnfStateData(a1, (__int64)&v8, (__int64)&v7, &v6);
  if ( v2 >= 0 )
  {
    if ( v6 >= 8 )
    {
      PopAcquirePolicyLock(v1);
      PopUpdateSmartUserPresencePredictions(v7, 3LL);
      PopReleasePolicyLock(v4, v3);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v2;
}
