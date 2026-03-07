void __fastcall sub_14009F3E8(__int64 a1, __int64 a2, __int64 (__fastcall ***a3)(PVOID P))
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 (__fastcall **v10)(PVOID); // rcx
  __int64 (__fastcall **v11)(PVOID); // [rsp+20h] [rbp-48h] BYREF
  __int16 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h]

  sub_1400A0204(a2, a1);
  v6 = *(_QWORD *)(a1 + 272);
  v7 = a1 + 240;
  v8 = *(_QWORD *)(a1 + 248);
  v9 = v8;
  if ( v6 )
    v9 = v7;
  while ( v8 != v9 )
  {
    v11 = &off_1400D41D0;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    if ( &v11 != a3 )
      sub_1400011A8(&v11, (__int64)a3[2], (unsigned __int64)a3[3]);
    sub_14009F3E8(*(_QWORD *)(v8 + 16), a2, &v11);
    v8 = *(_QWORD *)(v8 + 8);
  }
  v10 = a3[2];
  *a3 = &off_1400D41D0;
  if ( v10 )
    ExFreePool(v10);
  a3[2] = 0LL;
  a3[3] = 0LL;
  a3[4] = 0LL;
}
