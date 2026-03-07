char __fastcall PopCheckAttendedWake(__int64 a1)
{
  char result; // al
  __int64 *v2; // r8
  __int64 *i; // rcx
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rdx

  result = 0;
  if ( !a1 || !*(_DWORD *)(a1 + 40) )
    return 1;
  v2 = (__int64 *)(a1 + 24);
  for ( i = *(__int64 **)(a1 + 24); i != v2; i = (__int64 *)*i )
  {
    v4 = *((_DWORD *)i + 4);
    if ( v4 == 1 )
      return 1;
    if ( !v4 )
    {
      v5 = *(__int64 *)((char *)i + 76) - *(_QWORD *)&GUID_NETWORK_ADAPTER_CLASS.Data1;
      if ( !v5 )
        v5 = *(__int64 *)((char *)i + 84) - *(_QWORD *)GUID_NETWORK_ADAPTER_CLASS.Data4;
      if ( v5 )
      {
        v6 = *(__int64 *)((char *)i + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
        if ( !v6 )
          v6 = *(__int64 *)((char *)i + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
        if ( v6 )
          return 1;
      }
    }
  }
  return result;
}
