void __fastcall sub_1400686DC(__int64 a1)
{
  __int64 v1; // r14
  __int64 *v2; // rbx
  int v3; // r12d
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // r13
  __int64 v9; // rsi
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  void *v13; // rdx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rax
  void *v21; // r15
  void *v22; // rsi
  void *v23; // rax
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rcx
  void *v29; // rax
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  __int64 v33; // [rsp+30h] [rbp-89h]
  __int64 v34; // [rsp+50h] [rbp-69h] BYREF
  volatile signed __int32 *v35; // [rsp+58h] [rbp-61h]
  char v36[8]; // [rsp+60h] [rbp-59h] BYREF
  volatile signed __int32 *v37; // [rsp+68h] [rbp-51h]
  char v38[8]; // [rsp+70h] [rbp-49h] BYREF
  volatile signed __int32 *v39; // [rsp+78h] [rbp-41h]
  char v40[8]; // [rsp+80h] [rbp-39h] BYREF
  volatile signed __int32 *v41; // [rsp+88h] [rbp-31h]
  char v42[8]; // [rsp+90h] [rbp-29h] BYREF
  volatile signed __int32 *v43; // [rsp+98h] [rbp-21h]
  char v44[8]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v45; // [rsp+C8h] [rbp+Fh]
  __int64 *v47; // [rsp+128h] [rbp+6Fh]
  _QWORD *v48; // [rsp+130h] [rbp+77h]
  __int64 v49; // [rsp+138h] [rbp+7Fh]

  v1 = a1;
  v2 = 0LL;
  v3 = 0;
  v47 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterruptsPool::EvtReleaseHardware", v1);
      if ( v5 )
        v2 = v5;
      v47 = v2;
    }
  }
  v6 = *(_QWORD *)(v1 + 392);
  v7 = (_QWORD *)ExAllocatePool2(64LL, 8LL, 1970304114LL);
  v48 = v7;
  v8 = v7;
  if ( v7 )
  {
    *v7 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v8 = 0LL;
    v48 = 0LL;
  }
  *(_DWORD *)(v1 + 408) = 0;
  if ( *(_QWORD *)(v1 + 504) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v1 + 176) + 16LL);
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v1 + 56) + 24LL))(
                                    v1 + 56,
                                    v36)
                     + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v1 + 56) + 16LL))(v1 + 56, v38);
      v13 = &unk_1400D44E0;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v13 = v14;
      v33 = (__int64)v13;
      LOBYTE(v13) = 1;
      sub_1400AA268(
        v9,
        (_DWORD)v13,
        4,
        15,
        (__int64)&unk_1400D89D0,
        (__int64)v10,
        v33,
        (__int64)qword_1400B7720,
        *(_QWORD *)(v1 + 504));
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v15 = v37;
      v3 &= ~2u;
      if ( v37 )
      {
        if ( !_InterlockedDecrement(v37 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( !_InterlockedDecrement(v15 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v16 = v39;
      v3 &= ~1u;
      if ( v39 )
      {
        if ( !_InterlockedDecrement(v39 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( !_InterlockedDecrement(v16 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    v17 = *(_QWORD *)(v1 + 472);
    v18 = v17;
    if ( *(_QWORD *)(v1 + 504) )
      v18 = v1 + 464;
    v49 = v18;
    if ( v17 != v18 )
    {
      do
      {
        sub_1400A27D4(&v34, v17 + 16);
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v3 |= 0xCu;
          v19 = v34 + 56;
          v20 = sub_14006CE14();
          v21 = &unk_1400D44E0;
          if ( *(_QWORD *)(v20 + 16) )
            v21 = *(void **)(v20 + 16);
          v22 = &unk_1400D44E0;
          v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v42)
                         + 16LL);
          if ( v23 )
            v22 = v23;
          v24 = &unk_1400D44E0;
          v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                        a1 + 56,
                                        v40)
                         + 16LL);
          if ( v25 )
            v24 = v25;
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v1 = a1;
          LOBYTE(v27) = 1;
          v28 = *(void **)(v26 + 16);
          v29 = &unk_1400D44E0;
          if ( v28 )
            v29 = v28;
          sub_1400ACF4C(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            v27,
            4,
            16,
            (__int64)&unk_1400D89D0,
            (__int64)v24,
            (__int64)v22,
            (__int64)qword_1400B7720,
            (__int64)v29,
            (__int64)v21);
          v18 = v49;
        }
        if ( (v3 & 8) != 0 )
        {
          v30 = v41;
          v3 &= ~8u;
          if ( v41 )
          {
            if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
        if ( (v3 & 4) != 0 )
        {
          v31 = v43;
          v3 &= ~4u;
          if ( v43 )
          {
            if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
              if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
            }
          }
        }
        if ( v35 )
        {
          if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
          {
            v32 = v35;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
          }
        }
        v17 = *(_QWORD *)(v17 + 8);
      }
      while ( v17 != v18 );
      v8 = v48;
    }
    v2 = v47;
  }
  sub_1400AE8FC(v44, v1 + 416);
  while ( *(_QWORD *)(v1 + 456) )
    sub_1400A2D78(v1 + 416);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 24LL))(*v8);
    ExFreePool(v8);
  }
  while ( v45 )
    sub_1400A2D78(v44);
  sub_1400A2980(v44);
  if ( v2 )
  {
    sub_14005B5AC(v2);
    ExFreePool(v2);
  }
}
