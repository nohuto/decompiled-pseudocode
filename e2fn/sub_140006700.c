void __fastcall sub_140006700(_QWORD *a1, __int64 *a2, int a3)
{
  char *v3; // rsi
  void *v6; // rdx
  PVOID v7; // rdx
  PVOID v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r15
  _QWORD *v15; // r14
  unsigned __int64 v16; // rcx
  volatile signed __int32 *v17; // rsi
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // r13
  unsigned __int64 v22; // rax
  int v23; // ecx
  int v24; // ecx
  const wchar_t *v25; // rdx
  PVOID v26; // rdx
  PVOID v27; // rdx
  void *v28; // rdx
  volatile signed __int32 *v29; // rsi
  PVOID v30[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID v31; // [rsp+30h] [rbp-69h]
  __int64 v32; // [rsp+38h] [rbp-61h]
  __int64 v33; // [rsp+48h] [rbp-51h] BYREF
  volatile signed __int32 *v34; // [rsp+50h] [rbp-49h]
  __int64 v35; // [rsp+58h] [rbp-41h] BYREF
  volatile signed __int32 *v36; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall **v37)(PVOID); // [rsp+68h] [rbp-31h] BYREF
  __int16 v38; // [rsp+70h] [rbp-29h]
  PVOID v39; // [rsp+78h] [rbp-21h]
  __int64 v40; // [rsp+80h] [rbp-19h]
  __int64 v41; // [rsp+88h] [rbp-11h]
  __int64 v42; // [rsp+90h] [rbp-9h]
  __int64 v43; // [rsp+98h] [rbp-1h]
  __int64 (__fastcall **v44)(PVOID); // [rsp+A0h] [rbp+7h] BYREF
  __int16 v45; // [rsp+A8h] [rbp+Fh]
  PVOID P; // [rsp+B0h] [rbp+17h]
  __int64 v47; // [rsp+B8h] [rbp+1Fh]
  __int64 v48; // [rsp+C0h] [rbp+27h]

  if ( !a3 )
  {
    v3 = 0LL;
    v37 = &off_1400D41D0;
    v38 = 0;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    sub_1400011A8(&v37, (__int64)qword_1400B6F30, 1uLL);
    v6 = &unk_1400D44E0;
    if ( a1[4] )
      v6 = (void *)a1[4];
    (*(void (__fastcall **)(__int64 *, void *, __int64))(*a2 + 8))(a2, v6, 2LL * a1[5]);
    v7 = &unk_1400D44E0;
    v8 = v39;
    if ( v39 )
      v7 = v39;
    v9 = *a2;
    v42 = 2 * v40;
    (*(void (__fastcall **)(__int64 *, PVOID, __int64))(v9 + 8))(a2, v7, 2 * v40);
    v43 = a1[7];
    v10 = v43;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = (_QWORD *)a1[10];
    v12 = a1 + 9;
    v13 = v11;
    v14 = 0LL;
    if ( a1[14] )
      v13 = a1 + 9;
    if ( v11 != v13 )
    {
      v15 = v13;
      do
      {
        sub_1400A27D4(&v33, v11 + 2);
        v16 = *(_QWORD *)(v33 + 72);
        if ( v14 > v16 )
          v16 = v14;
        v14 = v16;
        if ( v34 && _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          v17 = v34;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
          v3 = 0LL;
        }
        v11 = (_QWORD *)v11[1];
      }
      while ( v11 != v15 );
      v8 = v39;
      v12 = a1 + 9;
    }
    v18 = (_QWORD *)a1[10];
    v19 = v18;
    if ( a1[14] )
      v19 = v12;
    if ( v18 != v19 )
    {
      v20 = v19;
      while ( 1 )
      {
        sub_1400A27D4(&v35, v18 + 2);
        v21 = v35;
        sub_140003EC0((__int64)v30, (__int64)qword_1400B7400, (__int64 (__fastcall ***)(PVOID))(v35 + 48));
        v22 = *(_QWORD *)(v21 + 72);
        if ( v22 < v14 )
        {
          v3 = (char *)(v14 - v22);
          do
          {
            if ( v31 )
              sub_140001480(v30, (__int64)qword_1400B7720, 1LL);
            else
              sub_1400011A8(v30, (__int64)qword_1400B7720, 1uLL);
            --v3;
          }
          while ( v3 );
        }
        v23 = *(_DWORD *)(v21 + 88);
        if ( !v23 )
          break;
        v24 = v23 - 1;
        if ( !v24 )
        {
          v25 = L" (PW)] ";
          goto LABEL_35;
        }
        if ( v24 == 1 )
        {
          v25 = L" (WR)] ";
          goto LABEL_35;
        }
LABEL_38:
        v26 = &unk_1400D44E0;
        if ( v31 )
          v26 = v31;
        (*(void (__fastcall **)(__int64 *, PVOID, __int64))(*a2 + 8))(a2, v26, 2 * v32);
        v45 = (__int16)v3;
        v44 = &off_1400D41D0;
        P = v3;
        v47 = 0LL;
        v48 = 0LL;
        if ( &v44 == (__int64 (__fastcall ***)(PVOID))(v21 + 8)
          || (sub_1400011A8(&v44, *(_QWORD *)(v21 + 24), *(_QWORD *)(v21 + 32)), v3 = (char *)P, (v27 = P) == 0LL) )
        {
          v27 = &unk_1400D44E0;
        }
        (*(void (__fastcall **)(__int64 *, PVOID, __int64))(*a2 + 8))(a2, v27, 2 * v47);
        if ( v3 )
          ExFreePool(v3);
        v28 = &unk_1400D44E0;
        if ( v8 )
          v28 = v8;
        (*(void (__fastcall **)(__int64 *, void *, __int64))(*a2 + 8))(a2, v28, v42);
        if ( v31 )
          ExFreePool(v31);
        if ( v36 )
        {
          if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
          {
            v29 = v36;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
            if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
          }
          v8 = v39;
        }
        v18 = (_QWORD *)v18[1];
        v3 = 0LL;
        if ( v18 == v20 )
        {
          v10 = v43;
          goto LABEL_56;
        }
      }
      v25 = L" (RO)] ";
LABEL_35:
      if ( v31 == v3 )
        sub_1400011A8(v30, (__int64)v25, 7uLL);
      else
        sub_140001480(v30, (__int64)v25, 7LL);
      goto LABEL_38;
    }
LABEL_56:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
    if ( v8 )
      ExFreePool(v8);
  }
}
