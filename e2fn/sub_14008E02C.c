void __fastcall sub_14008E02C(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 (__fastcall **v7)(PVOID); // [rsp+40h] [rbp-30h] BYREF
  __int16 v8; // [rsp+48h] [rbp-28h]
  PVOID P; // [rsp+50h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp-10h]

  v7 = &off_1400D41D0;
  v8 = 0;
  P = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 && (sub_1400011A8(&v7, a2, 0x17uLL), P) )
    sub_140001480(&v7, (__int64)L" is null", 8LL);
  else
    sub_1400011A8(&v7, (__int64)L" is null", 8uLL);
  sub_140071A6C(a1, 1u, (__int64)&v7, 0, a4, a3, -1073741823);
  v7 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
}
