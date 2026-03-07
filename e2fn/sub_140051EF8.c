__int64 __fastcall sub_140051EF8(__int64 a1, __int64 *a2, unsigned int a3)
{
  char v3; // di
  char v4; // si
  __int64 v7; // rbx
  void *v8; // r12
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rbx
  void *v17; // r12
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v24; // rdi
  volatile signed __int32 *v25; // rdi
  __int64 v27; // rbx
  void *v28; // r12
  void *v29; // rdi
  void *v30; // rax
  __int64 v31; // rax
  int v32; // edx
  void *v33; // rax
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rdi
  volatile signed __int32 *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  volatile signed __int32 *v40; // rdi
  _BYTE v41[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v42; // [rsp+60h] [rbp-21h]
  _BYTE v43[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v44; // [rsp+70h] [rbp-11h]
  _BYTE v45[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v46; // [rsp+80h] [rbp-1h]
  _BYTE v47[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v48; // [rsp+90h] [rbp+Fh]
  _BYTE v49[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v50; // [rsp+A0h] [rbp+1Fh]
  _BYTE v51[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v52; // [rsp+B0h] [rbp+2Fh]

  v3 = 0;
  v4 = a3;
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = a1 + 56;
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v43)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 24LL))(v7, v41);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v12,
        10,
        16,
        (__int64)&unk_1400D7608,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"interruptAssertedCallback");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v14 = v42;
      v3 &= ~2u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v15 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_140017CC8(a1, (__int64)L"interruptAssertedCallback", 113, 67);
LABEL_36:
    v25 = (volatile signed __int32 *)a2[1];
    if ( v25 && _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    return 3221225485LL;
  }
  if ( a3 >= 0x20 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v16 = a1 + 56;
      v17 = &unk_1400D44E0;
      v18 = &unk_1400D44E0;
      v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v47)
                     + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 24LL))(v16, v45);
      LOBYTE(v21) = 2;
      v22 = *(void **)(*(_QWORD *)v20 + 16LL);
      if ( v22 )
        v17 = v22;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v21,
        10,
        17,
        (__int64)&unk_1400D7608,
        (__int64)v17,
        (__int64)v18,
        (__int64)qword_1400B7720,
        v4);
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v23 = v46;
      v3 &= ~8u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v24 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    goto LABEL_36;
  }
  if ( *(_QWORD *)(a1 + 16LL * a3 + 424) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v27 = a1 + 56;
      v28 = &unk_1400D44E0;
      v29 = &unk_1400D44E0;
      v30 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v51)
                     + 16LL);
      if ( v30 )
        v29 = v30;
      v31 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 24LL))(v27, v49);
      LOBYTE(v32) = 2;
      v33 = *(void **)(*(_QWORD *)v31 + 16LL);
      if ( v33 )
        v28 = v33;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v32,
        10,
        18,
        (__int64)&unk_1400D7608,
        (__int64)v28,
        (__int64)v29,
        (__int64)qword_1400B7720,
        v4);
      v3 = 48;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v34 = v50;
      v3 &= ~0x20u;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v35 = v52;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    v36 = (volatile signed __int32 *)a2[1];
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
        if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
      }
    }
    return 3221225473LL;
  }
  else
  {
    v37 = *(_QWORD *)(a1 + 16LL * a3 + 432);
    *(_QWORD *)(a1 + 16LL * a3 + 432) = a2[1];
    v38 = *a2;
    a2[1] = v37;
    v39 = *(_QWORD *)(a1 + 16LL * a3 + 424);
    *(_QWORD *)(a1 + 16LL * a3 + 424) = v38;
    *a2 = v39;
    v40 = (volatile signed __int32 *)a2[1];
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    return 0LL;
  }
}
