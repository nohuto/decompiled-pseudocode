void __fastcall sub_14014C69C(__int64 a1, _BYTE *a2)
{
  __int64 *v4; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(PVOID); // [rsp+30h] [rbp-50h] BYREF
  __int16 v11; // [rsp+38h] [rbp-48h]
  PVOID v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall **v15)(PVOID); // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+68h] [rbp-18h]

  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_1400736C0(Pool2, (__int64)L"framework::WolPatternsEventViewerLogger::PostArmWakeFromSxEvent", a1);
      if ( v6 )
        v4 = v6;
    }
  }
  if ( *(_BYTE *)(a1 + 696) )
  {
    v11 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v10 = &off_1400D41D0;
    v14 = 0LL;
    if ( &v10 != (__int64 (__fastcall ***)(PVOID))(a1 + 360) )
      sub_1400011A8(&v10, *(_QWORD *)(a1 + 376), *(_QWORD *)(a1 + 384));
    v7 = sub_14014C218((_QWORD *)a1, (__int64)&v15, a2);
    v8 = *(_QWORD *)(v7 + 24);
    v9 = *(_QWORD *)(v7 + 16);
    if ( v12 )
      sub_140001480(&v10, v9, v8);
    else
      sub_1400011A8(&v10, v9, v8);
    v15 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64 (__fastcall ***)(PVOID)))(**(_QWORD **)(a1 + 680)
                                                                                             + 8LL))(
      *(_QWORD *)(a1 + 680),
      1610874956LL,
      0LL,
      0LL,
      &v10);
    v10 = &off_1400D41D0;
    if ( v12 )
      ExFreePool(v12);
  }
  if ( v4 )
  {
    sub_140073F78(v4);
    ExFreePool(v4);
  }
}
