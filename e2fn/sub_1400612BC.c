__int64 __fastcall sub_1400612BC(__int64 a1, int a2, __int64 (__fastcall ***a3)(PVOID P), __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *Pool2; // rax
  __int64 *v16; // rax
  __int64 *v17; // rbx
  _QWORD v19[2]; // [rsp+38h] [rbp-61h] BYREF
  PVOID P; // [rsp+48h] [rbp-51h]
  __int64 v21; // [rsp+50h] [rbp-49h]
  __int64 v22; // [rsp+58h] [rbp-41h]
  _QWORD v23[2]; // [rsp+60h] [rbp-39h] BYREF
  PVOID v24; // [rsp+70h] [rbp-29h]
  __int64 v25; // [rsp+78h] [rbp-21h]
  __int64 v26; // [rsp+80h] [rbp-19h]
  __int64 (__fastcall **v27)(PVOID); // [rsp+88h] [rbp-11h] BYREF
  PVOID v28; // [rsp+98h] [rbp-1h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  __int64 v30; // [rsp+A8h] [rbp+Fh]
  __int64 (__fastcall **v31)(PVOID); // [rsp+B0h] [rbp+17h] BYREF
  PVOID v32; // [rsp+C0h] [rbp+27h]

  v9 = sub_14002D2AC((__int64)v23, a4, (__int64)qword_1400B7220);
  v10 = sub_140053644((__int64)v19, v9, a5);
  sub_140070F24(a1, v10, a2, 0, 1000);
  v19[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23[0] = &off_1400D41D0;
  if ( v24 )
    ExFreePool(v24);
  v24 = 0LL;
  *(_QWORD *)a1 = &off_1400D80D0;
  v25 = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400D80F8;
  v26 = 0LL;
  *(_QWORD *)(a1 + 200) = off_1400D8128;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 352) = 0xA5A5A5A5A5000081uLL;
  sub_140060B78(a1 + 368, (__int64)L"\\DosDevices\\", a3);
  *(_QWORD *)(a1 + 408) = &off_1400D41D0;
  *(_WORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  if ( a1 + 408 != a4 )
    sub_1400011A8((_QWORD *)(a1 + 408), *(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24));
  *(_QWORD *)(a1 + 448) = &off_1400D41D0;
  *(_WORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  if ( a1 + 448 != a5 )
    sub_1400011A8((_QWORD *)(a1 + 448), *(_QWORD *)(a5 + 16), *(_QWORD *)(a5 + 24));
  v11 = sub_140060B78((__int64)&v31, (__int64)L"\\DosDevices\\", a3);
  v12 = sub_14002D2AC((__int64)&v27, v11, (__int64)qword_1400C8520);
  v13 = sub_140053644((__int64)v19, v12, a4);
  v14 = sub_14002D2AC((__int64)v23, v13, (__int64)qword_1400B7220);
  sub_140053644(a1 + 488, v14, a5);
  v23[0] = &off_1400D41D0;
  if ( v24 )
    ExFreePool(v24);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v19[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v27 = &off_1400D41D0;
  if ( v28 )
    ExFreePool(v28);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = &off_1400D41D0;
  if ( v32 )
    ExFreePool(v32);
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v16 = sub_14005A6E0(Pool2, (__int64)L"os_services::FileAccessor::FileAccessor", a1);
      v17 = v16;
      if ( v16 )
      {
        sub_14005A99C(v16);
        ExFreePool(v17);
      }
    }
  }
  return a1;
}
