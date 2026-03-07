__int64 __fastcall ACPIDockIntfSetMode(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rdx
  int v5; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(char *)(DeviceExtension + 8) < 0 )
    return 3221225486LL;
  v5 = 4;
  if ( a2 != 1 )
    v5 = a2;
  *(_DWORD *)(DeviceExtension + 192) = v5;
  return 0LL;
}
