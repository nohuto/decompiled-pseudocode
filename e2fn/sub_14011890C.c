void __fastcall sub_14011890C(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 (__fastcall **v5)(PVOID); // [rsp+30h] [rbp-38h] BYREF
  __int16 v6; // [rsp+38h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::EvtSurpriseRemoval", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 120LL))(*(_QWORD *)(a1 + 392));
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 472) + 352LL) + 8LL))(
    *(_QWORD *)(a1 + 472) + 352LL,
    1610874936LL,
    0LL,
    0LL,
    0LL);
  v6 = 0;
  v5 = &off_1400D41D0;
  P = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  sub_1400011A8(&v5, (__int64)L"Query remove", 0xCuLL);
  sub_14006FED0(*(_QWORD *)(a1 + 504), (__int64)&v5);
  v5 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  sub_140074848(a1);
  if ( v2 )
  {
    sub_14007404C(v2);
    ExFreePool(v2);
  }
}
