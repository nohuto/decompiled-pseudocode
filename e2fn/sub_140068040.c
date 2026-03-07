_QWORD *__fastcall sub_140068040(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 *a4, __int64 a5)
{
  char v5; // r14
  __int64 *v7; // r15
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  void *v14; // rsi
  void *v15; // r14
  void *v16; // rax
  __int64 v17; // rax
  void *v18; // rdx
  void *v19; // rax
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  _QWORD *v22; // r14
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  volatile signed __int32 **v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  void *v31; // r14
  void *v32; // rsi
  void *v33; // rax
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rdi
  volatile signed __int32 *v38; // rdi
  volatile signed __int32 *v39; // rcx
  volatile signed __int32 *v40; // rdi
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 **v42; // r14
  volatile signed __int32 *v43; // rdi
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  __int64 v47; // [rsp+30h] [rbp-89h]
  __int64 v48; // [rsp+58h] [rbp-61h] BYREF
  volatile signed __int32 *v49; // [rsp+60h] [rbp-59h]
  _QWORD v50[2]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v51[2]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v52[8]; // [rsp+88h] [rbp-31h] BYREF
  volatile signed __int32 *v53; // [rsp+90h] [rbp-29h]
  _BYTE v54[8]; // [rsp+98h] [rbp-21h] BYREF
  volatile signed __int32 *v55; // [rsp+A0h] [rbp-19h]
  _BYTE v56[8]; // [rsp+A8h] [rbp-11h] BYREF
  volatile signed __int32 *v57; // [rsp+B0h] [rbp-9h]
  _BYTE v58[8]; // [rsp+B8h] [rbp-1h] BYREF
  volatile signed __int32 *v59; // [rsp+C0h] [rbp+7h]
  int v60; // [rsp+118h] [rbp+5Fh]

  v5 = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterruptsPool::AllocateInterrupt", (__int64)(a1 - 44));
      if ( v11 )
        v7 = v11;
    }
  }
  v12 = a1[5];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( !a1[13] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = a1 - 37;
      v14 = &unk_1400D44E0;
      v15 = &unk_1400D44E0;
      if ( *(_QWORD *)(a5 + 16) )
        v15 = *(void **)(a5 + 16);
      v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(v13, v54) + 16LL);
      if ( v16 )
        v14 = v16;
      v17 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v13 + 24LL))(a1 - 37, v52);
      v18 = &unk_1400D44E0;
      v19 = *(void **)(*(_QWORD *)v17 + 16LL);
      if ( v19 )
        v18 = v19;
      v47 = (__int64)v18;
      LOBYTE(v18) = 2;
      sub_1400A9338(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        (_DWORD)v18,
        4,
        22,
        (__int64)&unk_1400D89D0,
        v47,
        (__int64)v14,
        (__int64)qword_1400B7720,
        (__int64)v15);
      v5 = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v20 = v53;
      v5 &= ~2u;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v21 = v55;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    v22 = a2;
    *a2 = 0LL;
    a2[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
    if ( v7 )
    {
      sub_14005B5AC(v7);
      ExFreePool(v7);
    }
    v23 = (volatile signed __int32 *)a3[1];
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    v24 = (volatile signed __int32 *)a4[1];
LABEL_65:
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    return v22;
  }
  sub_1400A27D4(&v48, a1[9] + 16LL);
  if ( a1[13] )
    sub_1400A2D78(a1 + 8);
  if ( a1[19] )
    v25 = a1 + 14;
  else
    v25 = (_QWORD *)a1[15];
  sub_1400A440C(a1 + 14, v25, &v48);
  v26 = a4[1];
  a4[1] = 0LL;
  v50[1] = v26;
  v27 = *a4;
  *a4 = 0LL;
  v28 = (volatile signed __int32 **)(a3 + 1);
  v50[0] = v27;
  v51[1] = a3[1];
  v29 = *a3;
  *a3 = 0LL;
  v30 = v48;
  a3[1] = 0LL;
  v51[0] = v29;
  v60 = sub_14006C720(v30, v51, v50, a5);
  if ( v60 )
  {
    sub_1400A440C(a1 + 8, a1[9], &v48);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = &unk_1400D44E0;
      v32 = &unk_1400D44E0;
      v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(a1 - 37, v58) + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(a1 - 37, v56);
      LOBYTE(v35) = 2;
      v36 = *(void **)(*(_QWORD *)v34 + 16LL);
      if ( v36 )
        v31 = v36;
      sub_1400A5E80(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        v35,
        4,
        23,
        (__int64)&unk_1400D89D0,
        (__int64)v31,
        (__int64)v32,
        (__int64)qword_1400B7720,
        v60);
      v5 = 12;
    }
    if ( (v5 & 8) != 0 )
    {
      v37 = v57;
      v5 &= ~8u;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v38 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    v22 = a2;
    v39 = v49;
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        v40 = v49;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
    if ( v7 )
    {
      sub_14005B5AC(v7);
      ExFreePool(v7);
    }
    v41 = (volatile signed __int32 *)a3[1];
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
        if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
    v24 = (volatile signed __int32 *)a4[1];
    goto LABEL_65;
  }
  sub_1400A5180(a2, &v48);
  v42 = (volatile signed __int32 **)(a3 + 1);
  if ( v49 )
  {
    if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
    {
      v43 = v49;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
      if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
        v42 = (volatile signed __int32 **)(a3 + 1);
      }
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  if ( v7 )
  {
    sub_14005B5AC(v7);
    ExFreePool(v7);
    v28 = v42;
  }
  v44 = *v28;
  if ( *v28 )
  {
    if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
      if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
    }
  }
  v45 = (volatile signed __int32 *)a4[1];
  if ( v45 )
  {
    if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
      if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
    }
  }
  return a2;
}
