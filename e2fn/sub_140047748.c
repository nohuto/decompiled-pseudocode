__int64 __fastcall sub_140047748(__int64 a1, _DWORD *a2)
{
  char v2; // r14
  __int64 *v3; // r15
  _DWORD *v4; // rdi
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int v8; // r12d
  void *v9; // r14
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  void *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rax
  void *v20; // r8
  void *v21; // rdx
  void *v22; // rax
  void *v23; // rax
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  void *v26; // rdi
  void *v27; // rax
  __int64 v28; // rax
  int v29; // edx
  void *v30; // rax
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int64 v34; // [rsp+38h] [rbp-59h]
  _BYTE v35[8]; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v36; // [rsp+60h] [rbp-31h]
  _BYTE v37[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v38; // [rsp+70h] [rbp-21h]
  _BYTE v39[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v40; // [rsp+80h] [rbp-11h]
  _BYTE v41[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v42; // [rsp+90h] [rbp-1h]
  _BYTE v43[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v44; // [rsp+A0h] [rbp+Fh]
  _BYTE v45[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v46; // [rsp+B0h] [rbp+1Fh]

  v2 = 0;
  v3 = 0LL;
  v4 = a2;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareMacAddress::GetDsdtTableSize", a1);
      if ( v7 )
        v3 = v7;
    }
  }
  v8 = sub_140048FB8(0LL, 0LL, v4);
  if ( v8 == -1073741789 )
  {
    v17 = &unk_1400D44E0;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v41);
      v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v39);
      v20 = &unk_1400D44E0;
      v21 = &unk_1400D44E0;
      v22 = *(void **)(*(_QWORD *)v19 + 16LL);
      if ( v22 )
        v20 = v22;
      v23 = *(void **)(v18 + 16);
      v4 = a2;
      if ( v23 )
        v21 = v23;
      v34 = (__int64)v21;
      LOBYTE(v21) = 4;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        (_DWORD)v21,
        14,
        25,
        (__int64)&unk_1400D72A0,
        (__int64)v20,
        v34,
        (__int64)qword_1400B7720,
        *a2);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v24 = v40;
      v2 &= ~8u;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v25 = v42;
      v2 &= ~4u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( *v4 >= 0x24u )
    {
      v8 = 0;
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v2 |= 0x30u;
        v26 = &unk_1400D44E0;
        v27 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v45)
                       + 16LL);
        if ( v27 )
          v26 = v27;
        v28 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v43);
        LOBYTE(v29) = 2;
        v30 = *(void **)(*(_QWORD *)v28 + 16LL);
        if ( v30 )
          v17 = v30;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v29,
          14,
          26,
          (__int64)&unk_1400D72A0,
          (__int64)v17,
          (__int64)v26,
          (__int64)qword_1400B7720);
      }
      if ( (v2 & 0x20) != 0 )
      {
        v31 = v44;
        v2 &= ~0x20u;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      if ( (v2 & 0x10) != 0 )
      {
        v32 = v46;
        if ( v46 )
        {
          if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
      }
      v8 = -1073741453;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = &unk_1400D44E0;
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v37)
                     + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v35);
      LOBYTE(v13) = 2;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v9 = v14;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v13,
        14,
        24,
        (__int64)&unk_1400D72A0,
        (__int64)v9,
        (__int64)v10,
        (__int64)qword_1400B7720,
        v8);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v15 = v36;
      v2 &= ~2u;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v16 = v38;
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
  }
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v8;
}
