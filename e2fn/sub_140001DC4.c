__int64 __fastcall sub_140001DC4(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 Pool2; // rax
  __int64 v13; // r15
  __int64 v14; // r8
  void *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 i; // rcx
  char v18; // dl
  __int64 (__fastcall **v20)(PVOID); // [rsp+20h] [rbp-48h] BYREF
  char v21; // [rsp+28h] [rbp-40h]
  _BYTE *v22; // [rsp+30h] [rbp-38h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+40h] [rbp-28h]

  *(_QWORD *)a1 = &off_1400D41D0;
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a1 != a2 )
    sub_1400010F4((_QWORD *)a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  v20 = &off_1400D41D0;
  v5 = 0LL;
  v21 = 0;
  v6 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( a3 )
  {
    sub_1400010F4(&v20, a3, 5uLL);
    v6 = v23;
    v5 = v22;
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
      if ( !(unsigned int)sub_140001000((_QWORD *)a1, v6, 0LL) )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        for ( i = 0LL; i < v6; *(_QWORD *)(a1 + 24) = i )
        {
          v18 = v5[i];
          if ( !v18 )
            break;
          *(_BYTE *)(*(_QWORD *)(a1 + 16) + i) = v18;
          i = *(_QWORD *)(a1 + 24) + 1LL;
        }
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + v6) = 0;
      }
    }
    goto LABEL_33;
  }
  if ( v6 )
  {
    if ( !v5 )
      return a1;
    v8 = *(_QWORD *)(a1 + 24);
    v9 = v8 + v6;
    if ( *(_QWORD *)(a1 + 32) > v8 + v6 )
    {
      sub_1400B6980(v7 + v8, v5, v6);
LABEL_23:
      v16 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 24) = v9;
      *(_BYTE *)(v16 + v9) = 0;
      goto LABEL_33;
    }
    _mm_lfence();
    v10 = *(_QWORD *)(a1 + 32);
    v11 = v10;
    if ( v10 <= 2 * v9 )
      v11 = 2 * v9;
    if ( v11 <= 0x40 )
    {
      v10 = 64LL;
    }
    else if ( v10 <= 2 * v9 )
    {
      v10 = 2 * v9;
    }
    Pool2 = ExAllocatePool2(64LL, v10, 1802728562LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      v14 = *(_QWORD *)(a1 + 24);
      if ( v14 )
        sub_1400B6980(Pool2, *(_QWORD *)(a1 + 16), v14);
      v5 = v22;
      sub_1400B6980(v13 + *(_QWORD *)(a1 + 24), v22, v23);
      v15 = *(void **)(a1 + 16);
      if ( v15 )
        ExFreePool(v15);
      *(_QWORD *)(a1 + 16) = v13;
      *(_QWORD *)(a1 + 32) = v10;
      goto LABEL_23;
    }
    v5 = v22;
  }
LABEL_33:
  if ( v5 )
    ExFreePool(v5);
  return a1;
}
