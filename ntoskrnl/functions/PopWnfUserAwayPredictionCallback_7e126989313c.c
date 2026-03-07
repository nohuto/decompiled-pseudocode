__int64 __fastcall PopWnfUserAwayPredictionCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 8;
  v2 = ExQueryWnfStateData(a1, &v9, &v8, &v7);
  if ( v2 >= 0 )
  {
    if ( v7 >= 8 )
    {
      PopAcquirePolicyLock(v1);
      PopUpdateSmartUserPresencePredictions(v8, 3LL);
      PopReleasePolicyLock(v4, v3, v5);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v2;
}
