__int64 __fastcall sub_140123F70(__int64 a1, __int64 a2)
{
  char v4; // bl
  const wchar_t *v5; // rbp
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rax
  const wchar_t *v8; // rax
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rax
  const wchar_t *v12; // rbp
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rbx
  unsigned int v18; // edi
  volatile signed __int32 *v19; // rbx
  __int64 v21; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-60h]
  _BYTE v23[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-50h]
  _BYTE v25[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp-40h]
  _BYTE v27[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v28; // [rsp+78h] [rbp-30h]
  _BYTE v29[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v30; // [rsp+88h] [rbp-20h]

  v4 = 0;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 400) + 24LL))(*(_QWORD *)(a1 + 400), &v21);
  if ( v21 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    if ( v11 )
    {
      *(_DWORD *)(a2 + 4) = 0;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 28) = 0x80000000;
      *(_DWORD *)a2 = 32;
      *(_QWORD *)(a2 + 8) = v11;
      *(_DWORD *)(a2 + 24) = 2;
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 376);
      v18 = 0;
      goto LABEL_39;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v29)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v27)
                              + 16LL);
      if ( v15 )
        v12 = v15;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x5Cu,
        (__int64)&unk_1400D9408,
        v12,
        v13,
        L"wdfDmaEnabler");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v16 = v28;
      v4 &= ~8u;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v17 = v30;
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
    sub_14000BB04(a1, (__int64)L"wdfDmaEnabler", 721, 100);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v5 = (const wchar_t *)&unk_1400D44E0;
      v6 = (const wchar_t *)&unk_1400D44E0;
      v7 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            v25)
                             + 16LL);
      if ( v7 )
        v6 = v7;
      v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                            a1 + 56,
                                            v23)
                             + 16LL);
      if ( v8 )
        v5 = v8;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x5Bu,
        (__int64)&unk_1400D9408,
        v5,
        v6,
        L"dmaEnabler");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v9 = v24;
      v4 &= ~2u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v10 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    sub_14000B87C(a1, (__int64)L"dmaEnabler", 719, 100);
  }
  v18 = -1073741661;
LABEL_39:
  v19 = v22;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  return v18;
}
