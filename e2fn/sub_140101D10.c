void __fastcall sub_140101D10(__int64 a1)
{
  __int64 *v2; // rbp
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 (__fastcall **v8)(PVOID); // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::EvtD0Exit", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v9 = 0;
  v8 = &off_1400D41D0;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  sub_1400011A8(&v8, (__int64)L"D0 exit", 7uLL);
  sub_14006FED0(*(_QWORD *)(a1 + 416), (__int64)&v8);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  sub_1400FE8CC(a1);
  sub_1400FF438((_QWORD *)a1);
  if ( (unsigned __int8)sub_140102014(a1) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 448) + 104LL))(*(_QWORD *)(a1 + 448));
  v5 = *(__int64 **)(a1 + 480);
  v6 = *v5;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 56) + 8LL))(a1 + 56);
  (*(void (__fastcall **)(__int64 *, __int64))(v6 + 8))(v5, v7);
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
