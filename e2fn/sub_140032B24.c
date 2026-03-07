__int64 __fastcall sub_140032B24(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 *a4)
{
  char v7; // si
  __int64 *v8; // r14
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  void *v11; // rsi
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  void *v22; // rsi
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  void *v33; // rsi
  void *v34; // rdi
  void *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  void *v38; // rax
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rdi
  volatile signed __int32 *v41; // rdi
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdi
  __int64 v45; // rax
  void *v46; // rsi
  void *v47; // rdi
  void *v48; // rax
  __int64 v49; // rax
  int v50; // edx
  void *v51; // rax
  volatile signed __int32 *v52; // rdi
  volatile signed __int32 *v53; // rdi
  volatile signed __int32 *v54; // rdi
  volatile signed __int32 *v55; // rdi
  volatile signed __int32 *v56; // rdi
  volatile signed __int32 *v57; // rdi
  volatile signed __int32 *v58; // rdi
  volatile signed __int32 *v59; // rdi
  _QWORD v60[2]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v61[8]; // [rsp+60h] [rbp-59h] BYREF
  volatile signed __int32 *v62; // [rsp+68h] [rbp-51h]
  _BYTE v63[8]; // [rsp+70h] [rbp-49h] BYREF
  volatile signed __int32 *v64; // [rsp+78h] [rbp-41h]
  _BYTE v65[8]; // [rsp+80h] [rbp-39h] BYREF
  volatile signed __int32 *v66; // [rsp+88h] [rbp-31h]
  _BYTE v67[8]; // [rsp+90h] [rbp-29h] BYREF
  volatile signed __int32 *v68; // [rsp+98h] [rbp-21h]
  _BYTE v69[8]; // [rsp+A0h] [rbp-19h] BYREF
  volatile signed __int32 *v70; // [rsp+A8h] [rbp-11h]
  _BYTE v71[8]; // [rsp+B0h] [rbp-9h] BYREF
  volatile signed __int32 *v72; // [rsp+B8h] [rbp-1h]
  _BYTE v73[8]; // [rsp+C0h] [rbp+7h] BYREF
  volatile signed __int32 *v74; // [rsp+C8h] [rbp+Fh]
  _BYTE v75[8]; // [rsp+D0h] [rbp+17h] BYREF
  volatile signed __int32 *v76; // [rsp+D8h] [rbp+1Fh]
  __int64 v77; // [rsp+128h] [rbp+6Fh]
  unsigned int v78; // [rsp+128h] [rbp+6Fh]
  _QWORD *v79; // [rsp+130h] [rbp+77h]

  v79 = a3;
  v7 = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxFilter::Bind", (__int64)a1);
      if ( v10 )
        v8 = v10;
    }
    a3 = v79;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v63) + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v61);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v15,
        10,
        11,
        (__int64)&unk_1400D69D8,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"receiveControlRegister");
      v7 = 3;
    }
    if ( (v7 & 2) != 0 )
    {
      v17 = v62;
      v7 &= ~2u;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      v18 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000B5F4((int)a1, (__int64)L"receiveControlRegister", 70, 56);
LABEL_61:
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v41 = (volatile signed __int32 *)a2[1];
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
        if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
    v42 = (volatile signed __int32 *)v79[1];
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
        if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
      }
    }
    v43 = (volatile signed __int32 *)a4[1];
    if ( v43 && _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
      if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
    }
    return 3221225485LL;
  }
  v19 = a1[58];
  a1[58] = a2[1];
  v20 = *a2;
  a2[1] = v19;
  v21 = a1[57];
  a1[57] = v20;
  *a2 = v21;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v22 = &unk_1400D44E0;
      v23 = &unk_1400D44E0;
      v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v67) + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v65);
      LOBYTE(v26) = 2;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v22 = v27;
      v77 = (__int64)v22;
      v7 = 12;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v26,
        10,
        12,
        (__int64)&unk_1400D69D8,
        v77,
        (__int64)v23,
        (__int64)L"mmioAccessor");
    }
    if ( (v7 & 8) != 0 )
    {
      v28 = v66;
      v7 &= ~8u;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v7 & 4) != 0 )
    {
      v29 = v68;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 73, 56);
    goto LABEL_61;
  }
  v30 = a1[60];
  a1[60] = a4[1];
  v31 = *a4;
  a4[1] = v30;
  v32 = a1[59];
  a1[59] = v31;
  *a4 = v32;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v33 = &unk_1400D44E0;
      v34 = &unk_1400D44E0;
      v35 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v71) + 16LL);
      if ( v35 )
        v34 = v35;
      v36 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v69);
      LOBYTE(v37) = 2;
      v38 = *(void **)(*(_QWORD *)v36 + 16LL);
      if ( v38 )
        v33 = v38;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v37,
        10,
        13,
        (__int64)&unk_1400D69D8,
        (__int64)v33,
        (__int64)v34,
        (__int64)L"lockFactory");
      v7 = 48;
    }
    if ( (v7 & 0x20) != 0 )
    {
      v39 = v70;
      v7 &= ~0x20u;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
    if ( (v7 & 0x10) != 0 )
    {
      v40 = v72;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    sub_14000B954((int)a1, (__int64)L"lockFactory", 76, 56);
    goto LABEL_61;
  }
  v45 = a3[1];
  v60[0] = *a3;
  v60[1] = v45;
  a3[1] = 0LL;
  *a3 = 0LL;
  v78 = sub_1400895F0(a1, v60);
  if ( v78 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v46 = &unk_1400D44E0;
      v47 = &unk_1400D44E0;
      v48 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v75) + 16LL);
      if ( v48 )
        v47 = v48;
      v49 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v73);
      LOBYTE(v50) = 2;
      v51 = *(void **)(*(_QWORD *)v49 + 16LL);
      if ( v51 )
        v46 = v51;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v50,
        10,
        14,
        (__int64)&unk_1400D69D8,
        (__int64)v46,
        (__int64)v47,
        (__int64)L"__super::Bind(move(lockFactory))",
        v78);
      v7 = -64;
    }
    if ( v7 < 0 )
    {
      v52 = v74;
      v7 &= ~0x80u;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
          if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
        }
      }
    }
    if ( (v7 & 0x40) != 0 )
    {
      v53 = v76;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
        }
      }
    }
    sub_140008CA4((int)a1, (__int64)L"__super::Bind(move(lockFactory))", 77, 56, v78);
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v54 = (volatile signed __int32 *)a2[1];
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
        if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
      }
    }
    v55 = (volatile signed __int32 *)v79[1];
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
    v56 = (volatile signed __int32 *)a4[1];
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
        if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
      }
    }
    return v78;
  }
  else
  {
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v57 = (volatile signed __int32 *)a2[1];
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
        if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
      }
    }
    v58 = (volatile signed __int32 *)v79[1];
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
        if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
      }
    }
    v59 = (volatile signed __int32 *)a4[1];
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
    return 0LL;
  }
}
