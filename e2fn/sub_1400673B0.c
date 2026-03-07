_QWORD *__fastcall sub_1400673B0(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  char v6; // r14
  __int64 *v8; // rsi
  _QWORD *Pool2; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // r12d
  void *v21; // r14
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rax
  volatile signed __int32 *v30; // rcx
  void *v31; // r14
  void *v32; // rdi
  void *v33; // rax
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  __int64 v40; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v41; // [rsp+68h] [rbp-29h]
  _BYTE v42[8]; // [rsp+70h] [rbp-21h] BYREF
  volatile signed __int32 *v43; // [rsp+78h] [rbp-19h]
  _BYTE v44[8]; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v45; // [rsp+88h] [rbp-9h]
  _BYTE v46[8]; // [rsp+90h] [rbp-1h] BYREF
  volatile signed __int32 *v47; // [rsp+98h] [rbp+7h]
  _BYTE v48[8]; // [rsp+A0h] [rbp+Fh] BYREF
  volatile signed __int32 *v49; // [rsp+A8h] [rbp+17h]

  v6 = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v13 = sub_14005B310(Pool2, (__int64)L"os_resources::CommonBufferFactory::AllocateAlignedBuffer", a1 - 360);
      if ( v13 )
        v8 = v13;
    }
  }
  v14 = a6;
  if ( !a6 )
    v14 = a1 - 360;
  v15 = ExAllocatePool2(64LL, 32LL, 808466226LL);
  if ( !v15
    || (v16 = sub_1400AE684(v15, v14, a5), (v17 = (volatile signed __int32 *)v16) == 0LL)
    || (v18 = *(_QWORD *)(v16 + 16)) == 0 )
  {
    v41 = 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = &unk_1400D44E0;
      v32 = &unk_1400D44E0;
      v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 304) + 16LL))(
                                    a1 - 304,
                                    v48)
                     + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 304) + 24LL))(a1 - 304, v46);
      LOBYTE(v35) = 2;
      v36 = *(void **)(*(_QWORD *)v34 + 16LL);
      if ( v36 )
        v31 = v36;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 184) + 16LL),
        v35,
        4,
        15,
        (__int64)&unk_1400D88F8,
        (__int64)v31,
        (__int64)v32,
        (__int64)L"commonBuffer");
      v6 = 3;
    }
    if ( (v6 & 2) != 0 )
    {
      v37 = v47;
      v6 &= ~2u;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v38 = v49;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_14000BA2C(a1 - 360, (__int64)L"commonBuffer", 162, 128);
    *a2 = 0LL;
    a2[1] = 0LL;
LABEL_50:
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
        if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
        {
          v30 = v41;
          v29 = *(_QWORD *)v41;
          goto LABEL_54;
        }
      }
    }
    goto LABEL_55;
  }
  v19 = *(_QWORD *)(a1 + 16);
  v41 = (volatile signed __int32 *)v16;
  v40 = v18;
  v20 = sub_14006BEF4(v18, a3, v19, a4);
  if ( v20 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = &unk_1400D44E0;
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 304) + 16LL))(
                                    a1 - 304,
                                    v44)
                     + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 304) + 24LL))(a1 - 304, v42);
      LOBYTE(v25) = 2;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      if ( v26 )
        v21 = v26;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 184) + 16LL),
        v25,
        4,
        16,
        (__int64)&unk_1400D88F8,
        (__int64)v21,
        (__int64)v22,
        (__int64)L"commonBuffer->AllocateAligned(length, m_dmaEnabler, alignmentRequirement)",
        v20);
      v6 = 12;
    }
    if ( (v6 & 8) != 0 )
    {
      v27 = v43;
      v6 &= ~8u;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v28 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    sub_140039B9C(
      a1 - 360,
      (__int64)L"commonBuffer->AllocateAligned(length, m_dmaEnabler, alignmentRequirement)",
      168,
      128,
      v20);
    *a2 = 0LL;
    a2[1] = 0LL;
    goto LABEL_50;
  }
  sub_1400A5180(a2, &v40);
  if ( v41 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
      {
        v29 = *(_QWORD *)v17;
        v30 = v17;
LABEL_54:
        (*(void (__fastcall **)(volatile signed __int32 *))(v29 + 16))(v30);
      }
    }
  }
LABEL_55:
  if ( v8 )
  {
    sub_14005B5AC(v8);
    ExFreePool(v8);
  }
  return a2;
}
