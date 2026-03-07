__int64 __fastcall sub_14011D1A8(_QWORD *a1)
{
  __int16 v2; // r15
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // esi
  const wchar_t *v8; // r14
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rax
  void *v15; // rsi
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // rdx
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  __int16 v23; // ax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  __int64 v28; // rax
  const wchar_t *v29; // rdx
  const wchar_t *v30; // rax
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int64 v33; // rax
  const wchar_t *v34; // rdi
  void *v35; // rsi
  const wchar_t *v36; // rax
  __int64 v37; // rax
  const wchar_t *v38; // rdx
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  unsigned int v42; // eax
  _BYTE v44[8]; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v45; // [rsp+60h] [rbp-A0h]
  _BYTE v46[8]; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v47; // [rsp+70h] [rbp-90h]
  _BYTE v48[8]; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v49; // [rsp+80h] [rbp-80h]
  _BYTE v50[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v51; // [rsp+90h] [rbp-70h]
  _BYTE v52[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v53; // [rsp+A0h] [rbp-60h]
  _BYTE v54[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v55; // [rsp+B0h] [rbp-50h]
  _BYTE v56[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v57; // [rsp+C0h] [rbp-40h]
  _BYTE v58[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v59; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall **v60)(PVOID); // [rsp+D8h] [rbp-28h] BYREF
  PVOID P; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall **v62)(PVOID); // [rsp+100h] [rbp+0h] BYREF
  PVOID v63; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall **v64)(); // [rsp+128h] [rbp+28h] BYREF
  int v65; // [rsp+130h] [rbp+30h]
  __int16 v66; // [rsp+134h] [rbp+34h]
  __int64 (__fastcall **v67)(); // [rsp+138h] [rbp+38h] BYREF
  int v68; // [rsp+140h] [rbp+40h] BYREF
  __int16 v69; // [rsp+144h] [rbp+44h]
  __int16 v70; // [rsp+148h] [rbp+48h] BYREF
  int v71; // [rsp+14Ah] [rbp+4Ah] BYREF
  __int16 v72; // [rsp+14Eh] [rbp+4Eh]
  __int128 v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+160h] [rbp+60h]
  __int16 v75; // [rsp+168h] [rbp+68h]

  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::AdvertiseMacAddresses", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[52];
  v64 = off_1400D69E8;
  v65 = 0;
  v66 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)v6 + 64LL))(v6, &v64);
  if ( v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v46)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v44)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0x51u,
        (__int64)&unk_1400D9408,
        v8,
        v9,
        L"m_hardwareAbstraction->GetPermanentMacAddress(permanentMacAddress)");
      LOBYTE(v2) = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v12 = v45;
      LOBYTE(v2) = v2 & 0xFD;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v13 = v47;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000A2B0((int)a1, (__int64)L"m_hardwareAbstraction->GetPermanentMacAddress(permanentMacAddress)", 606, 100, v7);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = sub_140089420((__int64)&v64, (__int64)&v60);
      v15 = &unk_1400D44E0;
      if ( *(_QWORD *)(v14 + 16) )
        v15 = *(void **)(v14 + 16);
      v16 = (const wchar_t *)&unk_1400D44E0;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v50)
                              + 16LL);
      if ( v17 )
        v16 = v17;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v48);
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = *(const wchar_t **)(*(_QWORD *)v18 + 16LL);
      if ( v20 )
        v19 = v20;
      sub_1400A9338(
        *(_QWORD *)(a1[22] + 16LL),
        4u,
        0xBu,
        0x52u,
        (__int64)&unk_1400D9408,
        v19,
        v16,
        (const wchar_t *)qword_14014EC70,
        (__int64)v15);
      v2 = 28;
    }
    if ( (v2 & 0x10) != 0 )
    {
      v21 = v49;
      v2 &= ~0x10u;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v2 & 8) != 0 )
    {
      v22 = v51;
      v2 &= ~8u;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v2 &= ~4u;
      v60 = &off_1400D41D0;
      if ( P )
        ExFreePool(P);
    }
    v71 = v65;
    v72 = v66;
    v73 = 0LL;
    v74 = 0LL;
    v75 = 0;
    v23 = sub_1400892A0();
    v24 = a1[46];
    v70 = v23;
    ((void (__fastcall *)(__int64, __int64, __int16 *))qword_1400DF7B0)(qword_1400DF700, v24, &v70);
    v25 = a1[52];
    v67 = off_1400D69E8;
    v68 = 0;
    v69 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)v25 + 56LL))(v25, &v67);
    if ( v7 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOBYTE(v2) = v2 | 0x60;
        v26 = (const wchar_t *)&unk_1400D44E0;
        v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v54)
                                + 16LL);
        if ( v27 )
          v26 = v27;
        v28 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v52);
        v29 = (const wchar_t *)&unk_1400D44E0;
        v30 = *(const wchar_t **)(*(_QWORD *)v28 + 16LL);
        if ( v30 )
          v29 = v30;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          2u,
          0xBu,
          0x53u,
          (__int64)&unk_1400D9408,
          v29,
          v26,
          L"m_hardwareAbstraction->GetCurrentMacAddress(currentMacAddress)");
      }
      if ( (v2 & 0x40) != 0 )
      {
        v31 = v53;
        LOBYTE(v2) = v2 & 0xBF;
        if ( v53 )
        {
          if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      if ( (v2 & 0x20) != 0 )
      {
        v32 = v55;
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
      }
      sub_140009ECC((int)a1, (__int64)L"m_hardwareAbstraction->GetCurrentMacAddress(currentMacAddress)", 615, 100, v7);
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v2 |= 0x380u;
        v33 = sub_140089420((__int64)&v67, (__int64)&v62);
        v34 = (const wchar_t *)&unk_1400D44E0;
        v35 = &unk_1400D44E0;
        if ( *(_QWORD *)(v33 + 16) )
          v35 = *(void **)(v33 + 16);
        v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v58)
                                + 16LL);
        if ( v36 )
          v34 = v36;
        v37 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v56);
        v38 = (const wchar_t *)&unk_1400D44E0;
        v39 = *(const wchar_t **)(*(_QWORD *)v37 + 16LL);
        if ( v39 )
          v38 = v39;
        sub_1400A9338(
          *(_QWORD *)(a1[22] + 16LL),
          4u,
          0xBu,
          0x54u,
          (__int64)&unk_1400D9408,
          v38,
          v34,
          (const wchar_t *)qword_14014EC70,
          (__int64)v35);
      }
      if ( (v2 & 0x200) != 0 )
      {
        v40 = v57;
        v2 &= ~0x200u;
        if ( v57 )
        {
          if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
            if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
          }
        }
      }
      if ( (v2 & 0x100) != 0 )
      {
        v41 = v59;
        if ( v59 )
        {
          if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
            if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
          }
        }
      }
      if ( (v2 & 0x80u) != 0 )
      {
        v62 = &off_1400D41D0;
        if ( v63 )
          ExFreePool(v63);
      }
      v42 = sub_1400892A0();
      sub_1400B6980((char *)&v71, (char *)&v68, v42);
      ((void (__fastcall *)(__int64, _QWORD, __int16 *))qword_1400DF7B8)(qword_1400DF700, a1[46], &v70);
      v7 = 0;
    }
    v67 = (__int64 (__fastcall **)())&off_1400D44E8;
  }
  v64 = (__int64 (__fastcall **)())&off_1400D44E8;
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v7;
}
