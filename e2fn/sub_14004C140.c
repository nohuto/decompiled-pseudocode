__int64 __fastcall sub_14004C140(__int64 a1, int a2, unsigned int a3, char a4)
{
  __int64 v8; // rax
  int v9; // eax
  int v10; // r9d
  __int64 *v11; // rbx
  _QWORD *Pool2; // rax
  __int64 *v13; // rax
  __int64 v15; // [rsp+38h] [rbp-49h] BYREF
  int v16; // [rsp+40h] [rbp-41h]
  __int64 (__fastcall **v17[2])(PVOID); // [rsp+48h] [rbp-39h] BYREF
  PVOID v18; // [rsp+58h] [rbp-29h]
  __int64 v19; // [rsp+60h] [rbp-21h]
  __int64 v20; // [rsp+68h] [rbp-19h]
  __int64 (__fastcall **v21)(PVOID); // [rsp+70h] [rbp-11h] BYREF
  PVOID P; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  __int64 (__fastcall **v25)(PVOID); // [rsp+98h] [rbp+17h] BYREF
  PVOID v26; // [rsp+A8h] [rbp+27h]
  __int64 v27; // [rsp+B0h] [rbp+2Fh]
  __int64 v28; // [rsp+B8h] [rbp+37h]

  v15 = a3 | 0xA00000000LL;
  v16 = 10;
  sub_1400042F0((__int64)v17, (int *)&v15);
  v8 = sub_14004B860((__int64)&v25, (__int64)L"MSIX ", v17);
  v9 = sub_14004BC88((__int64)&v21, v8, (__int64)L" interrupt dispatcher ");
  LOBYTE(v10) = 1;
  sub_140070F24(a1, v9, a2, v10, 1000);
  v21 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = &off_1400D41D0;
  if ( v26 )
    ExFreePool(v26);
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v17[0] = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)a1 = &off_1400D7450;
  v11 = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400D7478;
  *(_QWORD *)(a1 + 200) = off_1400D74A8;
  *(_QWORD *)(a1 + 352) = off_1400D74F0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A50000BCuLL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_DWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_DWORD *)(a1 + 416) = a3;
  *(_BYTE *)(a1 + 420) = a4;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_BYTE *)(a1 + 504) = 1;
  *(_DWORD *)(a1 + 508) = 0;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v13 = sub_14000BBDC(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnMsixInterruptDispatcher::ProductE2fnMsixInterruptDispatcher",
              a1);
      if ( v13 )
        v11 = v13;
    }
  }
  *(_DWORD *)(a1 + 424) |= 1 << a3;
  if ( v11 )
  {
    sub_14000BFA4(v11);
    ExFreePool(v11);
  }
  return a1;
}
