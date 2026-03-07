__int64 __fastcall sub_14013DCDC(__int64 a1, char *a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  const wchar_t *v5; // rdi
  __int64 *v7; // r15
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  const wchar_t *v12; // r12
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // rdi
  unsigned int v17; // r14d
  __int64 v18; // rdi
  __int64 v19; // rsi
  const wchar_t *v20; // rax
  const wchar_t *v21; // rcx
  const wchar_t *v22; // rdx
  volatile signed __int32 *v23; // rsi
  unsigned int v24; // r14d
  const wchar_t *v25; // r12
  const wchar_t *v26; // rax
  __int64 v27; // rsi
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // rsi
  volatile signed __int32 *v30; // rdi
  unsigned int v31; // esi
  char *v32; // rax
  _BYTE *v33; // rcx
  char v35[8]; // [rsp+50h] [rbp-41h] BYREF
  volatile signed __int32 *v36; // [rsp+58h] [rbp-39h]
  char v37[8]; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v38; // [rsp+68h] [rbp-29h]
  char v39[8]; // [rsp+70h] [rbp-21h] BYREF
  volatile signed __int32 *v40; // [rsp+78h] [rbp-19h]
  char v41[8]; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v42; // [rsp+88h] [rbp-9h]
  char v43[8]; // [rsp+90h] [rbp-1h] BYREF
  volatile signed __int32 *v44; // [rsp+98h] [rbp+7h]
  char v45[8]; // [rsp+A0h] [rbp+Fh] BYREF
  volatile signed __int32 *v46; // [rsp+A8h] [rbp+17h]
  char v48; // [rsp+108h] [rbp+77h]

  v5 = 0LL;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_140074D50(
              Pool2,
              (__int64)L"net_adapter::NetAdapterWolPatterns::ConvertBitmapPatternMaskToFlexFilterMask",
              a1);
      if ( v11 )
        v7 = v11;
    }
  }
  if ( (a4 & 0xF) != 0 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v5 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v37)
                              + 16LL);
      if ( v13 )
        v5 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v35)
                              + 16LL);
      if ( v14 )
        v12 = v14;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x3Du,
        (__int64)&unk_1400D9E10,
        v12,
        v5,
        (const wchar_t *)qword_14014EC70);
      LOBYTE(v5) = 3;
    }
    if ( ((unsigned __int8)v5 & 2) != 0 )
    {
      v15 = v36;
      LOBYTE(v5) = (unsigned __int8)v5 & 0xFD;
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
    if ( ((unsigned __int8)v5 & 1) == 0 )
      goto LABEL_38;
    v16 = v38;
LABEL_34:
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
LABEL_38:
    v24 = -1073741823;
    goto LABEL_68;
  }
  v17 = a4 >> 3;
  if ( a3 > v17 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      _mm_lfence();
      v18 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v39);
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v41)
                              + 16LL);
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = (const wchar_t *)&unk_1400D44E0;
      if ( v20 )
        v22 = v20;
      if ( *(_QWORD *)(v18 + 16) )
        v21 = *(const wchar_t **)(v18 + 16);
      sub_1400A6AA8(v19, 2u, 0xBu, 0x3Eu, (__int64)&unk_1400D9E10, v21, v22, (const wchar_t *)qword_14014EC70);
      LOBYTE(v5) = 12;
    }
    if ( ((unsigned __int8)v5 & 8) != 0 )
    {
      v23 = v40;
      LOBYTE(v5) = (unsigned __int8)v5 & 0xF7;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( ((unsigned __int8)v5 & 4) == 0 )
      goto LABEL_38;
    v16 = v42;
    goto LABEL_34;
  }
  if ( *(_QWORD *)(a5 + 16) == v17 )
    goto LABEL_60;
  _mm_lfence();
  if ( !(unsigned int)sub_14008BBA4((_QWORD *)a5, v17) )
    *(_QWORD *)(a5 + 16) = v17;
  if ( *(_QWORD *)(a5 + 16) == v17 )
  {
LABEL_60:
    v31 = 0;
    if ( v17 )
    {
      v32 = a2;
      do
      {
        v48 = 0;
        if ( a3 )
          v48 = *v32;
        if ( (unsigned __int64)v5 >= *(_QWORD *)(a5 + 16) )
          sub_140072758(113, 0x239u, v31, *(_DWORD *)(a5 + 16), 0);
        a3 -= a3 != 0;
        v33 = (char *)v5 + *(_QWORD *)(a5 + 8);
        ++v31;
        v5 = (const wchar_t *)((char *)v5 + 1);
        *v33 = v48;
        v32 = ++a2;
      }
      while ( v31 < v17 );
    }
    v24 = 0;
  }
  else
  {
    v24 = -1073741801;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v25 = (const wchar_t *)&unk_1400D44E0;
      v5 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v43)
                              + 16LL);
      if ( v26 )
        v5 = v26;
      v27 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v45)
                              + 16LL);
      if ( v28 )
        v25 = v28;
      sub_1400A5E80(
        v27,
        2u,
        0xBu,
        0x3Fu,
        (__int64)&unk_1400D9E10,
        v5,
        v25,
        L"ResizeVector(flexbleFilterMask, flexibleFilterMaskSize)");
      LOBYTE(v5) = 48;
    }
    if ( ((unsigned __int8)v5 & 0x20) != 0 )
    {
      v29 = v44;
      LOBYTE(v5) = (unsigned __int8)v5 & 0xDF;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( ((unsigned __int8)v5 & 0x10) != 0 )
    {
      v30 = v46;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_1400358A0(a1, (__int64)L"ResizeVector(flexbleFilterMask, flexibleFilterMaskSize)", 656, 113, 0xC0000017);
  }
LABEL_68:
  if ( v7 )
  {
    sub_140075108(v7);
    ExFreePool(v7);
  }
  return v24;
}
