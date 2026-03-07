char __fastcall ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 **v5; // rsi
  __int64 **i; // rbx

  v2 = 48LL;
  v3 = 160LL;
  if ( a2 != 1 )
    v2 = 24LL;
  v4 = a1 + v2;
  if ( a2 != 1 )
    v3 = 144LL;
  v5 = (__int64 **)(a1 + v3);
  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
  {
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    for ( i = (__int64 **)*v5; i != v5 && i; i = (__int64 **)*i )
    {
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)i[17], 0)
        || !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(i + 18, 0LL) )
      {
        return 0;
      }
      i[19] = (__int64 *)KeGetCurrentThread();
    }
    return 1;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 0;
  }
}
