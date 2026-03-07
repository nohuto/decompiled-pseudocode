__int64 __fastcall sub_1400255C0(__int64 a1, char a2)
{
  char v2; // di
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r13
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rdi
  unsigned int v16; // r15d
  void *v17; // r13
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v24; // rdi
  __int64 v25; // rsi
  void *v26; // r13
  void *v27; // rdi
  void *v28; // rax
  __int64 v29; // rax
  int v30; // edx
  void *v31; // rax
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rdi
  void *v34; // r13
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  void *v39; // rax
  volatile signed __int32 *v40; // rsi
  _BYTE v42[8]; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v43; // [rsp+60h] [rbp-A0h]
  _BYTE v44[8]; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v45; // [rsp+70h] [rbp-90h]
  _BYTE v46[8]; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v47; // [rsp+80h] [rbp-80h]
  _BYTE v48[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v49; // [rsp+90h] [rbp-70h]
  _BYTE v50[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v51; // [rsp+A0h] [rbp-60h]
  _BYTE v52[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v53; // [rsp+B0h] [rbp-50h]
  _BYTE v54[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v55; // [rsp+C0h] [rbp-40h]
  _BYTE v56[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v57; // [rsp+D0h] [rbp-30h]
  __int16 v58; // [rsp+E0h] [rbp-20h] BYREF
  char v59; // [rsp+E2h] [rbp-1Eh]
  char v60; // [rsp+E3h] [rbp-1Dh]
  char v61; // [rsp+E4h] [rbp-1Ch]

  v2 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::SelectFlexibleFilterGroup",
             (a1 + 8) & -(__int64)(a1 != 0));
      if ( v7 )
        v5 = v7;
    }
  }
  if ( (unsigned __int8)a2 > 4u )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 16LL))(
                                    a1 + 64,
                                    v44)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 24LL))(a1 + 64, v42);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL),
        v12,
        14,
        31,
        (__int64)&unk_1400D6110,
        (__int64)v8,
        (__int64)v9,
        (__int64)qword_1400B7720,
        a2);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v43;
      v2 &= ~2u;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = -1073741823;
    goto LABEL_74;
  }
  if ( *(_BYTE *)(a1 + 481) == a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v17 = &unk_1400D44E0;
      v18 = &unk_1400D44E0;
      v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 16LL))(
                                    a1 + 64,
                                    v48)
                     + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 24LL))(a1 + 64, v46);
      LOBYTE(v21) = 4;
      v22 = *(void **)(*(_QWORD *)v20 + 16LL);
      if ( v22 )
        v17 = v22;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL),
        v21,
        14,
        32,
        (__int64)&unk_1400D6110,
        (__int64)v17,
        (__int64)v18,
        (__int64)qword_1400B7720,
        a2);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v23 = v47;
      v2 &= ~8u;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v2 & 4) == 0 )
      goto LABEL_73;
    v24 = v49;
LABEL_69:
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
LABEL_73:
    v16 = 0;
    goto LABEL_74;
  }
  *(_BYTE *)(a1 + 481) = a2;
  sub_1400B6C40(&v58, 0LL, 80LL);
  v58 = 305;
  v59 = 0;
  v61 = a2;
  v60 = sub_1400237DC(a1, (__int64)&v58);
  v16 = (*(__int64 (__fastcall **)(__int64, __int16 *, __int64))(*(_QWORD *)a1 + 48LL))(a1, &v58, 80LL);
  if ( !v16 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v34 = &unk_1400D44E0;
      v35 = &unk_1400D44E0;
      v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 16LL))(
                                    a1 + 64,
                                    v56)
                     + 16LL);
      if ( v36 )
        v35 = v36;
      v37 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 24LL))(a1 + 64, v54);
      LOBYTE(v38) = 4;
      v39 = *(void **)(*(_QWORD *)v37 + 16LL);
      if ( v39 )
        v34 = v39;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL),
        v38,
        14,
        34,
        (__int64)&unk_1400D6110,
        (__int64)v34,
        (__int64)v35,
        (__int64)qword_1400B7720,
        a2);
      v2 = -64;
    }
    if ( v2 < 0 )
    {
      v40 = v55;
      v2 &= ~0x80u;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v2 & 0x40) == 0 )
      goto LABEL_73;
    v24 = v57;
    goto LABEL_69;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL);
    v26 = &unk_1400D44E0;
    v27 = &unk_1400D44E0;
    v28 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 16LL))(
                                  a1 + 64,
                                  v52)
                   + 16LL);
    if ( v28 )
      v27 = v28;
    v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 64) + 24LL))(a1 + 64, v50);
    LOBYTE(v30) = 2;
    v31 = *(void **)(*(_QWORD *)v29 + 16LL);
    if ( v31 )
      v26 = v31;
    sub_1400A5E80(
      v25,
      v30,
      14,
      33,
      (__int64)&unk_1400D6110,
      (__int64)v26,
      (__int64)v27,
      (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))",
      v16);
    v2 = 48;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v32 = v51;
    v2 &= ~0x20u;
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
  }
  if ( (v2 & 0x10) != 0 )
  {
    v33 = v53;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
  }
  sub_1400095B8(a1 + 8, (__int64)L"SendCommandToFirmware(fwCmd, sizeof(fwCmd))", 424, 45, v16);
LABEL_74:
  if ( v5 )
  {
    sub_140005840(v5);
    ExFreePool(v5);
  }
  return v16;
}
