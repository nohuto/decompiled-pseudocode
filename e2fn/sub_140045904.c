__int64 __fastcall sub_140045904(__int64 a1, __int64 a2)
{
  char v4; // si
  void *v5; // r12
  PVOID v6; // r14
  PVOID v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // r8
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  int v16; // edx
  __int64 v17; // rcx
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  unsigned int v25; // ebx
  __int64 (__fastcall **v27)(PVOID); // [rsp+68h] [rbp-59h] BYREF
  char v28; // [rsp+70h] [rbp-51h]
  PVOID P; // [rsp+78h] [rbp-49h]
  unsigned __int64 v30; // [rsp+80h] [rbp-41h]
  __int64 v31; // [rsp+88h] [rbp-39h]
  __int64 (__fastcall **v32)(PVOID); // [rsp+90h] [rbp-31h] BYREF
  char v33; // [rsp+98h] [rbp-29h]
  PVOID v34; // [rsp+A0h] [rbp-21h]
  __int64 v35; // [rsp+A8h] [rbp-19h]
  __int64 v36; // [rsp+B0h] [rbp-11h]
  _BYTE v37[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v38; // [rsp+C0h] [rbp-1h]
  _BYTE v39[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v40; // [rsp+D0h] [rbp+Fh]
  _BYTE v41[8]; // [rsp+D8h] [rbp+17h] BYREF
  volatile signed __int32 *v42; // [rsp+E0h] [rbp+1Fh]
  _BYTE v43[8]; // [rsp+E8h] [rbp+27h] BYREF
  volatile signed __int32 *v44; // [rsp+F0h] [rbp+2Fh]

  v32 = &off_1400D41D0;
  v33 = 0;
  v4 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( a2 )
    sub_1400010F4(&v32, a2, 4uLL);
  v27 = &off_1400D41D0;
  v28 = 0;
  P = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( a2 != -10 )
    sub_1400010F4(&v27, a2 + 10, 6uLL);
  v5 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 = &unk_1400D44B8;
    v7 = &unk_1400D44B8;
    if ( P )
      v7 = P;
    if ( v34 )
      v6 = v34;
    v8 = &unk_1400D44E0;
    v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v39)
                  + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v37);
    v11 = *(char *)(a2 + 8);
    v12 = &unk_1400D44E0;
    v13 = *(void **)(*(_QWORD *)v10 + 16LL);
    if ( v13 )
      v12 = v13;
    LOBYTE(v11) = 4;
    sub_1400AABE0(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      v11,
      14,
      32,
      (__int64)&unk_1400D72A0,
      (__int64)v12,
      (__int64)v8,
      (__int64)qword_1400B7720,
      (__int64)v6,
      *(_BYTE *)(a2 + 8),
      *(_BYTE *)(a2 + 9),
      (__int64)v7);
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v14 = v38;
    v4 &= ~2u;
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v15 = v40;
    v4 &= ~1u;
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( v30 < 4 )
    goto LABEL_29;
  v16 = 0;
  v17 = 0LL;
  while ( *(_DWORD *)((char *)P + v17) != 1280066884 )
  {
    v17 = ++v16;
    if ( v16 > v30 - 4 )
      goto LABEL_29;
  }
  if ( v17 == -1 )
  {
LABEL_29:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 |= 0xCu;
      v18 = &unk_1400D44E0;
      v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v43)
                     + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v41);
      LOBYTE(v21) = 4;
      v22 = *(void **)(*(_QWORD *)v20 + 16LL);
      if ( v22 )
        v5 = v22;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v21,
        14,
        33,
        (__int64)&unk_1400D72A0,
        (__int64)v5,
        (__int64)v18,
        (__int64)qword_1400B7720);
    }
    if ( (v4 & 8) != 0 )
    {
      v23 = v42;
      v4 &= ~8u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v24 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    v25 = -1072431079;
  }
  else
  {
    v25 = 0;
  }
  if ( P )
    ExFreePool(P);
  if ( v34 )
    ExFreePool(v34);
  return v25;
}
