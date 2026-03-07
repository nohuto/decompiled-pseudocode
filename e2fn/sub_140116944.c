__int64 __fastcall sub_140116944(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  unsigned int v17; // ebx
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-40h]
  _BYTE v21[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceContext::CreateObjecsInfoAccessor", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = ExAllocatePool2(64LL, 32LL, 808465719LL);
  if ( !v6 || (v7 = sub_1400AFC10(v6)) == 0 || (v8 = *(_QWORD *)(v7 + 16)) == 0 )
  {
    v8 = 0LL;
    v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v9 = (volatile signed __int32 *)a1[62];
  a1[62] = v7;
  a1[61] = v8;
  if ( v9 )
  {
    if ( !_InterlockedDecrement(v9 + 2) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( !_InterlockedDecrement(v9 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = a1[61];
  if ( v10 )
  {
    sub_14014C96C(v10, a1);
    v17 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v21)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v19)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        8u,
        0x40u,
        (__int64)&unk_1400D91A8,
        v11,
        v12,
        L"m_objectsInfoAccessor");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v15 = v20;
      v1 &= ~2u;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v16 = v22;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14000B51C((int)a1, (__int64)L"m_objectsInfoAccessor", 447, 74);
    v17 = -1073741811;
  }
  if ( v3 )
  {
    sub_140073F78(v3);
    ExFreePool(v3);
  }
  return v17;
}
