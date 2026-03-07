__int64 __fastcall sub_140066A70(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  char v7; // di
  char v8; // si
  unsigned int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // rbx
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rdx
  void *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  void *v19; // r15
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  __int64 v28; // [rsp+30h] [rbp-59h]
  _BYTE v29[8]; // [rsp+68h] [rbp-21h] BYREF
  volatile signed __int32 *v30; // [rsp+70h] [rbp-19h]
  _BYTE v31[8]; // [rsp+78h] [rbp-11h] BYREF
  volatile signed __int32 *v32; // [rsp+80h] [rbp-9h]
  _BYTE v33[8]; // [rsp+88h] [rbp-1h] BYREF
  volatile signed __int32 *v34; // [rsp+90h] [rbp+7h]
  _BYTE v35[8]; // [rsp+98h] [rbp+Fh] BYREF
  volatile signed __int32 *v36; // [rsp+A0h] [rbp+17h]
  int v37; // [rsp+E8h] [rbp+5Fh] BYREF
  __int64 v38; // [rsp+F0h] [rbp+67h]
  char v39; // [rsp+F8h] [rbp+6Fh]

  v39 = a3;
  v38 = a2;
  v7 = a3;
  v8 = 0;
  v37 = 0;
  v9 = 52;
  v10 = a5;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 && LOWORD(DeviceObject->DeviceType) )
  {
    v11 = a1 - 296;
    v12 = &unk_1400D44E0;
    v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                  a1 - 296,
                                  v31)
                   + 16LL);
    if ( v13 )
      v12 = v13;
    v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 24LL))(a1 - 296, v29);
    v15 = &unk_1400D44E0;
    v16 = *(void **)(*(_QWORD *)v14 + 16LL);
    if ( v16 )
      v15 = v16;
    v28 = (__int64)v15;
    LOBYTE(v15) = 5;
    sub_1400AE3A8(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      (_DWORD)v15,
      4,
      17,
      (__int64)&unk_1400D8818,
      v28,
      (__int64)v12,
      (__int64)qword_1400B7720,
      v10,
      v39,
      a4);
    v7 = v39;
    v8 = 3;
  }
  if ( (v8 & 2) != 0 )
  {
    v17 = v30;
    v8 &= ~2u;
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v18 = v32;
    v8 &= ~1u;
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  do
  {
    (*(void (__fastcall **)(__int64, int *, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(a1, &v37, v9, 2LL);
    if ( (_BYTE)v37 == v7 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(a1, v38, v9 + a4, v10);
      return 0LL;
    }
    v9 = BYTE1(v37);
  }
  while ( BYTE1(v37) );
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 |= 0xCu;
    v19 = &unk_1400D44E0;
    v20 = &unk_1400D44E0;
    v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                  a1 - 296,
                                  v35)
                   + 16LL);
    if ( v21 )
      v20 = v21;
    v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v33);
    LOBYTE(v23) = 2;
    v24 = *(void **)(*(_QWORD *)v22 + 16LL);
    if ( v24 )
      v19 = v24;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      v23,
      4,
      18,
      (__int64)&unk_1400D8818,
      (__int64)v19,
      (__int64)v20,
      (__int64)qword_1400B7720,
      v39);
  }
  if ( (v8 & 8) != 0 )
  {
    v25 = v34;
    v8 &= ~8u;
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
  }
  if ( (v8 & 4) != 0 )
  {
    v26 = v36;
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
  }
  return 3221226021LL;
}
