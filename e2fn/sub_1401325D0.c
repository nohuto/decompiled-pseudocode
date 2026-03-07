__int64 __fastcall sub_1401325D0(_QWORD *a1, __int64 *a2)
{
  char v2; // si
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rdi
  int v16; // ebx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD v22[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-78h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-70h]
  _BYTE v25[8]; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp-60h]
  __int64 v27; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v28[6]; // [rsp+80h] [rbp-48h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400736C0(Pool2, (__int64)L"framework::RegistryConfigurationInitializer::ReadRegistry", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *a2 )
  {
    v15 = a1[26];
    v28[2] = 0xA5A5A5A5A5000049uLL;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v17 = sub_1400A27D4(&v27, a2);
    sub_1401315A4((__int64)a1, v17);
    v18 = sub_1400A27D4(v28, a2);
    sub_140130B54((__int64)a1, v18);
    v19 = a2[1];
    a2[1] = 0LL;
    v22[1] = v19;
    v20 = *a2;
    *a2 = 0LL;
    v22[0] = v20;
    sub_1401328C4(a1, v22);
    NaptrDnsRecordConvert(a1);
    if ( !v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v4 )
    {
      sub_140073F78(v4);
      ExFreePool(v4);
    }
    v14 = (volatile signed __int32 *)a2[1];
    if ( v14 )
      goto LABEL_32;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v25)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v23)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        4u,
        8u,
        0xBu,
        (__int64)&unk_1400D99C8,
        v8,
        v9,
        (const wchar_t *)qword_14014EC70);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v12 = v24;
      v2 &= ~2u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v13 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( v4 )
    {
      sub_140073F78(v4);
      ExFreePool(v4);
    }
    v14 = (volatile signed __int32 *)a2[1];
    if ( v14 )
    {
LABEL_32:
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  return 0LL;
}
