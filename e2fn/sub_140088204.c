__int64 __fastcall sub_140088204(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  _WORD *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  PVOID v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 Pool2; // rax
  __int64 v16; // r12
  __int64 v17; // r8
  void *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 i; // rcx
  __int16 v21; // dx
  PVOID v22; // rdi
  __int16 v24; // [rsp+20h] [rbp-49h] BYREF
  char v25; // [rsp+22h] [rbp-47h]
  __int64 (__fastcall **v26)(PVOID); // [rsp+30h] [rbp-39h] BYREF
  __int16 v27; // [rsp+38h] [rbp-31h]
  PVOID v28; // [rsp+40h] [rbp-29h]
  unsigned __int64 v29; // [rsp+48h] [rbp-21h]
  __int64 v30; // [rsp+50h] [rbp-19h]
  _BYTE v31[16]; // [rsp+58h] [rbp-11h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h]
  unsigned __int64 v33; // [rsp+70h] [rbp+7h]
  __int16 v35; // [rsp+D0h] [rbp+67h]
  __int16 v36; // [rsp+D8h] [rbp+6Fh]
  __int16 v37; // [rsp+E0h] [rbp+77h] BYREF
  char v38; // [rsp+E2h] [rbp+79h]
  __int64 v39; // [rsp+E8h] [rbp+7Fh]

  v26 = &off_1400D41D0;
  v3 = a1;
  v27 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  sub_1400011A8(&v26, (__int64)qword_1400B7220, 1uLL);
  v4 = v28;
  v5 = 0LL;
  *(_QWORD *)a2 = &off_1400D41D0;
  v6 = v29;
  v39 = 0LL;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  HIBYTE(v36) = 10;
  do
  {
    LOBYTE(v36) = *(_BYTE *)(v3 + v5 + 8);
    v37 = v36;
    v38 = 10;
    sub_140022394((__int64)v31, (unsigned __int8 *)&v37);
    v7 = P;
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, (__int64)P, v33);
    else
      sub_1400011A8((_QWORD *)a2, (__int64)P, v33);
    if ( v7 )
      ExFreePool(v7);
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
    {
      if ( v6 && v4 )
      {
        v9 = *(_QWORD *)(a2 + 24);
        v10 = v9 + v6;
        v11 = 2 * (v9 + v6);
        if ( *(_QWORD *)(a2 + 32) > v9 + v6 )
        {
          sub_1400B6980(v8 + 2 * v9, v4, 2 * v6);
LABEL_27:
          v19 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a2 + 24) = v10;
          *(_WORD *)(v19 + v11) = 0;
          v3 = a1;
          goto LABEL_37;
        }
        _mm_lfence();
        v12 = *(_QWORD *)(a2 + 32);
        v13 = v12;
        if ( v12 <= v11 )
          v13 = 2 * (v9 + v6);
        if ( v13 <= 0x40 )
        {
          v12 = 64LL;
        }
        else if ( v12 <= v11 )
        {
          v12 = 2 * (v9 + v6);
        }
        v14 = 2 * v12;
        if ( !is_mul_ok(v12, 2uLL) )
          v14 = -1LL;
        Pool2 = ExAllocatePool2(64LL, v14, 1802728562LL);
        v16 = Pool2;
        if ( Pool2 )
        {
          v17 = *(_QWORD *)(a2 + 24);
          if ( v17 )
            sub_1400B6980(Pool2, *(_QWORD *)(a2 + 16), 2 * v17);
          v6 = v29;
          v4 = v28;
          sub_1400B6980(v16 + 2LL * *(_QWORD *)(a2 + 24), v28, 2 * v29);
          v18 = *(void **)(a2 + 16);
          if ( v18 )
            ExFreePool(v18);
          *(_QWORD *)(a2 + 16) = v16;
          *(_QWORD *)(a2 + 32) = v12;
          goto LABEL_27;
        }
        v6 = v29;
        v4 = v28;
        v3 = a1;
      }
    }
    else if ( v4 )
    {
      if ( v6 )
      {
        *(_QWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        if ( !(unsigned int)sub_140001070((_QWORD *)a2, v6, 0LL) )
        {
          *(_QWORD *)(a2 + 24) = 0LL;
          for ( i = 0LL; i < v6; *(_QWORD *)(a2 + 24) = i )
          {
            v21 = v4[i];
            if ( !v21 )
              break;
            *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * i) = v21;
            i = *(_QWORD *)(a2 + 24) + 1LL;
          }
          *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * v6) = 0;
        }
      }
    }
LABEL_37:
    v5 = v39 + 1;
    v39 = v5;
  }
  while ( v5 < 3 );
  LOBYTE(v35) = *(_BYTE *)(v3 + 11);
  HIBYTE(v35) = 10;
  v24 = v35;
  v25 = 10;
  sub_140022394((__int64)v31, (unsigned __int8 *)&v24);
  v22 = P;
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, (__int64)P, v33);
  else
    sub_1400011A8((_QWORD *)a2, (__int64)P, v33);
  if ( v22 )
    ExFreePool(v22);
  if ( v4 )
    ExFreePool(v4);
  return a2;
}
