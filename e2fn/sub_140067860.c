_QWORD *__fastcall sub_140067860(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char v5; // r14
  __int64 *v7; // rsi
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r12d
  void *v20; // r14
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  void *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  __int64 v28; // rax
  volatile signed __int32 *v29; // rcx
  void *v30; // r14
  void *v31; // rdi
  void *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  void *v35; // rax
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  __int64 v39; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v40; // [rsp+68h] [rbp-21h]
  _BYTE v41[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v42; // [rsp+78h] [rbp-11h]
  _BYTE v43[8]; // [rsp+80h] [rbp-9h] BYREF
  volatile signed __int32 *v44; // [rsp+88h] [rbp-1h]
  _BYTE v45[8]; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v46; // [rsp+98h] [rbp+Fh]
  _BYTE v47[8]; // [rsp+A0h] [rbp+17h] BYREF
  volatile signed __int32 *v48; // [rsp+A8h] [rbp+1Fh]

  v5 = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_14005B310(Pool2, (__int64)L"os_resources::CommonBufferFactory::AllocateBuffer", a1 - 360);
      if ( v12 )
        v7 = v12;
    }
  }
  v13 = a5;
  if ( !a5 )
    v13 = a1 - 360;
  v14 = ExAllocatePool2(64LL, 32LL, 808466225LL);
  if ( !v14
    || (v15 = sub_1400AE684(v14, v13, a4), (v16 = (volatile signed __int32 *)v15) == 0LL)
    || (v17 = *(_QWORD *)(v15 + 16)) == 0 )
  {
    v40 = 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v30 = &unk_1400D44E0;
      v31 = &unk_1400D44E0;
      v32 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 304) + 16LL))(
                                    a1 - 304,
                                    v47)
                     + 16LL);
      if ( v32 )
        v31 = v32;
      v33 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 304) + 24LL))(a1 - 304, v45);
      LOBYTE(v34) = 2;
      v35 = *(void **)(*(_QWORD *)v33 + 16LL);
      if ( v35 )
        v30 = v35;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 184) + 16LL),
        v34,
        4,
        13,
        (__int64)&unk_1400D88F8,
        (__int64)v30,
        (__int64)v31,
        (__int64)L"commonBuffer");
      v5 = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v36 = v46;
      v5 &= ~2u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v37 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    sub_14000BA2C(a1 - 360, (__int64)L"commonBuffer", 133, 128);
    *a2 = 0LL;
    a2[1] = 0LL;
LABEL_50:
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
        {
          v29 = v40;
          v28 = *(_QWORD *)v40;
          goto LABEL_54;
        }
      }
    }
    goto LABEL_55;
  }
  v18 = *(_QWORD *)(a1 + 16);
  v40 = (volatile signed __int32 *)v15;
  v39 = v17;
  v19 = sub_14006BC94(v17, a3, v18);
  if ( v19 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = &unk_1400D44E0;
      v21 = &unk_1400D44E0;
      v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 304) + 16LL))(
                                    a1 - 304,
                                    v43)
                     + 16LL);
      if ( v22 )
        v21 = v22;
      v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 304) + 24LL))(a1 - 304, v41);
      LOBYTE(v24) = 2;
      v25 = *(void **)(*(_QWORD *)v23 + 16LL);
      if ( v25 )
        v20 = v25;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 184) + 16LL),
        v24,
        4,
        14,
        (__int64)&unk_1400D88F8,
        (__int64)v20,
        (__int64)v21,
        (__int64)L"commonBuffer->Allocate(length, m_dmaEnabler)",
        v19);
      v5 = 12;
    }
    if ( (v5 & 8) != 0 )
    {
      v26 = v42;
      v5 &= ~8u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v27 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_140021FDC(a1 - 360, (__int64)L"commonBuffer->Allocate(length, m_dmaEnabler)", 139, 128, v19);
    *a2 = 0LL;
    a2[1] = 0LL;
    goto LABEL_50;
  }
  sub_1400A5180(a2, &v39);
  if ( v40 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
      {
        v28 = *(_QWORD *)v16;
        v29 = v16;
LABEL_54:
        (*(void (__fastcall **)(volatile signed __int32 *))(v28 + 16))(v29);
      }
    }
  }
LABEL_55:
  if ( v7 )
  {
    sub_14005B5AC(v7);
    ExFreePool(v7);
  }
  return a2;
}
