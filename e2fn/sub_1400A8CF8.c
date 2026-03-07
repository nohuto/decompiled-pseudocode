__int64 __fastcall sub_1400A8CF8(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r8
  PVOID v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  PVOID v10; // rcx
  __int64 (__fastcall **v12)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v13; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp-10h]

  if ( *(_QWORD *)(a2 + 24) >= a3 )
  {
    *(_QWORD *)a1 = &off_1400D41D0;
    *(_WORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( a1 != a2 )
      sub_1400011A8((_QWORD *)a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  }
  else
  {
    _mm_lfence();
    v5 = a3 - *(_QWORD *)(a2 + 24);
    v12 = &off_1400D41D0;
    v13 = 0;
    v6 = 0LL;
    v15 = 0LL;
    P = 0LL;
    v16 = 0LL;
    v7 = (__int64)*(&off_1400DF160 + ((v5 - 1) & -(__int64)(v5 - 1 < 0x20)));
    if ( v7 )
    {
      sub_1400011A8(&v12, v7, v5);
      v6 = P;
    }
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_QWORD *)(a2 + 16);
    if ( v6 )
      sub_140001480(&v12, v9, v8);
    else
      sub_1400011A8(&v12, v9, v8);
    *(_QWORD *)a1 = &off_1400D41D0;
    *(_WORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( (__int64 (__fastcall ***)(PVOID))a1 == &v12 )
    {
      v10 = P;
    }
    else
    {
      v10 = 0LL;
      *(_QWORD *)(a1 + 16) = P;
      *(_QWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 32) = v16;
    }
    if ( v10 )
      ExFreePool(v10);
  }
  return a1;
}
