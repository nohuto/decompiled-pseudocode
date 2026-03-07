__int64 __fastcall ACPICMLidSetPower(ULONG_PTR a1, __int64 a2)
{
  int DeviceExtension; // eax
  __int64 v5; // r8
  _DWORD *v6; // r8
  unsigned int v7; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(v5 + 3) |= 1u;
  v6 = (_DWORD *)(v5 + 16);
  if ( *v6 == 1 )
  {
    ACPIDockIrpSetDevicePower(a1, a2);
  }
  else
  {
    v7 = ACPIGet(
           DeviceExtension,
           1145654367,
           537133058,
           0,
           0,
           (__int64)ACPICMLidSetPowerCompletion,
           a2,
           (__int64)v6,
           0LL);
    if ( v7 != 259 )
      ACPICMLidSetPowerCompletion(0LL, v7, 0LL, a2);
  }
  return 259LL;
}
