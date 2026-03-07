_QWORD *__fastcall sub_14008CB30(_QWORD *a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 (__fastcall **v8)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v9; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]

  v8 = &off_1400D41D0;
  v9 = 0;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  sub_1400011A8(&v8, (__int64)L"Net adapter hardware configurator", 0x21uLL);
  sub_140070808(a1, (__int64)&v8, a2);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D9370;
  a1[7] = off_1400D9380;
  v11 = 0LL;
  v12 = 0LL;
  a1[25] = 0xA5A5A5A5A50000C2uLL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterHardwareConfigurationFactory::NetAdapterHardwareConfigurationFactory",
             (__int64)a1);
      v6 = v5;
      if ( v5 )
      {
        sub_140075108(v5);
        ExFreePool(v6);
      }
    }
  }
  return a1;
}
