__int64 __fastcall sub_140137268(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rdi
  const wchar_t *v12; // r15
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  volatile signed __int32 *v23; // rdi
  const wchar_t *v24; // r15
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  volatile signed __int32 *v35; // rdi
  const wchar_t *v36; // r15
  const wchar_t *v37; // rdi
  const wchar_t *v38; // rax
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rdi
  volatile signed __int32 *v41; // rbx
  _BYTE v43[8]; // [rsp+40h] [rbp-29h] BYREF
  volatile signed __int32 *v44; // [rsp+48h] [rbp-21h]
  _BYTE v45[8]; // [rsp+50h] [rbp-19h] BYREF
  volatile signed __int32 *v46; // [rsp+58h] [rbp-11h]
  _BYTE v47[8]; // [rsp+60h] [rbp-9h] BYREF
  volatile signed __int32 *v48; // [rsp+68h] [rbp-1h]
  _BYTE v49[8]; // [rsp+70h] [rbp+7h] BYREF
  volatile signed __int32 *v50; // [rsp+78h] [rbp+Fh]
  _BYTE v51[8]; // [rsp+80h] [rbp+17h] BYREF
  volatile signed __int32 *v52; // [rsp+88h] [rbp+1Fh]
  _BYTE v53[8]; // [rsp+90h] [rbp+27h] BYREF
  volatile signed __int32 *v54; // [rsp+98h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterArpOffload::UpdateArpParameters", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = ExAllocatePool2(64LL, 32LL, 808465975LL);
  if ( !v6 || (v7 = sub_1400B49F4(v6, (_DWORD *)(a1 + 396)), (v8 = v7) == 0) || (v9 = *(_QWORD *)(v7 + 16)) == 0 )
  {
    v9 = 0LL;
    v8 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v10 = *(_QWORD *)(a1 + 456);
  v11 = *(volatile signed __int32 **)(v10 + 24);
  *(_QWORD *)(v10 + 24) = v8;
  *(_QWORD *)(v10 + 16) = v9;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 456) + 16LL) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v45)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v43)
                              + 16LL);
      if ( v15 )
        v12 = v15;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x12u,
        (__int64)&unk_1400D9C98,
        v12,
        v13,
        L"m_hardwareArpOffloadParameters->localIpv4Address");
      LOBYTE(v1) = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v16 = v44;
      LOBYTE(v1) = v1 & 0xFD;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v17 = v46;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14008F21C(a1, (__int64)L"m_hardwareArpOffloadParameters->localIpv4Address", 159, 101);
LABEL_84:
    v1 = -1073741801;
    goto LABEL_85;
  }
  v18 = ExAllocatePool2(64LL, 32LL, 808465976LL);
  if ( !v18 || (v19 = sub_1400B49F4(v18, (_DWORD *)(a1 + 392)), (v20 = v19) == 0) || (v21 = *(_QWORD *)(v19 + 16)) == 0 )
  {
    v21 = 0LL;
    v20 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v22 = *(_QWORD *)(a1 + 456);
  v23 = *(volatile signed __int32 **)(v22 + 40);
  *(_QWORD *)(v22 + 40) = v20;
  *(_QWORD *)(v22 + 32) = v21;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 456) + 32LL) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v49)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v47)
                              + 16LL);
      if ( v27 )
        v24 = v27;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x13u,
        (__int64)&unk_1400D9C98,
        v24,
        v25,
        L"m_hardwareArpOffloadParameters->remoteIpv4Address");
      LOBYTE(v1) = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v28 = v48;
      LOBYTE(v1) = v1 & 0xF7;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v29 = v50;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14008F2F4(a1, (__int64)L"m_hardwareArpOffloadParameters->remoteIpv4Address", 162, 101);
    goto LABEL_84;
  }
  v30 = ExAllocatePool2(64LL, 32LL, 808465977LL);
  if ( !v30 || (v31 = sub_1400B4A60(v30, a1 + 400), (v32 = v31) == 0) || (v33 = *(_QWORD *)(v31 + 16)) == 0 )
  {
    v33 = 0LL;
    v32 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v34 = *(_QWORD **)(a1 + 456);
  v35 = (volatile signed __int32 *)v34[1];
  v34[1] = v32;
  *v34 = v33;
  if ( v35 )
  {
    if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  if ( !**(_QWORD **)(a1 + 456) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v36 = (const wchar_t *)&unk_1400D44E0;
      v37 = (const wchar_t *)&unk_1400D44E0;
      v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v53)
                              + 16LL);
      if ( v38 )
        v37 = v38;
      v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v51)
                              + 16LL);
      if ( v39 )
        v36 = v39;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x14u,
        (__int64)&unk_1400D9C98,
        v36,
        v37,
        L"m_hardwareArpOffloadParameters->localMacAddress");
      LOBYTE(v1) = 48;
    }
    if ( (v1 & 0x20) != 0 )
    {
      v40 = v52;
      LOBYTE(v1) = v1 & 0xDF;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v41 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    sub_14008F144(a1, (__int64)L"m_hardwareArpOffloadParameters->localMacAddress", 165, 101);
    goto LABEL_84;
  }
LABEL_85:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v1;
}
