__int64 __fastcall ACPIDockIntfUpdateDeparture(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = 0;
  v3 = DeviceExtension;
  v6 = 0LL;
  if ( *(char *)(DeviceExtension + 8) < 0 )
    return 3221225486LL;
  if ( *(_DWORD *)(DeviceExtension + 192) != 3 )
    return 3221225488LL;
  v5 = *(_QWORD *)(DeviceExtension + 184);
  if ( *(_DWORD *)(DeviceExtension + 200) != 1 )
  {
    KdDisableDebugger();
    v2 = ACPIGet(v5, 0x4B43445Fu, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v6, 0LL);
    KdEnableDebugger();
    *(_DWORD *)(v3 + 200) = 1;
  }
  return v2;
}
