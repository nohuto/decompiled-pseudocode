__int64 __fastcall sub_14007CA14(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *Pool2; // rax
  __int64 *v13; // rax
  __int64 *v14; // rbx
  __int64 v16; // [rsp+38h] [rbp-49h] BYREF
  int v17; // [rsp+40h] [rbp-41h]
  _QWORD v18[2]; // [rsp+48h] [rbp-39h] BYREF
  PVOID v19; // [rsp+58h] [rbp-29h]
  __int64 v20; // [rsp+60h] [rbp-21h]
  __int64 v21; // [rsp+68h] [rbp-19h]
  __int64 (__fastcall **v22)(PVOID); // [rsp+70h] [rbp-11h] BYREF
  PVOID P; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+Fh]
  __int64 (__fastcall **v26)(PVOID); // [rsp+98h] [rbp+17h] BYREF
  PVOID v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+B0h] [rbp+2Fh]
  __int64 v29; // [rsp+B8h] [rbp+37h]

  v16 = a4 | 0x1000000000LL;
  v17 = 10;
  sub_1400042F0((__int64)v18, (int *)&v16);
  v10 = sub_14007C7F8((__int64)&v26, a2, (__int64)L" 0x");
  v11 = sub_140053644((__int64)&v22, v10, (__int64)v18);
  sub_140070F24(a1, v11, a3, a5, a6);
  v22 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = &off_1400D41D0;
  if ( v27 )
    ExFreePool(v27);
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v18[0] = &off_1400D41D0;
  if ( v19 )
    ExFreePool(v19);
  *(_DWORD *)(a1 + 360) = a4;
  *(_QWORD *)a1 = &off_1400D66D8;
  *(_QWORD *)(a1 + 56) = off_1400D6700;
  *(_QWORD *)(a1 + 200) = off_1400D6730;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *(_QWORD *)(a1 + 352) = 0xA5A5A5A5A500007FuLL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v13 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::RegisterWrapper::RegisterWrapper", a1);
      v14 = v13;
      if ( v13 )
      {
        sub_14000BFA4(v13);
        ExFreePool(v14);
      }
    }
  }
  return a1;
}
