void PopPowerRequestNotificationsBegin()
{
  PVOID *v0; // rbx
  int v1; // edi
  _BYTE *v2; // rsi
  int v3; // eax
  _DWORD Src[20]; // [rsp+20h] [rbp-58h] BYREF

  PopAcquirePowerRequestPushLock(1);
  v0 = (PVOID *)PopPowerRequestObjectList;
  PopPowerRequestNotificationsEnabled = 1;
  while ( v0 != &PopPowerRequestObjectList )
  {
    if ( *((_DWORD *)v0 + 26) )
    {
      PopUmpoSendPowerRequestCreate(*((unsigned int *)v0 + 9));
      v1 = 0;
      v2 = (char *)v0 + 153;
      do
      {
        if ( *v2 )
        {
          memset(Src, 0, 0x48uLL);
          v3 = *((_DWORD *)v0 + 9);
          Src[0] = 16;
          Src[2] = v3;
          Src[3] = v1;
          LOBYTE(Src[4]) = 1;
          PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
        }
        ++v1;
        ++v2;
      }
      while ( v1 < 6 );
    }
    v0 = (PVOID *)*v0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
