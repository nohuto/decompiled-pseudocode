_QWORD *__fastcall sub_140075730(__int64 a1, _QWORD *a2)
{
  char v2; // bl
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // r13
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rbx
  int v16; // r8d
  const wchar_t *v17; // rdx
  __int64 v18; // rsi
  void *v19; // r13
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  volatile signed __int32 *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // r13d
  void *v33; // r13
  void *v34; // rdi
  void *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  void *v38; // rax
  volatile signed __int32 *v39; // rsi
  volatile signed __int32 *v40; // rbx
  __int64 v41; // rax
  volatile signed __int32 *v42; // rcx
  void *v43; // r13
  void *v44; // rdi
  void *v45; // rax
  __int64 v46; // rax
  int v47; // edx
  void *v48; // rax
  volatile signed __int32 *v49; // rsi
  volatile signed __int32 *v50; // rbx
  __int64 v52; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v53; // [rsp+60h] [rbp-61h]
  _BYTE v54[8]; // [rsp+68h] [rbp-59h] BYREF
  volatile signed __int32 *v55; // [rsp+70h] [rbp-51h]
  _BYTE v56[8]; // [rsp+78h] [rbp-49h] BYREF
  volatile signed __int32 *v57; // [rsp+80h] [rbp-41h]
  _BYTE v58[8]; // [rsp+88h] [rbp-39h] BYREF
  volatile signed __int32 *v59; // [rsp+90h] [rbp-31h]
  _BYTE v60[8]; // [rsp+98h] [rbp-29h] BYREF
  volatile signed __int32 *v61; // [rsp+A0h] [rbp-21h]
  _BYTE v62[8]; // [rsp+A8h] [rbp-19h] BYREF
  volatile signed __int32 *v63; // [rsp+B0h] [rbp-11h]
  _BYTE v64[8]; // [rsp+B8h] [rbp-9h] BYREF
  volatile signed __int32 *v65; // [rsp+C0h] [rbp-1h]
  _BYTE v66[8]; // [rsp+C8h] [rbp+7h] BYREF
  volatile signed __int32 *v67; // [rsp+D0h] [rbp+Fh]
  _BYTE v68[8]; // [rsp+D8h] [rbp+17h] BYREF
  volatile signed __int32 *v69; // [rsp+E0h] [rbp+1Fh]
  _BYTE v70[16]; // [rsp+E8h] [rbp+27h] BYREF
  unsigned int v71; // [rsp+128h] [rbp+67h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::CreateRegistryAccessor", a1 - 352);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v56)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v54);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v12,
        11,
        43,
        (__int64)&unk_1400D9408,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"m_netAdapter");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v55;
      v2 &= ~2u;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v57;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = 222;
    v17 = L"m_netAdapter";
LABEL_24:
    sub_14000BA2C(a1 - 352, (__int64)v17, v16, 100);
    *a2 = 0LL;
    a2[1] = 0LL;
    goto LABEL_90;
  }
  if ( !*(_QWORD *)(a1 + 32) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
      v19 = &unk_1400D44E0;
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v60)
                     + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v58);
      LOBYTE(v23) = 2;
      v24 = *(void **)(*(_QWORD *)v22 + 16LL);
      if ( v24 )
        v19 = v24;
      sub_1400A3320(v18, v23, 11, 44, (__int64)&unk_1400D9408, (__int64)v19, (__int64)v20, (__int64)L"m_osServices");
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v25 = v59;
      v2 &= ~8u;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v26 = v61;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    v16 = 223;
    v17 = L"m_osServices";
    goto LABEL_24;
  }
  v27 = ExAllocatePool2(64LL, 32LL, 808465971LL);
  if ( !v27
    || (v28 = sub_1400B073C(v27, a1 - 352), (v29 = (volatile signed __int32 *)v28) == 0LL)
    || (v30 = *(_QWORD *)(v28 + 16)) == 0 )
  {
    v53 = 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v43 = &unk_1400D44E0;
      v44 = &unk_1400D44E0;
      v45 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v68)
                     + 16LL);
      if ( v45 )
        v44 = v45;
      v46 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v66);
      LOBYTE(v47) = 2;
      v48 = *(void **)(*(_QWORD *)v46 + 16LL);
      if ( v48 )
        v43 = v48;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v47,
        11,
        45,
        (__int64)&unk_1400D9408,
        (__int64)v43,
        (__int64)v44,
        (__int64)L"registryAccessor");
      v2 = 48;
    }
    if ( (v2 & 0x20) != 0 )
    {
      v49 = v67;
      v2 &= ~0x20u;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
        }
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      v50 = v69;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
          if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
        }
      }
    }
    sub_14000B294(a1 - 352, (__int64)L"registryAccessor", 226, 100);
LABEL_85:
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
        if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
        {
          v42 = v53;
          v41 = *(_QWORD *)v53;
          goto LABEL_89;
        }
      }
    }
    goto LABEL_90;
  }
  v53 = (volatile signed __int32 *)v28;
  v52 = v30;
  v31 = sub_1400A27D4(v70, a1 + 32);
  v71 = sub_140133BA0(v30, *(_QWORD *)(a1 + 16), v31);
  v32 = v71;
  if ( v71 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v33 = &unk_1400D44E0;
      v34 = &unk_1400D44E0;
      v35 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v64)
                     + 16LL);
      if ( v35 )
        v34 = v35;
      v36 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v62);
      LOBYTE(v37) = 2;
      v38 = *(void **)(*(_QWORD *)v36 + 16LL);
      if ( v38 )
        v33 = v38;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v37,
        11,
        46,
        (__int64)&unk_1400D9408,
        (__int64)v33,
        (__int64)v34,
        (__int64)L"registryAccessor->BindAndInitialize(m_netAdapter, m_osServices)",
        v71);
      v32 = v71;
      v2 = -64;
    }
    if ( v2 < 0 )
    {
      v39 = v63;
      v2 &= ~0x80u;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      v40 = v65;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    sub_14000A018(a1 - 352, (__int64)L"registryAccessor->BindAndInitialize(m_netAdapter, m_osServices)", 232, 100, v32);
    goto LABEL_85;
  }
  sub_1400A5180(a2, &v52);
  if ( v53 )
  {
    if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
      {
        v41 = *(_QWORD *)v29;
        v42 = v29;
LABEL_89:
        (*(void (__fastcall **)(volatile signed __int32 *))(v41 + 16))(v42);
      }
    }
  }
LABEL_90:
  if ( v4 )
  {
    sub_140075108(v4);
    ExFreePool(v4);
  }
  return a2;
}
