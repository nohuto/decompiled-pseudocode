__int64 __fastcall sub_1400715AC(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v4; // bl
  __int64 Pool2; // rax
  __int64 v10; // rax
  volatile signed __int32 *v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // r14d
  void *v14; // r15
  void *v15; // rdi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rax
  void *v23; // r15
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rbx
  _BYTE v32[8]; // [rsp+58h] [rbp-70h] BYREF
  volatile signed __int32 *v33; // [rsp+60h] [rbp-68h]
  _BYTE v34[8]; // [rsp+68h] [rbp-60h] BYREF
  volatile signed __int32 *v35; // [rsp+70h] [rbp-58h]
  _BYTE v36[8]; // [rsp+78h] [rbp-50h] BYREF
  volatile signed __int32 *v37; // [rsp+80h] [rbp-48h]
  _BYTE v38[8]; // [rsp+88h] [rbp-40h] BYREF
  volatile signed __int32 *v39; // [rsp+90h] [rbp-38h]

  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 32LL, 808476977LL);
  if ( Pool2
    && (v10 = sub_1400A26B0(Pool2), (v11 = (volatile signed __int32 *)v10) != 0LL)
    && (v12 = *(_QWORD *)(v10 + 16)) != 0 )
  {
    v13 = sub_140002310(*(_QWORD *)(v10 + 16), a2, a3, a4);
    if ( v13 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = &unk_1400D44E0;
        v15 = &unk_1400D44E0;
        v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v34) + 16LL);
        if ( v16 )
          v15 = v16;
        v17 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v32);
        LOBYTE(v18) = 2;
        v19 = *(void **)(*(_QWORD *)v17 + 16LL);
        if ( v19 )
          v14 = v19;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v18,
          1,
          11,
          (__int64)&unk_1400D9068,
          (__int64)v14,
          (__int64)v15,
          (__int64)L"ifrLogger->Initialize(name, totalBufferSize, errorPartitionSize)",
          v13);
        v4 = 12;
      }
      if ( (v4 & 8) != 0 )
      {
        v20 = v33;
        v4 &= ~8u;
        if ( v33 )
        {
          if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      if ( (v4 & 4) != 0 )
      {
        v21 = v35;
        if ( v35 )
        {
          if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      sub_14000A164((int)a1, (__int64)L"ifrLogger->Initialize(name, totalBufferSize, errorPartitionSize)", 157, 8, v13);
    }
    else
    {
      v22 = (volatile signed __int32 *)a1[23];
      v13 = 0;
      a1[23] = v11;
      v11 = v22;
      a1[22] = v12;
    }
  }
  else
  {
    v11 = 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = &unk_1400D44E0;
      v24 = &unk_1400D44E0;
      v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v38) + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v36);
      LOBYTE(v27) = 2;
      v28 = *(void **)(*(_QWORD *)v26 + 16LL);
      if ( v28 )
        v23 = v28;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v27,
        1,
        10,
        (__int64)&unk_1400D9068,
        (__int64)v23,
        (__int64)v24,
        (__int64)L"ifrLogger");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v29 = v37;
      v4 &= ~2u;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v30 = v39;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_14003B970((int)a1, (__int64)L"ifrLogger", 156, 8);
    v13 = -1073741801;
  }
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return v13;
}
