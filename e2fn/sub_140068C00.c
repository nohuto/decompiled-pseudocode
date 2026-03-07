void __fastcall sub_140068C00(_QWORD *a1, _QWORD *a2)
{
  char v2; // si
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  int v22; // eax
  void *v23; // rsi
  void *v24; // rax
  void *v25; // rdi
  void *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  void *v29; // rcx
  void *v30; // rax
  volatile signed __int32 *v31; // r15
  volatile signed __int32 *v32; // rsi
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  __int64 v35; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v36; // [rsp+60h] [rbp-21h]
  char v37[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v38; // [rsp+70h] [rbp-11h]
  char v39[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v40; // [rsp+80h] [rbp-1h]
  char v41[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v42; // [rsp+90h] [rbp+Fh]
  char v43[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v44; // [rsp+A0h] [rbp+1Fh]
  char v45[16]; // [rsp+A8h] [rbp+27h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterruptsPool::ReleaseInterrupt", (__int64)(a1 - 44));
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *a2 )
  {
    sub_1400AE8C4(&v35, a2);
    v16 = a1[5];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( a1[19] )
    {
      v17 = a1 + 14;
      v18 = a1 + 14;
    }
    else
    {
      v17 = (_QWORD *)a1[15];
      v18 = v17;
    }
    v19 = (_QWORD *)a1[15];
    v20 = v35;
    while ( v19 != v18 )
    {
      if ( v19[2] == v35 )
        goto LABEL_32;
      v19 = (_QWORD *)v19[1];
    }
    v19 = v18;
LABEL_32:
    if ( v19 == v17 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
      sub_140072788((unsigned int)L"os_resources::OsInterruptsPool::ReleaseInterrupt", 141, 257, v22, 0, 0);
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v23 = &unk_1400D44E0;
        v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 16LL))(a1 - 37, v43)
                       + 16LL);
        if ( v24 )
          v23 = v24;
        v25 = &unk_1400D44E0;
        v26 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 24LL))(a1 - 37, v41)
                       + 16LL);
        if ( v26 )
          v25 = v26;
        v27 = sub_14006CE14(v20);
        LOBYTE(v28) = 2;
        v29 = *(void **)(v27 + 16);
        v30 = &unk_1400D44E0;
        if ( v29 )
          v30 = v29;
        sub_1400A9338(
          *(_QWORD *)(*(a1 - 22) + 16LL),
          v28,
          4,
          25,
          (__int64)&unk_1400D89D0,
          (__int64)v25,
          (__int64)v23,
          (__int64)qword_1400B7720,
          (__int64)v30);
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v31 = v42;
        v2 &= ~8u;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v32 = v44;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
    }
    else
    {
      sub_14006D4C4(v35);
      sub_1400A440C(a1 + 8, a1[9], &v35);
      v21 = sub_1400A27D4(v45, &v35);
      sub_1400ACEB0(a1 + 14, v21);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
    }
    if ( v36 )
    {
      if ( !_InterlockedDecrement(v36 + 2) )
      {
        v33 = v36;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
        if ( !_InterlockedDecrement(v33 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 16LL))(a1 - 37, v39) + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*(a1 - 37) + 24LL))(a1 - 37, v37);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        v12,
        4,
        24,
        (__int64)&unk_1400D89D0,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"interrupt");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v38;
      v2 &= ~2u;
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
    if ( (v2 & 1) != 0 )
    {
      v15 = v40;
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
    sub_14003B970((_DWORD)a1 - 352, (__int64)L"interrupt", 239, 141);
  }
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
  v34 = (volatile signed __int32 *)a2[1];
  if ( v34 && !_InterlockedDecrement(v34 + 2) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
    if ( !_InterlockedDecrement(v34 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
  }
}
