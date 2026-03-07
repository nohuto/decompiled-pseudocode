char __fastcall PopCheckBatteryWake(__int64 a1)
{
  char result; // al
  __int64 *v2; // r8
  __int64 *i; // rcx
  __int64 v4; // rdx

  result = 0;
  if ( a1 && *(_DWORD *)(a1 + 40) )
  {
    v2 = (__int64 *)(a1 + 24);
    for ( i = *(__int64 **)(a1 + 24); i != v2; i = (__int64 *)*i )
    {
      if ( !*((_DWORD *)i + 4) )
      {
        v4 = *(__int64 *)((char *)i + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
        if ( !v4 )
          v4 = *(__int64 *)((char *)i + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
        if ( !v4 )
          return 1;
      }
    }
  }
  return result;
}
