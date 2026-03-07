__int64 __fastcall sub_14008BD60(__int64 a1, char a2)
{
  __int64 (__fastcall ***v3)(PVOID); // rcx
  char v4; // bl
  __int64 (__fastcall **v6)(PVOID); // [rsp+20h] [rbp-50h] BYREF
  __int16 v7; // [rsp+28h] [rbp-48h]
  PVOID P; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall **v11)(PVOID); // [rsp+48h] [rbp-28h] BYREF
  __int16 v12; // [rsp+50h] [rbp-20h]
  PVOID v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+68h] [rbp-8h]

  if ( a2 )
  {
    v11 = &off_1400D41D0;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    sub_1400011A8(&v11, (__int64)L"TRUE", 4uLL);
    v3 = &v11;
    v4 = 1;
  }
  else
  {
    v6 = &off_1400D41D0;
    v7 = 0;
    P = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    sub_1400011A8(&v6, (__int64)L"FALSE", 5uLL);
    v3 = &v6;
    v4 = 2;
  }
  *(_QWORD *)a1 = &off_1400D41D0;
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (__int64 (__fastcall ***)(PVOID))a1 != v3 )
  {
    *(_QWORD *)(a1 + 16) = v3[2];
    *(_QWORD *)(a1 + 24) = v3[3];
    *(_QWORD *)(a1 + 32) = v3[4];
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
  }
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( P )
      ExFreePool(P);
  }
  if ( (v4 & 1) != 0 && v13 )
    ExFreePool(v13);
  return a1;
}
