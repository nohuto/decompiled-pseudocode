__int64 __fastcall sub_1401476B4(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 *v5; // rsi
  char v8; // di
  __int64 *v9; // r14
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  __int64 v14; // rax
  const wchar_t *v15; // rdx
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rax
  __int64 v25; // rax
  const wchar_t *v26; // rdx
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  const wchar_t *v38; // rax
  const wchar_t *v39; // rcx
  const wchar_t *v40; // rdx
  volatile signed __int32 *v41; // rsi
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdi
  volatile signed __int32 *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  volatile signed __int32 *v48; // rdi
  volatile signed __int32 *v49; // rdi
  volatile signed __int32 *v50; // rdi
  unsigned int v51; // [rsp+58h] [rbp-49h]
  __int64 v52[2]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v53[8]; // [rsp+70h] [rbp-31h] BYREF
  volatile signed __int32 *v54; // [rsp+78h] [rbp-29h]
  _BYTE v55[8]; // [rsp+80h] [rbp-21h] BYREF
  volatile signed __int32 *v56; // [rsp+88h] [rbp-19h]
  _BYTE v57[8]; // [rsp+90h] [rbp-11h] BYREF
  volatile signed __int32 *v58; // [rsp+98h] [rbp-9h]
  _BYTE v59[8]; // [rsp+A0h] [rbp-1h] BYREF
  volatile signed __int32 *v60; // [rsp+A8h] [rbp+7h]
  _BYTE v61[8]; // [rsp+B0h] [rbp+Fh] BYREF
  volatile signed __int32 *v62; // [rsp+B8h] [rbp+17h]
  _BYTE v63[8]; // [rsp+C0h] [rbp+1Fh] BYREF
  volatile signed __int32 *v64; // [rsp+C8h] [rbp+27h]

  v5 = (__int64 *)a4;
  v8 = 0;
  v9 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxQueue::Bind", (__int64)a1);
      if ( v11 )
        v9 = v11;
    }
  }
  v52[1] = v5[1];
  v52[0] = *v5;
  v5[1] = 0LL;
  *v5 = 0LL;
  v51 = sub_140143B58(a1, v52);
  if ( v51 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v55)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v53);
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = *(const wchar_t **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v15 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xDu,
        0xAu,
        (__int64)&unk_1400DA268,
        v15,
        v12,
        L"__super::Bind(kstd::move(osServices))");
      v8 = 3;
    }
    if ( (v8 & 2) != 0 )
    {
      v17 = v54;
      v8 &= ~2u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      v5 = (__int64 *)a4;
    }
    if ( (v8 & 1) != 0 )
    {
      v18 = v56;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140008F3C((int)a1, (__int64)L"__super::Bind(kstd::move(osServices))", 141, 110, v51);
    if ( v9 )
    {
      sub_140091BA8(v9);
      ExFreePool(v9);
    }
    v19 = (volatile signed __int32 *)a2[1];
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v20 = (volatile signed __int32 *)a3[1];
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    v21 = (volatile signed __int32 *)v5[1];
    if ( v21 && _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v51;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = (const wchar_t *)&unk_1400D44E0;
      v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v57)
                              + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v59);
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v26 = v27;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xDu, 0xBu, (__int64)&unk_1400DA268, v23, v26, L"hardwareRxQueue");
      v8 = 12;
    }
    if ( (v8 & 8) != 0 )
    {
      v28 = v58;
      v8 &= ~8u;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      v5 = (__int64 *)a4;
    }
    if ( (v8 & 4) != 0 )
    {
      v29 = v60;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000B1BC((int)a1, (__int64)L"hardwareRxQueue", 143, 110);
    if ( v9 )
    {
      sub_140091BA8(v9);
      ExFreePool(v9);
    }
    v30 = (volatile signed __int32 *)a2[1];
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
    v31 = (volatile signed __int32 *)a3[1];
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
    v32 = (volatile signed __int32 *)v5[1];
LABEL_96:
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
    return 3221225485LL;
  }
  v33 = a1[58];
  a1[58] = a2[1];
  v34 = *a2;
  a2[1] = v33;
  v35 = a1[57];
  a1[57] = v34;
  *a2 = v35;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v36 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v61);
      v37 = *(_QWORD *)(a1[22] + 16LL);
      v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v63)
                              + 16LL);
      v39 = (const wchar_t *)&unk_1400D44E0;
      v40 = (const wchar_t *)&unk_1400D44E0;
      if ( v38 )
        v40 = v38;
      if ( *(_QWORD *)(v36 + 16) )
        v39 = *(const wchar_t **)(v36 + 16);
      sub_1400A3320(v37, 2u, 0xDu, 0xCu, (__int64)&unk_1400DA268, v39, v40, L"checksumOffload");
      v8 = 48;
    }
    if ( (v8 & 0x20) != 0 )
    {
      v41 = v62;
      v8 &= ~0x20u;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    if ( (v8 & 0x10) != 0 )
    {
      v42 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    sub_14000B1BC((int)a1, (__int64)L"checksumOffload", 146, 110);
    if ( v9 )
    {
      sub_140091BA8(v9);
      ExFreePool(v9);
    }
    v43 = (volatile signed __int32 *)a2[1];
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
      }
    }
    v44 = (volatile signed __int32 *)a3[1];
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
        if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
      }
    }
    v32 = *(volatile signed __int32 **)(a4 + 8);
    goto LABEL_96;
  }
  v45 = a1[84];
  a1[84] = a3[1];
  v46 = *a3;
  a3[1] = v45;
  v47 = a1[83];
  a1[83] = v46;
  *a3 = v47;
  if ( v9 )
  {
    sub_140091BA8(v9);
    ExFreePool(v9);
  }
  v48 = (volatile signed __int32 *)a2[1];
  if ( v48 )
  {
    if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
      if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
    }
  }
  v49 = (volatile signed __int32 *)a3[1];
  if ( v49 )
  {
    if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
      if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
    }
  }
  v50 = (volatile signed __int32 *)v5[1];
  if ( v50 )
  {
    if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
      if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
    }
  }
  return 0LL;
}
