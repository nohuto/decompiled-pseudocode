__int64 __fastcall sub_14007CBEC(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  char v3; // di
  __int64 *v5; // rsi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  void *v10; // r14
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // r14
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  void *v21; // r14
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // r14
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rdi
  volatile signed __int32 *v36; // rdi
  _BYTE v37[8]; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v38; // [rsp+48h] [rbp-60h]
  _BYTE v39[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v40; // [rsp+58h] [rbp-50h]
  _BYTE v41[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v42; // [rsp+68h] [rbp-40h]
  _BYTE v43[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v44; // [rsp+78h] [rbp-30h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::RegisterWrapper::Bind", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v39) + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v37);
      LOBYTE(v14) = 2;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v10 = v15;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v14,
        10,
        10,
        (__int64)&unk_1400D9898,
        (__int64)v10,
        (__int64)v11,
        (__int64)L"mmioAccessor");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v16 = v38;
      v3 &= ~2u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v17 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 58, 114);
LABEL_42:
    if ( v5 )
    {
      sub_14000BFA4(v5);
      ExFreePool(v5);
    }
    v29 = (volatile signed __int32 *)a2[1];
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    v30 = (volatile signed __int32 *)a3[1];
    if ( v30 && _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
    }
    return 3221225485LL;
  }
  v18 = a1[47];
  a1[47] = a2[1];
  v19 = *a2;
  a2[1] = v18;
  v20 = a1[46];
  a1[46] = v19;
  *a2 = v20;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = &unk_1400D44E0;
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v43) + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v41);
      LOBYTE(v25) = 2;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      if ( v26 )
        v21 = v26;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v25,
        10,
        11,
        (__int64)&unk_1400D9898,
        (__int64)v21,
        (__int64)v22,
        (__int64)L"lockFactory");
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v27 = v42;
      v3 &= ~8u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v28 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    sub_14000B954((int)a1, (__int64)L"lockFactory", 61, 114);
    goto LABEL_42;
  }
  v32 = a1[51];
  a1[51] = a3[1];
  v33 = *a3;
  a3[1] = v32;
  v34 = a1[50];
  a1[50] = v33;
  *a3 = v34;
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  v35 = (volatile signed __int32 *)a2[1];
  if ( v35 )
  {
    if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  v36 = (volatile signed __int32 *)a3[1];
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
      if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  return 0LL;
}
