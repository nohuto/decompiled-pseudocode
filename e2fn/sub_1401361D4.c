__int64 __fastcall sub_1401361D4(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char v4; // bl
  __int64 *v6; // r14
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  const wchar_t *v12; // r13
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rbx
  const wchar_t *v18; // r13
  const wchar_t *v19; // rdi
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rbx
  const wchar_t *v24; // r13
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  __int64 v27; // rsi
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  volatile signed __int32 *v39; // rdi
  const wchar_t *v40; // r13
  const wchar_t *v41; // rdi
  const wchar_t *v42; // rax
  const wchar_t *v43; // rax
  volatile signed __int32 *v44; // rdi
  volatile signed __int32 *v45; // rbx
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  _BYTE v48[8]; // [rsp+48h] [rbp-49h] BYREF
  volatile signed __int32 *v49; // [rsp+50h] [rbp-41h]
  _BYTE v50[8]; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v51; // [rsp+60h] [rbp-31h]
  _BYTE v52[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v53; // [rsp+70h] [rbp-21h]
  _BYTE v54[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v55; // [rsp+80h] [rbp-11h]
  _BYTE v56[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v57; // [rsp+90h] [rbp-1h]
  _BYTE v58[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v59; // [rsp+A0h] [rbp+Fh]
  _BYTE v60[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v61; // [rsp+B0h] [rbp+1Fh]
  _BYTE v62[8]; // [rsp+B8h] [rbp+27h] BYREF
  volatile signed __int32 *v63; // [rsp+C0h] [rbp+2Fh]

  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterArpOffload::BindAndInitialize", (__int64)a1);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( !a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v50)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v48)
                              + 16LL);
      if ( v15 )
        v12 = v15;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xAu, (__int64)&unk_1400D9C98, v12, v13, L"netAdapter");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v16 = v49;
      v4 &= ~2u;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v17 = v51;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"netAdapter", 60, 101);
LABEL_60:
    if ( v6 )
    {
      sub_140075108(v6);
      ExFreePool(v6);
    }
    v31 = (volatile signed __int32 *)a4[1];
    if ( v31 && _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    return 3221225485LL;
  }
  a1[46] = a2;
  if ( !a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v54)
                              + 16LL);
      if ( v20 )
        v19 = v20;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v52)
                              + 16LL);
      if ( v21 )
        v18 = v21;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xBu, (__int64)&unk_1400D9C98, v18, v19, L"device");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v22 = v53;
      v4 &= ~8u;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v23 = v55;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_14000B00C((int)a1, (__int64)L"device", 63, 101);
    goto LABEL_60;
  }
  a1[47] = a3;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v56)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = *(_QWORD *)(a1[22] + 16LL);
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v58)
                              + 16LL);
      if ( v28 )
        v24 = v28;
      sub_1400A3320(v27, 2u, 0xBu, 0xCu, (__int64)&unk_1400D9C98, v25, v24, L"hardwareArpOffload");
      v4 = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v29 = v57;
      v4 &= ~0x20u;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v30 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_14002D980((int)a1, (__int64)L"hardwareArpOffload", 66, 101);
    goto LABEL_60;
  }
  v33 = a1[56];
  a1[56] = a4[1];
  v34 = *a4;
  a4[1] = v33;
  v35 = a1[55];
  a1[55] = v34;
  *a4 = v35;
  v36 = ExAllocatePool2(64LL, 32LL, 808465974LL);
  if ( !v36 || (v37 = sub_1400A914C(v36)) == 0 || (v38 = *(_QWORD *)(v37 + 16)) == 0 )
  {
    v38 = 0LL;
    v37 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v39 = (volatile signed __int32 *)a1[58];
  a1[58] = v37;
  a1[57] = v38;
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
    }
  }
  if ( a1[57] )
  {
    if ( v6 )
    {
      sub_140075108(v6);
      ExFreePool(v6);
    }
    v47 = (volatile signed __int32 *)a4[1];
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
        if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
      }
    }
    return 0LL;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v40 = (const wchar_t *)&unk_1400D44E0;
      v41 = (const wchar_t *)&unk_1400D44E0;
      v42 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v62)
                              + 16LL);
      if ( v42 )
        v41 = v42;
      v43 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v60)
                              + 16LL);
      if ( v43 )
        v40 = v43;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0xDu,
        (__int64)&unk_1400D9C98,
        v40,
        v41,
        L"m_hardwareArpOffloadParameters");
      v4 = -64;
    }
    if ( v4 < 0 )
    {
      v44 = v61;
      v4 &= ~0x80u;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    if ( (v4 & 0x40) != 0 )
    {
      v45 = v63;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
          if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
        }
      }
    }
    sub_14008F06C((__int64)a1, (__int64)L"m_hardwareArpOffloadParameters", 70, 101);
    if ( v6 )
    {
      sub_140075108(v6);
      ExFreePool(v6);
    }
    v46 = (volatile signed __int32 *)a4[1];
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
        if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
      }
    }
    return 3221225495LL;
  }
}
