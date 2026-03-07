__int64 __fastcall sub_140135664(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  char v6; // r14
  __int64 *v7; // rsi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  const wchar_t *v10; // r14
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  const wchar_t *v20; // r14
  const wchar_t *v21; // rdi
  const wchar_t *v22; // rax
  const wchar_t *v23; // rax
  volatile signed __int32 *v24; // rdi
  volatile signed __int32 *v25; // rdi
  volatile signed __int32 *v26; // rdi
  volatile signed __int32 *v27; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  const wchar_t *v31; // r14
  const wchar_t *v32; // rdi
  const wchar_t *v33; // rax
  const wchar_t *v34; // rax
  volatile signed __int32 *v35; // rdi
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rdi
  volatile signed __int32 *v38; // rdi
  volatile signed __int32 *v39; // rdi
  volatile signed __int32 *v40; // rdi
  _QWORD v41[2]; // [rsp+58h] [rbp-39h] BYREF
  char v42[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v43; // [rsp+70h] [rbp-21h]
  char v44[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v45; // [rsp+80h] [rbp-11h]
  char v46[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v47; // [rsp+90h] [rbp-1h]
  char v48[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v49; // [rsp+A0h] [rbp+Fh]
  char v50[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v51; // [rsp+B0h] [rbp+1Fh]
  char v52[8]; // [rsp+B8h] [rbp+27h] BYREF
  volatile signed __int32 *v53; // [rsp+C0h] [rbp+2Fh]
  const wchar_t *v54; // [rsp+100h] [rbp+6Fh]
  unsigned int v55; // [rsp+100h] [rbp+6Fh]

  v6 = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterLink::Bind", (__int64)a1);
      if ( v9 )
        v7 = v9;
    }
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v44)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v42)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xBu, (__int64)&unk_1400D9BD0, v10, v11, L"hardwareLink");
      v6 = 3;
    }
    if ( (v6 & 2) != 0 )
    {
      v14 = v43;
      v6 &= ~2u;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v15 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"hardwareLink", 69, 104);
LABEL_42:
    if ( v7 )
    {
      sub_140075108(v7);
      ExFreePool(v7);
    }
    v26 = (volatile signed __int32 *)a2[1];
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
    v27 = (volatile signed __int32 *)a3[1];
    if ( v27 && _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return 3221225485LL;
  }
  v16 = a1[48];
  a1[48] = a2[1];
  v17 = *a2;
  a2[1] = v16;
  v18 = a1[47];
  a1[47] = v17;
  *a2 = v18;
  v19 = *a3;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v48)
                              + 16LL);
      if ( v22 )
        v21 = v22;
      v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v46)
                              + 16LL);
      if ( v23 )
        v20 = v23;
      v54 = v20;
      v6 = 12;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xCu, (__int64)&unk_1400D9BD0, v54, v21, L"eventViewerLogger");
    }
    if ( (v6 & 8) != 0 )
    {
      v24 = v47;
      v6 &= ~8u;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v25 = v49;
      if ( v49 )
      {
        if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    sub_14000B36C((int)a1, (__int64)L"eventViewerLogger", 72, 104);
    goto LABEL_42;
  }
  v29 = a3[1];
  a3[1] = 0LL;
  v41[0] = v19;
  *a3 = 0LL;
  v30 = a1[49];
  v41[1] = v29;
  v55 = sub_14014BB54(v30, v41);
  if ( v55 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = (const wchar_t *)&unk_1400D44E0;
      v32 = (const wchar_t *)&unk_1400D44E0;
      v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v52)
                              + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v50)
                              + 16LL);
      if ( v34 )
        v31 = v34;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0xDu,
        (__int64)&unk_1400D9BD0,
        v31,
        v32,
        L"m_linkEventViewerLogger->Bind(kstd::move(eventViewerLogger))");
      v6 = 48;
    }
    if ( (v6 & 0x20) != 0 )
    {
      v35 = v51;
      v6 &= ~0x20u;
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    if ( (v6 & 0x10) != 0 )
    {
      v36 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    sub_14005E0C8((int)a1, (__int64)L"m_linkEventViewerLogger->Bind(kstd::move(eventViewerLogger))", 73, 104, v55);
    if ( v7 )
    {
      sub_140075108(v7);
      ExFreePool(v7);
    }
    v37 = (volatile signed __int32 *)a2[1];
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
    v38 = (volatile signed __int32 *)a3[1];
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
    return v55;
  }
  else
  {
    if ( v7 )
    {
      sub_140075108(v7);
      ExFreePool(v7);
    }
    v39 = (volatile signed __int32 *)a2[1];
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    v40 = (volatile signed __int32 *)a3[1];
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    return 0LL;
  }
}
