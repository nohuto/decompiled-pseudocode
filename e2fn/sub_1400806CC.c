_QWORD *__fastcall sub_1400806CC(_QWORD *a1, _QWORD *a2)
{
  __int64 (__fastcall ***v4)(PVOID); // rax
  __int64 v5; // rax
  __int64 (__fastcall **v7)(PVOID); // [rsp+28h] [rbp-29h] BYREF
  __int16 v8; // [rsp+30h] [rbp-21h]
  PVOID v9; // [rsp+38h] [rbp-19h]
  __int64 v10; // [rsp+40h] [rbp-11h]
  __int64 v11; // [rsp+48h] [rbp-9h]
  __int64 (__fastcall **v12)(PVOID); // [rsp+50h] [rbp-1h] BYREF
  PVOID P; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  __int64 (__fastcall **v16)(PVOID); // [rsp+78h] [rbp+27h] BYREF
  PVOID v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]
  __int64 v19; // [rsp+98h] [rbp+47h]

  *a1 = &off_1400D98C8;
  v7 = &off_1400D41D0;
  a1[1] = 0xA5A5A5A5A50000B7uLL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  sub_1400011A8(&v7, (__int64)qword_1400B7580, 1uLL);
  v4 = (__int64 (__fastcall ***)(PVOID))sub_1400015A8(&v16, (__int64)&v7);
  v5 = sub_140060B78((__int64)&v12, (__int64)L"Time stamp: ", v4);
  sub_14002D2AC((__int64)(a1 + 2), v5, (__int64)qword_1400B6F30);
  v12 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = &off_1400D41D0;
  if ( v17 )
    ExFreePool(v17);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v7 = &off_1400D41D0;
  if ( v9 )
    ExFreePool(v9);
  sub_14008058C(a1 + 7, a2);
  return a1;
}
