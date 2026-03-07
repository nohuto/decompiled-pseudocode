__int64 __fastcall CUserPlaySound::Connect(CUserPlaySound *this, void *a2)
{
  RPC_BINDING_HANDLE *v2; // rsi
  unsigned int *v4; // rax
  int v5; // edi
  RPC_BINDING_HANDLE v6; // rdx
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  v2 = CUserPlaySound::s_pUserPlaySound;
  Binding = 0LL;
  v4 = (unsigned int *)SGDGetUserSessionState(this);
  v5 = PlaySoundConnect(*v4, a2, &Binding);
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2 + 1, 0LL);
    if ( !*v2 )
    {
      v6 = Binding;
      Binding = 0LL;
      *v2 = v6;
    }
    if ( v2 != (RPC_BINDING_HANDLE *)-8LL )
    {
      ExReleasePushLockExclusiveEx(v2 + 1, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( Binding )
  {
    PlaySoundDisconnect(&Binding);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
