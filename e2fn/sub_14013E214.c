__int64 __fastcall sub_14013E214(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _QWORD *a5)
{
  const wchar_t *v5; // rdi
  __int64 *v6; // r15
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  const wchar_t *v12; // r12
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rsi
  const wchar_t *v19; // rax
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rdx
  volatile signed __int32 *v22; // rsi
  unsigned int v23; // r14d
  _QWORD *v24; // rbx
  unsigned int v25; // r14d
  const wchar_t *v26; // r12
  const wchar_t *v27; // rax
  __int64 v28; // rsi
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rdi
  unsigned int v32; // esi
  unsigned int v33; // r13d
  _DWORD *v34; // rcx
  __int64 *v36; // [rsp+50h] [rbp-41h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-39h]
  _BYTE v38[8]; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-29h]
  _BYTE v40[8]; // [rsp+70h] [rbp-21h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-19h]
  _BYTE v42[8]; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v43; // [rsp+88h] [rbp-9h]
  _BYTE v44[8]; // [rsp+90h] [rbp-1h] BYREF
  volatile signed __int32 *v45; // [rsp+98h] [rbp+7h]
  _BYTE v46[8]; // [rsp+A0h] [rbp+Fh] BYREF
  volatile signed __int32 *v47; // [rsp+A8h] [rbp+17h]
  int v49; // [rsp+108h] [rbp+77h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v49 = 0;
  v36 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ConvertBitmapPatternToFlexFilter", a1);
      if ( v11 )
        v6 = v11;
      v36 = v6;
    }
  }
  if ( (a4 & 0x7F) != 0 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v5 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v38)
                              + 16LL);
      if ( v13 )
        v5 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             &v36)
                              + 16LL);
      if ( v14 )
        v12 = v14;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x3Au,
        (__int64)&unk_1400D9E10,
        v12,
        v5,
        (const wchar_t *)qword_14014EC70);
      LOBYTE(v5) = 3;
    }
    if ( ((unsigned __int8)v5 & 2) != 0 )
    {
      v15 = v37;
      LOBYTE(v5) = (unsigned __int8)v5 & 0xFD;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( ((unsigned __int8)v5 & 1) == 0 )
      goto LABEL_39;
    v16 = v39;
LABEL_35:
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
LABEL_39:
    v23 = -1073741823;
    goto LABEL_71;
  }
  if ( a3 > a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v17 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v40);
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v42)
                              + 16LL);
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = (const wchar_t *)&unk_1400D44E0;
      if ( v19 )
        v21 = v19;
      if ( *(_QWORD *)(v17 + 16) )
        v20 = *(const wchar_t **)(v17 + 16);
      sub_1400A6AA8(v18, 2u, 0xBu, 0x3Bu, (__int64)&unk_1400D9E10, v20, v21, (const wchar_t *)qword_14014EC70);
      LOBYTE(v5) = 12;
    }
    if ( ((unsigned __int8)v5 & 8) != 0 )
    {
      v22 = v41;
      LOBYTE(v5) = (unsigned __int8)v5 & 0xF7;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( ((unsigned __int8)v5 & 4) == 0 )
      goto LABEL_39;
    v16 = v43;
    goto LABEL_35;
  }
  v24 = a5;
  v25 = a4 >> 2;
  if ( a5[2] == v25 )
    goto LABEL_61;
  _mm_lfence();
  if ( !(unsigned int)sub_14002DF0C(a5, v25) )
    v24[2] = v25;
  if ( v24[2] == v25 )
  {
LABEL_61:
    v32 = 0;
    if ( v25 )
    {
      do
      {
        v49 = 0;
        v33 = a3;
        if ( a3 > 4 )
          v33 = 4;
        if ( v33 )
          sub_1400B6980((char *)&v49, (char *)(a2 + 4 * v32), v33);
        if ( (unsigned __int64)v5 >= v24[2] )
          sub_140072758(113, 0x239u, v32, *((_DWORD *)v24 + 4), 0);
        a3 -= v33;
        ++v32;
        v34 = (_DWORD *)(v24[1] + 4LL * (_QWORD)v5);
        v5 = (const wchar_t *)((char *)v5 + 1);
        *v34 = v49;
      }
      while ( v32 < v25 );
      v6 = v36;
    }
    v23 = 0;
  }
  else
  {
    v23 = -1073741801;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v26 = (const wchar_t *)&unk_1400D44E0;
      v5 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v44)
                              + 16LL);
      if ( v27 )
        v5 = v27;
      v28 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v46)
                              + 16LL);
      if ( v29 )
        v26 = v29;
      sub_1400A5E80(
        v28,
        2u,
        0xBu,
        0x3Cu,
        (__int64)&unk_1400D9E10,
        v5,
        v26,
        L"ResizeVector(flexbleFilterPattern, numberOfDwordsInFlexFilterPattern)");
      LOBYTE(v5) = 48;
    }
    if ( ((unsigned __int8)v5 & 0x20) != 0 )
    {
      v30 = v45;
      LOBYTE(v5) = (unsigned __int8)v5 & 0xDF;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    if ( ((unsigned __int8)v5 & 0x10) != 0 )
    {
      v31 = v47;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    sub_14001921C(
      a1,
      (__int64)L"ResizeVector(flexbleFilterPattern, numberOfDwordsInFlexFilterPattern)",
      600,
      113,
      0xC0000017);
  }
LABEL_71:
  if ( v6 )
  {
    sub_140075108(v6);
    ExFreePool(v6);
  }
  return v23;
}
