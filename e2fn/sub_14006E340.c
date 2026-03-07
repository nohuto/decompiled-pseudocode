void __fastcall sub_14006E340(_QWORD *a1, __int64 a2)
{
  char v2; // r15
  __int64 *v4; // r12
  __int64 v5; // rdi
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rsi
  void *v9; // rax
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rbx
  void *v13; // rdx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  volatile signed __int32 *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 i; // rbx
  __int64 v24; // rax
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // r14
  _QWORD *v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rax
  void *v32; // r13
  void *v33; // rsi
  void *v34; // rax
  __int64 v35; // rax
  int v36; // edx
  void *v37; // rax
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  void *v40; // r14
  void *v41; // rsi
  void *v42; // rax
  __int64 v43; // rax
  int v44; // edx
  void *v45; // rax
  volatile signed __int32 *v46; // rbx
  __int128 v47; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v48[8]; // [rsp+60h] [rbp-59h] BYREF
  volatile signed __int32 *v49; // [rsp+68h] [rbp-51h]
  _BYTE v50[8]; // [rsp+70h] [rbp-49h] BYREF
  volatile signed __int32 *v51; // [rsp+78h] [rbp-41h]
  __int128 v52; // [rsp+80h] [rbp-39h]
  _BYTE v53[8]; // [rsp+90h] [rbp-29h] BYREF
  volatile signed __int32 *v54; // [rsp+98h] [rbp-21h]
  _BYTE v55[8]; // [rsp+A0h] [rbp-19h] BYREF
  volatile signed __int32 *v56; // [rsp+A8h] [rbp-11h]
  _BYTE v57[8]; // [rsp+B0h] [rbp-9h] BYREF
  volatile signed __int32 *v58; // [rsp+B8h] [rbp-1h]
  _BYTE v59[8]; // [rsp+C0h] [rbp+7h] BYREF
  volatile signed __int32 *v60; // [rsp+C8h] [rbp+Fh]
  _BYTE v61[64]; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v62; // [rsp+120h] [rbp+67h]

  v2 = 0;
  v4 = 0LL;
  v5 = a2;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005B310(Pool2, (__int64)L"os_resources::IdlePower::OnPowerResourceReleased", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 = &unk_1400D44E0;
    v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v50) + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = &unk_1400D44E0;
    v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v48) + 16LL);
    if ( v11 )
      v10 = v11;
    v12 = *(_QWORD *)(a1[22] + 16LL);
    v13 = *(void **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 56) + 8LL))(a2 + 56) + 16);
    v14 = &unk_1400D44E0;
    if ( v13 )
      v14 = v13;
    LOBYTE(v13) = 4;
    sub_1400A9338(
      v12,
      (_DWORD)v13,
      5,
      19,
      (__int64)&unk_1400D8E60,
      (__int64)v10,
      (__int64)v8,
      (__int64)qword_1400B7720,
      (__int64)v14);
    v5 = a2;
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v15 = v49;
    v2 &= ~2u;
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v16 = v51;
    v2 &= ~1u;
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  v17 = ExAllocatePool2(64LL, 32LL, 808477241LL);
  if ( v17
    && (v18 = sub_1400AEFB0(v17, v5), (v19 = (volatile signed __int32 *)v18) != 0LL)
    && (v20 = *(_QWORD *)(v18 + 16)) != 0 )
  {
    *((_QWORD *)&v47 + 1) = v19;
    *(_QWORD *)&v47 = v20;
  }
  else
  {
    v19 = 0LL;
    v47 = 0LL;
  }
  v21 = a1[56];
  v22 = sub_1400A27D4(v61, &v47);
  sub_14006FDF0(v21, v22);
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v62 = a1[46];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  for ( i = a1[49]; ; i = v28 )
  {
    v24 = a1[53] ? (__int64)(a1 + 48) : a1[49];
    if ( i == v24 )
      break;
    v25 = *(volatile signed __int32 **)(i + 24);
    v26 = 0LL;
    v52 = *(_OWORD *)(i + 16);
    if ( v25 )
    {
      _InterlockedIncrement(v25 + 3);
      v27 = v52;
      v26 = v52;
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v25 + 16LL))(v25, v26);
        v26 = v27;
      }
    }
    v28 = *(_QWORD *)(i + 8);
    if ( v26 == a2 )
      sub_1400AF3A8(a1 + 48, i);
  }
  if ( a1[53] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 |= 0x30u;
      v40 = &unk_1400D44E0;
      v41 = &unk_1400D44E0;
      v42 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v59) + 16LL);
      if ( v42 )
        v41 = v42;
      v43 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v57);
      LOBYTE(v44) = 4;
      v45 = *(void **)(*(_QWORD *)v43 + 16LL);
      if ( v45 )
        v40 = v45;
      sub_1400AA268(
        *(_QWORD *)(a1[22] + 16LL),
        v44,
        5,
        21,
        (__int64)&unk_1400D8E60,
        (__int64)v40,
        (__int64)v41,
        (__int64)qword_1400B7720,
        a1[53]);
    }
    if ( (v2 & 0x20) != 0 )
    {
      v46 = v58;
      v2 &= ~0x20u;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
          if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v39 = v60;
      goto LABEL_71;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v29 = a1 + 7;
      v2 |= 0xCu;
      v30 = *(_QWORD *)(a1[22] + 16LL);
      v31 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v55);
      v32 = &unk_1400D44E0;
      v33 = &unk_1400D44E0;
      v34 = *(void **)(*(_QWORD *)v31 + 16LL);
      if ( v34 )
        v33 = v34;
      v35 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v29 + 24LL))(v29, v53);
      LOBYTE(v36) = 4;
      v37 = *(void **)(*(_QWORD *)v35 + 16LL);
      if ( v37 )
        v32 = v37;
      sub_1400A3320(v30, v36, 5, 20, (__int64)&unk_1400D8E60, (__int64)v32, (__int64)v33, (__int64)qword_1400B7720);
    }
    if ( (v2 & 8) != 0 )
    {
      v38 = v54;
      v2 &= ~8u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v39 = v56;
LABEL_71:
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 24LL))(v62);
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
}
