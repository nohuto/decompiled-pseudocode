__int64 __fastcall sub_1401183F4(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 (__fastcall **v6)(PVOID); // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::EvtDeviceReleaseHardware", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v7 = 0;
  v6 = &off_1400D41D0;
  P = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  sub_1400011A8(&v6, (__int64)L"Release Hardware", 0x10uLL);
  sub_14006FED0(*(_QWORD *)(a1 + 504), (__int64)&v6);
  v6 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 136LL))(*(_QWORD *)(a1 + 424));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 96LL))(*(_QWORD *)(a1 + 392));
  if ( v2 )
  {
    sub_14007404C(v2);
    ExFreePool(v2);
  }
  return 0LL;
}
