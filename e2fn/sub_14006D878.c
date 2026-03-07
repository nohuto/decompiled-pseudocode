__int64 __fastcall sub_14006D878(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 (__fastcall **v8)(PVOID); // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  *(_QWORD *)a1 = &off_1400D8F10;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0xA5A5A5A5A50000AEuLL;
  v3 = (_QWORD *)(a1 + 16);
  v5 = (_QWORD *)(a2 + 376);
  v3[2] = 0LL;
  *v3 = &off_1400D41D0;
  v3[3] = 0LL;
  v3[4] = 0LL;
  if ( v3 != v5 )
    sub_1400011A8(v3, v5[2], v5[3]);
  v8 = &off_1400D41D0;
  v9 = 0;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  sub_1400011A8(&v8, (__int64)qword_1400B7580, 1uLL);
  sub_1400015A8((_QWORD *)(a1 + 56), (__int64)&v8);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 56) + 8LL))(a2 + 56);
  *(_QWORD *)(a1 + 96) = &off_1400D41D0;
  *(_WORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( a1 + 96 != v6 )
    sub_1400011A8((_QWORD *)(a1 + 96), *(_QWORD *)(v6 + 16), *(_QWORD *)(v6 + 24));
  return a1;
}
