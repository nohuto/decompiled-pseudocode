void __fastcall sub_140003840(__int64 a1, int a2)
{
  PVOID v3; // rdx
  __int64 (__fastcall **v4)(PVOID); // [rsp+20h] [rbp-38h] BYREF
  __int16 v5; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  if ( !a2 )
  {
    v4 = &off_1400D41D0;
    v5 = 0;
    P = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    sub_1400011A8(&v4, (__int64)qword_1400B6F30, 1uLL);
    v3 = &unk_1400D44E0;
    if ( P )
      v3 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a1 + 8LL))(a1, v3, 2 * v7);
    if ( P )
      ExFreePool(P);
  }
}
