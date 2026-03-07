__int64 __fastcall sub_140052E8C(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 Pool2; // rax
  __int64 v15; // r15
  __int64 v16; // r8
  void *v17; // rcx
  __int64 v18; // rax
  unsigned __int64 i; // rcx
  __int16 v20; // dx
  __int64 (__fastcall **v22)(PVOID); // [rsp+20h] [rbp-48h] BYREF
  __int16 v23; // [rsp+28h] [rbp-40h]
  _WORD *v24; // [rsp+30h] [rbp-38h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h]

  *(_QWORD *)a1 = &off_1400D41D0;
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a1 != a2 )
    sub_1400011A8((_QWORD *)a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  v22 = &off_1400D41D0;
  v5 = 0LL;
  v23 = 0;
  v6 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( a3 )
  {
    sub_1400011A8(&v22, a3, 0xCuLL);
    v6 = v25;
    v5 = v24;
  }
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
  {
    if ( !v5 )
      return a1;
    if ( v6 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      if ( !(unsigned int)sub_140001070((_QWORD *)a1, v6, 0LL) )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        for ( i = 0LL; i < v6; *(_QWORD *)(a1 + 24) = i )
        {
          v20 = v5[i];
          if ( !v20 )
            break;
          *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * i) = v20;
          i = *(_QWORD *)(a1 + 24) + 1LL;
        }
        *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v6) = 0;
      }
    }
    goto LABEL_35;
  }
  if ( v6 )
  {
    if ( !v5 )
      return a1;
    v8 = *(_QWORD *)(a1 + 24);
    v9 = v8 + v6;
    v10 = 2 * (v8 + v6);
    if ( *(_QWORD *)(a1 + 32) > v8 + v6 )
    {
      sub_1400B6980(v7 + 2 * v8, v5, 2 * v6);
LABEL_25:
      v18 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 24) = v9;
      *(_WORD *)(v18 + v10) = 0;
      goto LABEL_35;
    }
    _mm_lfence();
    v11 = *(_QWORD *)(a1 + 32);
    v12 = v11;
    if ( v11 <= v10 )
      v12 = v10;
    if ( v12 <= 0x40 )
    {
      v11 = 64LL;
    }
    else if ( v11 <= v10 )
    {
      v11 = v10;
    }
    v13 = 2 * v11;
    if ( !is_mul_ok(v11, 2uLL) )
      v13 = -1LL;
    Pool2 = ExAllocatePool2(64LL, v13, 1802728562LL);
    v15 = Pool2;
    if ( Pool2 )
    {
      v16 = *(_QWORD *)(a1 + 24);
      if ( v16 )
        sub_1400B6980(Pool2, *(_QWORD *)(a1 + 16), 2 * v16);
      v5 = v24;
      sub_1400B6980(v15 + 2LL * *(_QWORD *)(a1 + 24), v24, 2 * v25);
      v17 = *(void **)(a1 + 16);
      if ( v17 )
        ExFreePool(v17);
      *(_QWORD *)(a1 + 16) = v15;
      *(_QWORD *)(a1 + 32) = v11;
      goto LABEL_25;
    }
    v5 = v24;
  }
LABEL_35:
  if ( v5 )
    ExFreePool(v5);
  return a1;
}
