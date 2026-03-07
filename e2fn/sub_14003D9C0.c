__int64 __fastcall sub_14003D9C0(_QWORD *a1)
{
  char v1; // si
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r15d
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  void *v13; // rcx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  int v16; // r8d
  int v17; // edi
  __m128i v18; // xmm1
  const __m128i *v19; // rax
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm1
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  void *v27; // r8
  void *v28; // rdx
  void *v29; // rax
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  void *v32; // rdi
  void *v33; // rax
  __int64 v34; // rax
  void *v35; // rdx
  void *v36; // rax
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  __int64 v40; // [rsp+38h] [rbp-D0h]
  __int64 v41; // [rsp+38h] [rbp-D0h]
  const wchar_t *v42; // [rsp+58h] [rbp-B0h]
  __int16 v43; // [rsp+58h] [rbp-B0h]
  __int64 v44; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v45; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v47; // [rsp+78h] [rbp-90h]
  _BYTE v48[8]; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v49; // [rsp+88h] [rbp-80h]
  _BYTE v50[8]; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v51; // [rsp+98h] [rbp-70h]
  _BYTE v52[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v53; // [rsp+A8h] [rbp-60h]
  _BYTE v54[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v55; // [rsp+B8h] [rbp-50h]
  _WORD v56[64]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareNvm::ValidateNvmChecksum", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = sub_14003BBAC((__int64)a1);
  if ( v6 )
  {
    v42 = L"AcquireNvmOwnership()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 16LL))(a1 + 7, &v46) + 16LL);
      if ( v8 )
        v7 = v8;
      v9 = *(_QWORD *)(a1[22] + 16LL);
      v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 24LL))(a1 + 7, &v44);
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      v13 = &unk_1400D44E0;
      if ( v12 )
        v13 = v12;
      sub_1400A5E80(
        v9,
        v11,
        14,
        26,
        (__int64)&unk_1400D71D0,
        (__int64)v13,
        (__int64)v7,
        (__int64)L"AcquireNvmOwnership()",
        v6);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v14 = v45;
      v1 &= ~2u;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v15 = v47;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = 216;
LABEL_63:
    sub_14003B824((int)a1, (__int64)v42, v16, 155, v6);
    goto LABEL_65;
  }
  sub_1400B6C40(v56, 0LL, 128LL);
  v17 = sub_14003CEB0(a1, 0, 0x40u, v56);
  if ( !v17 )
  {
    v18 = 0LL;
    v19 = (const __m128i *)v56;
    v20 = 8LL;
    do
    {
      v21 = _mm_loadu_si128(v19++);
      v18 = _mm_add_epi16(v18, v21);
      --v20;
    }
    while ( v20 );
    v22 = _mm_add_epi16(v18, _mm_srli_si128(v18, 8));
    v23 = _mm_add_epi16(v22, _mm_srli_si128(v22, 4));
    v43 = _mm_cvtsi128_si32(_mm_add_epi16(v23, _mm_srli_si128(v23, 2)));
    if ( v43 != -17734 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v24 = *(_QWORD *)(a1[22] + 16LL);
        v25 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v50);
        v26 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v48);
        v27 = &unk_1400D44E0;
        v28 = &unk_1400D44E0;
        v29 = *(void **)(*(_QWORD *)v26 + 16LL);
        if ( v29 )
          v27 = v29;
        if ( *(_QWORD *)(v25 + 16) )
          v28 = *(void **)(v25 + 16);
        v40 = (__int64)v28;
        LOBYTE(v28) = 2;
        sub_1400A6AA8(
          v24,
          (_DWORD)v28,
          14,
          27,
          (__int64)&unk_1400D71D0,
          (__int64)v27,
          v40,
          (__int64)qword_1400B7720,
          v43,
          186);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v30 = v49;
        v1 &= ~8u;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v31 = v51;
        v1 &= ~4u;
        if ( v51 )
        {
          if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      v17 = -1073741661;
    }
  }
  v6 = sub_14003D768((__int64)a1);
  if ( v6 )
  {
    v42 = L"ReleaseNvmOwnership()";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 |= 0x30u;
      v32 = &unk_1400D44E0;
      v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v52) + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v54);
      v35 = &unk_1400D44E0;
      v36 = *(void **)(*(_QWORD *)v34 + 16LL);
      if ( v36 )
        v35 = v36;
      v41 = (__int64)v35;
      LOBYTE(v35) = 2;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        (_DWORD)v35,
        14,
        28,
        (__int64)&unk_1400D71D0,
        (__int64)v32,
        v41,
        (__int64)L"ReleaseNvmOwnership()",
        v6);
    }
    if ( (v1 & 0x20) != 0 )
    {
      v37 = v53;
      v1 &= ~0x20u;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v38 = v55;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    v16 = 242;
    goto LABEL_63;
  }
  v6 = v17;
LABEL_65:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v6;
}
