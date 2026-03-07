__int64 __fastcall sub_14006C3B8(__int64 a1, int a2, int a3, unsigned int a4)
{
  int v8; // eax
  int v9; // r9d
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 *v12; // rbx
  __int64 v14; // [rsp+38h] [rbp-19h] BYREF
  int v15; // [rsp+40h] [rbp-11h]
  __int64 (__fastcall **v16[2])(PVOID); // [rsp+48h] [rbp-9h] BYREF
  PVOID v17; // [rsp+58h] [rbp+7h]
  __int64 v18; // [rsp+60h] [rbp+Fh]
  __int64 v19; // [rsp+68h] [rbp+17h]
  __int64 (__fastcall **v20)(PVOID); // [rsp+70h] [rbp+1Fh] BYREF
  PVOID P; // [rsp+80h] [rbp+2Fh]
  __int64 v22; // [rsp+88h] [rbp+37h]
  __int64 v23; // [rsp+90h] [rbp+3Fh]

  v14 = a4 | 0xA00000000LL;
  v15 = 10;
  sub_1400042F0((__int64)v16, (int *)&v14);
  v8 = sub_14006C1A4((__int64)&v20, (__int64)L"Os Interrupt ", v16);
  LOBYTE(v9) = 1;
  sub_140070F24(a1, v8, a2, v9, 1000);
  v20 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v16[0] = &off_1400D41D0;
  if ( v17 )
    ExFreePool(v17);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)a1 = &off_1400D8DA8;
  v17 = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400D8DD0;
  v18 = 0LL;
  *(_QWORD *)(a1 + 200) = off_1400D8E00;
  *(_QWORD *)(a1 + 352) = off_1400D8E48;
  v19 = 0LL;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A500004CuLL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = &off_1400D41D0;
  *(_WORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 400), (__int64)L"No Owner", 8uLL);
  *(_DWORD *)(a1 + 440) = a3;
  *(_DWORD *)(a1 + 444) = a4;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterrupt::OsInterrupt", a1);
      v12 = v11;
      if ( v11 )
      {
        sub_14005B5AC(v11);
        ExFreePool(v12);
      }
    }
  }
  return a1;
}
