void PopPowerRequestNotifyTtmSessionInitialized()
{
  PVOID *i; // rbx
  int v1; // r8d
  PVOID v2; // r9
  int v3; // [rsp+28h] [rbp-20h]

  PopAcquirePowerRequestPushLock(1);
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    v1 = *((_DWORD *)i + 26);
    if ( v1 )
    {
      v2 = i[14];
      if ( v2 )
        TtmNotifySessionPowerRequestPresent(
          *((_DWORD *)i + 4),
          *((_DWORD *)i + 9),
          v1,
          (_DWORD)v2,
          (__int64)i[15],
          v3,
          0);
    }
  }
  PopPowerRequestUnrevokeRequests(1);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
