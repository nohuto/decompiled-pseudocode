__int64 __fastcall sub_14012D450(__int64 a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rax
  volatile signed __int32 *v22; // rbx
  __int64 v24; // [rsp+48h] [rbp-19h] BYREF
  volatile signed __int32 *v25; // [rsp+50h] [rbp-11h]
  __int128 v26; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v27[8]; // [rsp+68h] [rbp+7h] BYREF
  volatile signed __int32 *v28; // [rsp+70h] [rbp+Fh]
  _BYTE v29[8]; // [rsp+78h] [rbp+17h] BYREF
  volatile signed __int32 *v30; // [rsp+80h] [rbp+1Fh]
  __int64 v31; // [rsp+88h] [rbp+27h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareAbstraction::AllocateComponents", a1 - 352);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = ExAllocatePool2(64LL, 32LL, 808466739LL);
  if ( !v6 || (v7 = sub_1400B1248(v6)) == 0 || (v8 = *(_QWORD *)(v7 + 16)) == 0 )
  {
    v8 = 0LL;
    v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v9 = *(volatile signed __int32 **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 48) = v8;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    sub_1400A27D4(&v24, (__int64 *)(a1 - 256));
    v17 = ExAllocatePool2(64LL, 32LL, 808466740LL);
    if ( v17
      && (v18 = sub_1400B12AC(v17, &v24, (__int64 *)(a1 + 48)), (v19 = (volatile signed __int32 *)v18) != 0LL)
      && (v20 = *(_QWORD *)(v18 + 16)) != 0 )
    {
      *((_QWORD *)&v26 + 1) = v19;
      *(_QWORD *)&v26 = v20;
    }
    else
    {
      v19 = 0LL;
      v26 = 0LL;
    }
    v21 = sub_1400A27D4(&v31, (__int64 *)&v26);
    sub_1400714D4((_QWORD *)(a1 - 352), v21, 0);
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        v22 = v25;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
    v16 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v29)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             v27)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xAu,
        0xCu,
        (__int64)&unk_1400D9790,
        v10,
        v11,
        L"m_configuration");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v14 = v28;
      v1 &= ~2u;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v15 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000B1BC(a1 - 352, (__int64)L"m_configuration", 93, 81);
    v16 = -1073741801;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v16;
}
