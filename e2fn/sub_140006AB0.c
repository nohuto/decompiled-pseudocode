void __fastcall sub_140006AB0(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r14
  void *v6; // rdx
  PVOID v7; // rdx
  PVOID v8; // rsi
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // r12
  unsigned __int64 v12; // rcx
  volatile signed __int32 *v13; // rsi
  _QWORD *v14; // rbx
  _QWORD *v15; // r12
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  const wchar_t *v22; // rdx
  PVOID v23; // r15
  PVOID v24; // rdx
  PVOID v25; // r13
  PVOID v26; // rdx
  void *v27; // rdx
  volatile signed __int32 *v28; // rsi
  PVOID v29[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID v30; // [rsp+30h] [rbp-69h]
  __int64 v31; // [rsp+38h] [rbp-61h]
  __int64 v32; // [rsp+48h] [rbp-51h] BYREF
  volatile signed __int32 *v33; // [rsp+50h] [rbp-49h]
  __int64 v34; // [rsp+58h] [rbp-41h] BYREF
  volatile signed __int32 *v35; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall **v36)(PVOID); // [rsp+68h] [rbp-31h] BYREF
  __int16 v37; // [rsp+70h] [rbp-29h]
  PVOID v38; // [rsp+78h] [rbp-21h]
  __int64 v39; // [rsp+80h] [rbp-19h]
  __int64 v40; // [rsp+88h] [rbp-11h]
  __int64 v41; // [rsp+90h] [rbp-9h]
  char v42[16]; // [rsp+98h] [rbp-1h] BYREF
  PVOID P; // [rsp+A8h] [rbp+Fh]
  __int64 v44; // [rsp+B0h] [rbp+17h]
  __int64 v46; // [rsp+118h] [rbp+7Fh]

  if ( !a3 )
  {
    v3 = 0LL;
    v36 = &off_1400D41D0;
    v37 = 0;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    sub_1400011A8(&v36, (__int64)qword_1400B6F30, 1uLL);
    v6 = &unk_1400D44E0;
    if ( a1[4] )
      v6 = (void *)a1[4];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2LL * a1[5]);
    v7 = &unk_1400D44E0;
    v8 = v38;
    if ( v38 )
      v7 = v38;
    v46 = 2 * v39;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v39);
    v41 = a1[7];
    v9 = v41;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = (_QWORD *)a1[10];
    v11 = v10;
    if ( a1[14] )
      v11 = a1 + 9;
    if ( v10 != v11 )
    {
      do
      {
        sub_1400A27D4(&v32, v10 + 2);
        v12 = *(_QWORD *)(v32 + 72);
        if ( v3 > v12 )
          v12 = v3;
        v3 = v12;
        if ( v33 )
        {
          if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
          {
            v13 = v33;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
        v10 = (_QWORD *)v10[1];
      }
      while ( v10 != v11 );
      v8 = v38;
    }
    v14 = (_QWORD *)a1[10];
    v15 = v14;
    if ( a1[14] )
      v15 = a1 + 9;
    if ( v14 != v15 )
    {
      while ( 1 )
      {
        sub_1400A27D4(&v34, v14 + 2);
        v16 = v34;
        sub_140003EC0((__int64)v29, (__int64)qword_1400B7400, (__int64 (__fastcall ***)(PVOID))(v34 + 48));
        v17 = *(_QWORD *)(v16 + 72);
        if ( v17 < v3 )
        {
          v18 = v3 - v17;
          do
          {
            if ( v30 )
              sub_140001480(v29, (__int64)qword_1400B7720, 1LL);
            else
              sub_1400011A8(v29, (__int64)qword_1400B7720, 1uLL);
            --v18;
          }
          while ( v18 );
        }
        v19 = *(_DWORD *)(v16 + 88);
        if ( !v19 )
          break;
        v20 = v19 - 1;
        if ( !v20 )
        {
          v21 = v30 == 0LL;
          v22 = L" (PW)] ";
          goto LABEL_32;
        }
        if ( v20 == 1 )
        {
          v21 = v30 == 0LL;
          v22 = L" (WR)] ";
          goto LABEL_32;
        }
LABEL_35:
        v23 = v30;
        v24 = &unk_1400D44E0;
        if ( v30 )
          v24 = v30;
        (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v24, 2 * v31);
        sub_140007BD4(v42, v16 + 8);
        v25 = P;
        v26 = &unk_1400D44E0;
        if ( P )
          v26 = P;
        (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v26, 2 * v44);
        if ( v25 )
          ExFreePool(v25);
        v27 = &unk_1400D44E0;
        if ( v8 )
          v27 = v8;
        (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v27, v46);
        if ( v23 )
          ExFreePool(v23);
        if ( v35 )
        {
          if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
          {
            v28 = v35;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
            if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          }
          v8 = v38;
        }
        v14 = (_QWORD *)v14[1];
        if ( v14 == v15 )
        {
          v9 = v41;
          goto LABEL_52;
        }
      }
      v21 = v30 == 0LL;
      v22 = L" (RO)] ";
LABEL_32:
      if ( v21 )
        sub_1400011A8(v29, (__int64)v22, 7uLL);
      else
        sub_140001480(v29, (__int64)v22, 7LL);
      goto LABEL_35;
    }
LABEL_52:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    if ( v8 )
      ExFreePool(v8);
  }
}
