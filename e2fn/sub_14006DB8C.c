_QWORD *__fastcall sub_14006DB8C(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  char v3; // r14
  __int64 *v5; // r15
  __int64 v6; // rdi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  void *v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  void *v13; // rax
  void *v14; // r8
  void *v15; // rdx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  unsigned int v25; // esi
  void *v26; // rdi
  void *v27; // rax
  __int64 v28; // rax
  void *v29; // rdx
  void *v30; // rax
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int64 v33; // rbx
  _QWORD *v34; // rdx
  void *v35; // rsi
  void *v36; // rax
  __int64 v37; // rax
  void *v38; // rdx
  void *v39; // rax
  volatile signed __int32 *v40; // rdi
  volatile signed __int32 *v41; // rdi
  __int64 v42; // rbx
  __int64 v44; // [rsp+28h] [rbp-A1h]
  __int64 v45; // [rsp+28h] [rbp-A1h]
  __int64 v46; // [rsp+30h] [rbp-99h]
  __int128 v47; // [rsp+50h] [rbp-79h] BYREF
  __int128 v48; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v49[8]; // [rsp+70h] [rbp-59h] BYREF
  volatile signed __int32 *v50; // [rsp+78h] [rbp-51h]
  _BYTE v51[8]; // [rsp+80h] [rbp-49h] BYREF
  volatile signed __int32 *v52; // [rsp+88h] [rbp-41h]
  _BYTE v53[8]; // [rsp+90h] [rbp-39h] BYREF
  volatile signed __int32 *v54; // [rsp+98h] [rbp-31h]
  _BYTE v55[8]; // [rsp+A0h] [rbp-29h] BYREF
  volatile signed __int32 *v56; // [rsp+A8h] [rbp-21h]
  _BYTE v57[8]; // [rsp+B0h] [rbp-19h] BYREF
  volatile signed __int32 *v58; // [rsp+B8h] [rbp-11h]
  _BYTE v59[8]; // [rsp+C0h] [rbp-9h] BYREF
  volatile signed __int32 *v60; // [rsp+C8h] [rbp-1h]
  _BYTE v61[8]; // [rsp+D0h] [rbp+7h] BYREF
  volatile signed __int32 *v62; // [rsp+D8h] [rbp+Fh]
  _BYTE v63[8]; // [rsp+E0h] [rbp+17h] BYREF
  volatile signed __int32 *v64; // [rsp+E8h] [rbp+1Fh]
  int v65; // [rsp+140h] [rbp+77h]

  v65 = a3;
  v3 = 0;
  v5 = 0LL;
  v6 = a3;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005B310(Pool2, (__int64)L"os_resources::IdlePower::GetPower", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  v10 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = a1 + 7;
    if ( *(_QWORD *)(v6 + 16) )
      v10 = *(void **)(v6 + 16);
    v12 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v11 + 16LL))(a1 + 7, v51);
    v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v11 + 24LL))(a1 + 7, v49) + 16LL);
    v14 = &unk_1400D44E0;
    v15 = &unk_1400D44E0;
    if ( v13 )
      v14 = v13;
    if ( *(_QWORD *)(v12 + 16) )
      v15 = *(void **)(v12 + 16);
    v46 = (__int64)v15;
    LOBYTE(v15) = 4;
    sub_1400A9338(
      *(_QWORD *)(a1[22] + 16LL),
      (_DWORD)v15,
      5,
      15,
      (__int64)&unk_1400D8E60,
      (__int64)v14,
      v46,
      (__int64)qword_1400B7720,
      (__int64)v10);
    LODWORD(v6) = v65;
    v10 = &unk_1400D44E0;
    v3 = 3;
  }
  if ( (v3 & 2) != 0 )
  {
    v16 = v50;
    v3 &= ~2u;
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v17 = v52;
    v3 &= ~1u;
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  sub_1400AF294((unsigned int)&v47, 808477282, v6, (_DWORD)a1, (__int64)(a1 + 54));
  if ( !(_QWORD)v47 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0xCu;
      v18 = &unk_1400D44E0;
      v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v55) + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v53);
      LOBYTE(v21) = 2;
      v22 = *(void **)(*(_QWORD *)v20 + 16LL);
      if ( v22 )
        v10 = v22;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v21,
        4,
        16,
        (__int64)&unk_1400D8E60,
        (__int64)v10,
        (__int64)v18,
        (__int64)L"powerResource");
    }
    if ( (v3 & 8) != 0 )
    {
      v23 = v54;
      v3 &= ~8u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v24 = v56;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    sub_14000BB04((int)a1, (__int64)L"powerResource", 82, 132);
    goto LABEL_42;
  }
  v25 = sub_14006F470(v47, a1[45]);
  if ( v25 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0x30u;
      v26 = &unk_1400D44E0;
      v27 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v59) + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v57);
      v29 = &unk_1400D44E0;
      v30 = *(void **)(*(_QWORD *)v28 + 16LL);
      if ( v30 )
        v29 = v30;
      v44 = (__int64)v29;
      LOBYTE(v29) = 2;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        (_DWORD)v29,
        5,
        17,
        (__int64)&unk_1400D8E60,
        v44,
        (__int64)v26,
        (__int64)L"powerResource->AcquirePower(m_device)",
        v25);
    }
    if ( (v3 & 0x20) != 0 )
    {
      v31 = v58;
      v3 &= ~0x20u;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v32 = v60;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    sub_140008F3C((int)a1, (__int64)L"powerResource->AcquirePower(m_device)", 88, 132, v25);
LABEL_42:
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( !*((_QWORD *)&v47 + 1)
      || _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) != 1 )
    {
      goto LABEL_91;
    }
    goto LABEL_89;
  }
  v33 = a1[46];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v48 = 0LL;
  if ( *((_QWORD *)&v47 + 1) )
  {
    v48 = v47;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 12LL));
  }
  if ( a1[53] )
    v34 = a1 + 48;
  else
    v34 = (_QWORD *)a1[49];
  sub_1400AF44C(a1 + 48, v34, &v48);
  if ( *((_QWORD *)&v48 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 16LL))(*((_QWORD *)&v48 + 1));
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v3 |= 0xC0u;
    v35 = &unk_1400D44E0;
    v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v63) + 16LL);
    if ( v36 )
      v35 = v36;
    v37 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v61);
    v38 = &unk_1400D44E0;
    v39 = *(void **)(*(_QWORD *)v37 + 16LL);
    if ( v39 )
      v38 = v39;
    v45 = (__int64)v38;
    LOBYTE(v38) = 4;
    sub_1400AA268(
      *(_QWORD *)(a1[22] + 16LL),
      (_DWORD)v38,
      5,
      18,
      (__int64)&unk_1400D8E60,
      v45,
      (__int64)v35,
      (__int64)qword_1400B7720,
      a1[53]);
  }
  if ( v3 < 0 )
  {
    v40 = v62;
    v3 &= ~0x80u;
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
  }
  if ( (v3 & 0x40) != 0 )
  {
    v41 = v64;
    if ( v64 )
    {
      if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
        if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
  }
  sub_1400A5180(a2, &v47);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 24LL))(v33);
  if ( *((_QWORD *)&v47 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
LABEL_89:
    v42 = *((_QWORD *)&v47 + 1);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 8LL))(*((_QWORD *)&v47 + 1));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v42 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 16LL))(*((_QWORD *)&v47 + 1));
  }
LABEL_91:
  if ( v5 )
  {
    sub_14005B5AC(v5);
    ExFreePool(v5);
  }
  return a2;
}
