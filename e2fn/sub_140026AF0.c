__int64 __fastcall sub_140026AF0(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  _BYTE *v5; // r12
  _WORD *v6; // rbx
  unsigned __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 Pool2; // rax
  __int64 v20; // r12
  __int64 v21; // r8
  void *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 i; // rcx
  __int16 v25; // dx
  __int64 (__fastcall **v27)(PVOID); // [rsp+20h] [rbp-69h] BYREF
  __int16 v28; // [rsp+28h] [rbp-61h]
  PVOID v29; // [rsp+30h] [rbp-59h]
  unsigned __int64 v30; // [rsp+38h] [rbp-51h]
  __int64 v31; // [rsp+40h] [rbp-49h]
  __int64 (__fastcall **v32)(PVOID); // [rsp+48h] [rbp-41h] BYREF
  PVOID P; // [rsp+58h] [rbp-31h]
  __int64 v34; // [rsp+60h] [rbp-29h]
  __int64 v35; // [rsp+68h] [rbp-21h]
  _BYTE v36[16]; // [rsp+70h] [rbp-19h] BYREF
  PVOID v37; // [rsp+80h] [rbp-9h]
  __int16 v38; // [rsp+F0h] [rbp+67h]
  _BYTE *v39; // [rsp+F8h] [rbp+6Fh]
  __int16 v40; // [rsp+100h] [rbp+77h] BYREF
  char v41; // [rsp+102h] [rbp+79h]
  __int64 v42; // [rsp+108h] [rbp+7Fh]

  *(_QWORD *)a2 = &off_1400D41D0;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  v27 = &off_1400D41D0;
  v28 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  sub_1400011A8(&v27, (__int64)qword_1400B7720, 1uLL);
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(_BYTE **)(a1 + 80);
  v6 = v29;
  v39 = v5;
  if ( v4 )
  {
    v7 = v30;
    HIBYTE(v38) = 16;
    do
    {
      --v4;
      v8 = *(_QWORD *)(a2 + 16) == 0LL;
      v42 = v4;
      if ( v8 )
        sub_1400011A8((_QWORD *)a2, (__int64)L"0x", 2uLL);
      else
        sub_140001480((_QWORD *)a2, (__int64)L"0x", 2LL);
      LOBYTE(v38) = *v5;
      v40 = v38;
      v41 = 10;
      sub_140022394((__int64)v36, (unsigned __int8 *)&v40);
      v9 = sub_1400A8CF8(&v32, v36, 2LL);
      v10 = *(_QWORD *)(v9 + 24);
      v11 = *(_QWORD *)(v9 + 16);
      if ( *(_QWORD *)(a2 + 16) )
        sub_140001480((_QWORD *)a2, v11, v10);
      else
        sub_1400011A8((_QWORD *)a2, v11, v10);
      v32 = &off_1400D41D0;
      if ( P )
        ExFreePool(P);
      P = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      if ( v37 )
        ExFreePool(v37);
      if ( !v4 )
        goto LABEL_45;
      v12 = *(_QWORD *)(a2 + 16);
      if ( !v12 )
      {
        if ( v6 )
        {
          if ( v7 )
          {
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 32) = 0LL;
            if ( !(unsigned int)sub_140001070((_QWORD *)a2, v7, 0LL) )
            {
              *(_QWORD *)(a2 + 24) = 0LL;
              for ( i = 0LL; i < v7; *(_QWORD *)(a2 + 24) = i )
              {
                v25 = v6[i];
                if ( !v25 )
                  break;
                *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * i) = v25;
                i = *(_QWORD *)(a2 + 24) + 1LL;
              }
              *(_WORD *)(*(_QWORD *)(a2 + 16) + 2 * v7) = 0;
            }
          }
        }
        goto LABEL_45;
      }
      if ( v7 && v6 )
      {
        v13 = *(_QWORD *)(a2 + 24);
        v14 = v13 + v7;
        v15 = 2 * (v13 + v7);
        if ( *(_QWORD *)(a2 + 32) > v13 + v7 )
        {
          sub_1400B6980(v12 + 2 * v13, v6, 2 * v7);
LABEL_34:
          v23 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a2 + 24) = v14;
          *(_WORD *)(v23 + v15) = 0;
          goto LABEL_45;
        }
        _mm_lfence();
        v16 = *(_QWORD *)(a2 + 32);
        v17 = v16;
        if ( v16 <= v15 )
          v17 = v15;
        if ( v17 <= 0x40 )
        {
          v16 = 64LL;
        }
        else if ( v16 <= v15 )
        {
          v16 = v15;
        }
        v18 = 2 * v16;
        if ( !is_mul_ok(v16, 2uLL) )
          v18 = -1LL;
        Pool2 = ExAllocatePool2(64LL, v18, 1802728562LL);
        v20 = Pool2;
        if ( Pool2 )
        {
          v21 = *(_QWORD *)(a2 + 24);
          if ( v21 )
            sub_1400B6980(Pool2, *(_QWORD *)(a2 + 16), 2 * v21);
          v7 = v30;
          v6 = v29;
          sub_1400B6980(v20 + 2LL * *(_QWORD *)(a2 + 24), v29, 2 * v30);
          v22 = *(void **)(a2 + 16);
          if ( v22 )
            ExFreePool(v22);
          *(_QWORD *)(a2 + 16) = v20;
          v5 = v39;
          *(_QWORD *)(a2 + 32) = v16;
          v4 = v42;
          goto LABEL_34;
        }
        v7 = v30;
        v6 = v29;
        v4 = v42;
        v5 = v39;
      }
LABEL_45:
      v39 = ++v5;
    }
    while ( v4 );
  }
  if ( v6 )
    ExFreePool(v6);
  return a2;
}
