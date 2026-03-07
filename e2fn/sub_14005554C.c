__int64 __fastcall sub_14005554C(__int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  __int64 v8; // rax
  int v9; // eax
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 (__fastcall **v15)(PVOID); // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a3 + 24LL))(*a3, a4);
  v9 = sub_140018EB4((__int64)&v15, v8, (__int64)L" interrupt control");
  sub_140070F24(a1, v9, a2, 0, 1000);
  v15 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)a1 = &off_1400D77D8;
  *(_QWORD *)(a1 + 56) = off_1400D7800;
  *(_QWORD *)(a1 + 200) = off_1400D7830;
  *(_QWORD *)(a1 + 352) = off_1400D7878;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A5000028uLL;
  sub_1400A27D4(a1 + 368, a3);
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_DWORD *)(a1 + 416) = a4;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnOtherInterruptControl::ProductE2fnOtherInterruptControl",
              a1);
      v12 = v11;
      if ( v11 )
      {
        sub_14000BFA4(v11);
        ExFreePool(v12);
      }
    }
  }
  v13 = (volatile signed __int32 *)a3[1];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return a1;
}
