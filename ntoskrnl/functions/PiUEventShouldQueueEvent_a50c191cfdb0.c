bool __fastcall PiUEventShouldQueueEvent(__int64 a1)
{
  char v1; // dl
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  bool v8; // zf

  v1 = 1;
  if ( !PiUEventBroadcastSubscriberPresent )
  {
    v3 = *(_DWORD *)(a1 + 128) - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
        v8 = PiUEventDevInterfaceClientCount == 0;
        return !v8;
      }
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 5;
          if ( !v7 )
          {
            v8 = PiUEventDevInstancePropertyClientCount == 0;
            return !v8;
          }
          if ( (unsigned int)(v7 - 1) > 1 )
            return v1;
        }
        v8 = PiUEventDevInstanceClientCount == 0;
        return !v8;
      }
    }
    v8 = PiUEventDevHandleClientCount == 0;
    return !v8;
  }
  return v1;
}
