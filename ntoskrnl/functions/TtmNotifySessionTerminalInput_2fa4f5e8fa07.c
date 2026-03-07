void __fastcall TtmNotifySessionTerminalInput(unsigned int a1, int a2, char a3)
{
  int v5; // eax
  __int64 *i; // rdx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v5 = TtmpAcquireSessionById(&v7, a1);
  if ( v5 >= 0 )
  {
    for ( i = *(__int64 **)(v7 + 40); i != (__int64 *)(v7 + 40); i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 7) == a2 )
      {
        TtmiResetTerminalTimeouts(v7, (_DWORD)i, 4, 1950962771, a3);
        break;
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifySessionTerminalInput", 4213LL, (unsigned int)v5, 0xFFFFFFFFLL);
  }
}
