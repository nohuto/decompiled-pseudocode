void __fastcall sub_140009088(int a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  PVOID v8; // rbx
  __int64 v9; // [rsp+48h] [rbp-31h] BYREF
  int v10; // [rsp+50h] [rbp-29h]
  __int64 (__fastcall **v11)(PVOID); // [rsp+58h] [rbp-21h] BYREF
  __int16 v12; // [rsp+60h] [rbp-19h]
  PVOID v13; // [rsp+68h] [rbp-11h]
  __int64 v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  _BYTE v16[16]; // [rsp+80h] [rbp+7h] BYREF
  PVOID P; // [rsp+90h] [rbp+17h]
  unsigned __int64 v18; // [rsp+98h] [rbp+1Fh]

  if ( a5 != -1073741130 )
  {
    v11 = &off_1400D41D0;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    if ( a2 && (sub_1400011A8(&v11, a2, 0x26uLL), v13) )
      sub_140001480(&v11, (__int64)L" Failed with status 0x", 22LL);
    else
      sub_1400011A8(&v11, (__int64)L" Failed with status 0x", 0x16uLL);
    v9 = a5 | 0x1000000000LL;
    v10 = 10;
    sub_1400042F0((__int64)v16, (int *)&v9);
    v8 = P;
    if ( v13 )
      sub_140001480(&v11, (__int64)P, v18);
    else
      sub_1400011A8(&v11, (__int64)P, v18);
    if ( v8 )
      ExFreePool(v8);
    sub_140071A6C(a1, 1, (unsigned int)&v11, 0, a4, a3, a5);
    v11 = &off_1400D41D0;
    if ( v13 )
      ExFreePool(v13);
  }
}
