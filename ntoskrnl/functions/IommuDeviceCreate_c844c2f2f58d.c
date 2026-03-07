__int64 __fastcall IommuDeviceCreate(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rdx
  int Device; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  void *Src; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  Src = 0LL;
  v11 = 0LL;
  Device = IommupCreateDeviceId(a1, a2, &Src, a4);
  if ( Device >= 0 )
  {
    Device = HalpIommuCreateDevice(Src, (__int64)&v11);
    if ( Device >= 0 )
    {
      *a3 = v11;
      return (unsigned int)Device;
    }
    if ( v11 )
      HalpIommuDeleteDevice(v11);
  }
  if ( Src )
    HalpIommuFreeDeviceId((__int64)Src, v5, v7, v8);
  return (unsigned int)Device;
}
