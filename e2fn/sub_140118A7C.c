__int64 __fastcall sub_140118A7C(_QWORD *a1)
{
  char v1; // di
  const wchar_t **v3; // r14
  const wchar_t **Pool2; // rax
  const wchar_t **v5; // rbx
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  const wchar_t *v15; // rsi
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  unsigned int v21; // ebx
  _QWORD *v22; // rax
  __int64 v24; // [rsp+40h] [rbp-19h] BYREF
  volatile signed __int32 *v25; // [rsp+48h] [rbp-11h]
  __int64 v26; // [rsp+50h] [rbp-9h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-1h]
  char v28[8]; // [rsp+60h] [rbp+7h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp+Fh]
  char v30[8]; // [rsp+70h] [rbp+17h] BYREF
  volatile signed __int32 *v31; // [rsp+78h] [rbp+1Fh]
  char v32[8]; // [rsp+80h] [rbp+27h] BYREF
  volatile signed __int32 *v33; // [rsp+88h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (const wchar_t **)ExAllocatePool2(64LL, 8LL, 1970304114LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = L"framework::DeviceContext::InitPnpEventsHistory";
      sub_1400B1BA8(L"framework::DeviceContext::InitPnpEventsHistory");
      v3 = v5;
    }
  }
  v6 = a1[51];
  sub_1400A27D4(&v24, a1 + 12);
  v7 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 8LL))(v6, v28);
  v8 = sub_1400B0080(&v26, 0x30303866u, (__int64)L"PNP Events history", &v24, v7);
  v9 = a1[64];
  a1[64] = v8[1];
  v10 = *v8;
  v8[1] = v9;
  v11 = a1[63];
  a1[63] = v10;
  *v8 = v11;
  v12 = v27;
  if ( v27 )
  {
    if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      v13 = v25;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  v14 = v29;
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  if ( a1[63] )
  {
    v22 = sub_1400A27D4(&v24, a1 + 63);
    sub_1400714D4(a1, v22, 0);
    v21 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = (const wchar_t *)&unk_1400D44E0;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v32)
                              + 16LL);
      if ( v17 )
        v16 = v17;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v30)
                              + 16LL);
      if ( v18 )
        v15 = v18;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 8u, 0x5Cu, (__int64)&unk_1400D91A8, v15, v16, L"m_pnpEventsHistory");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v19 = v31;
      v1 &= ~2u;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v20 = v33;
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
    sub_14002D980((int)a1, (__int64)L"m_pnpEventsHistory", 1062, 74);
    v21 = -1073741801;
  }
  if ( v3 )
  {
    sub_1400B1C04(*v3);
    ExFreePool(v3);
  }
  return v21;
}
