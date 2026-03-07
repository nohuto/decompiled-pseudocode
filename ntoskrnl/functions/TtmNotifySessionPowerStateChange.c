void __fastcall TtmNotifySessionPowerStateChange(unsigned int a1, char a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = TtmpAcquireSessionById(&v8, a1);
  if ( v3 < 0 )
  {
    TtmiLogError("TtmNotifySessionPowerStateChange", 3211LL, (unsigned int)v3, 0xFFFFFFFFLL);
    return;
  }
  LOBYTE(v4) = a2;
  TtmiLogSessionPowerStateChange(v4);
  v5 = v8;
  v6 = *(_DWORD *)(v8 + 4);
  if ( a2 )
  {
    if ( (v6 & 0x80u) != 0 )
    {
      v7 = v6 & 0xFFFFFB7F;
      goto LABEL_8;
    }
  }
  else if ( (v6 & 0x40) != 0 )
  {
    v7 = v6 & 0xFFFFFBBF | 0x400;
LABEL_8:
    *(_DWORD *)(v8 + 4) = v7;
    TtmiScheduleSessionWorker(v5, 4LL);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
}
