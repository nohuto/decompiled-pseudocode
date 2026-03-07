__int64 __fastcall sub_1400665F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  char v6; // si
  char v7; // r14
  void *v8; // r12
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  void *v17; // r12
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  void *v21; // rdx
  void *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  void *v25; // rdi
  void *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rax
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int64 v32; // [rsp+30h] [rbp-81h]
  _BYTE v33[8]; // [rsp+68h] [rbp-49h] BYREF
  volatile signed __int32 *v34; // [rsp+70h] [rbp-41h]
  _BYTE v35[8]; // [rsp+78h] [rbp-39h] BYREF
  volatile signed __int32 *v36; // [rsp+80h] [rbp-31h]
  _BYTE v37[8]; // [rsp+88h] [rbp-29h] BYREF
  volatile signed __int32 *v38; // [rsp+90h] [rbp-21h]
  _BYTE v39[8]; // [rsp+98h] [rbp-19h] BYREF
  volatile signed __int32 *v40; // [rsp+A0h] [rbp-11h]
  _BYTE v41[8]; // [rsp+A8h] [rbp-9h] BYREF
  volatile signed __int32 *v42; // [rsp+B0h] [rbp-1h]
  _BYTE v43[8]; // [rsp+B8h] [rbp+7h] BYREF
  volatile signed __int32 *v44; // [rsp+C0h] [rbp+Fh]
  int v45; // [rsp+118h] [rbp+67h]

  v5 = a4;
  v6 = a3;
  v7 = 0;
  if ( *(_QWORD *)(a1 + 72) )
  {
    v17 = &unk_1400D44E0;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
    {
      v18 = &unk_1400D44E0;
      v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v39)
                     + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v37);
      v7 = 12;
      v21 = &unk_1400D44E0;
      v22 = *(void **)(*(_QWORD *)v20 + 16LL);
      if ( v22 )
        v21 = v22;
      v32 = (__int64)v21;
      LOBYTE(v21) = 5;
      sub_1400A6D50(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        (_DWORD)v21,
        4,
        12,
        (__int64)&unk_1400D8818,
        v32,
        (__int64)v18,
        (__int64)qword_1400B7720,
        a4,
        v6);
      v5 = a4;
    }
    if ( (v7 & 8) != 0 )
    {
      v23 = v38;
      v7 &= ~8u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v7 & 4) != 0 )
    {
      v24 = v40;
      v7 &= ~4u;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _DWORD))(a1 + 72))(
            *(_QWORD *)(a1 + 24),
            0LL,
            a2,
            a3,
            v5);
    if ( v45 == v5 )
    {
      return 0LL;
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v7 |= 0x30u;
        v25 = &unk_1400D44E0;
        v26 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                      a1 - 296,
                                      v43)
                       + 16LL);
        if ( v26 )
          v25 = v26;
        v27 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v41);
        LOBYTE(v28) = 2;
        v29 = *(void **)(*(_QWORD *)v27 + 16LL);
        if ( v29 )
          v17 = v29;
        sub_1400AE3A8(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          v28,
          4,
          13,
          (__int64)&unk_1400D8818,
          (__int64)v17,
          (__int64)v25,
          (__int64)qword_1400B7720,
          a4,
          a3,
          v45);
      }
      if ( (v7 & 0x20) != 0 )
      {
        v30 = v42;
        v7 &= ~0x20u;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
      }
      if ( (v7 & 0x10) != 0 )
      {
        v31 = v44;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      return 3221225473LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v35)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v33);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v12,
        4,
        11,
        (__int64)&unk_1400D8818,
        (__int64)v8,
        (__int64)v9,
        (__int64)qword_1400B7720);
      v7 = 3;
    }
    if ( (v7 & 2) != 0 )
    {
      v14 = v34;
      v7 &= ~2u;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      v15 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    return 3221225635LL;
  }
}
