__int64 **__fastcall sub_1400E69D4(__int64 **a1)
{
  const wchar_t **v1; // rsi
  const wchar_t **Pool2; // rax
  const wchar_t **v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rax
  __int64 *v25; // rax
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  volatile signed __int32 *v37; // rbx
  __int64 v38; // rax
  __int128 v40; // [rsp+38h] [rbp-49h] BYREF
  __int128 v41; // [rsp+48h] [rbp-39h] BYREF
  __int128 v42; // [rsp+58h] [rbp-29h] BYREF
  __int128 v43; // [rsp+68h] [rbp-19h] BYREF
  __int128 v44; // [rsp+78h] [rbp-9h] BYREF
  __int128 v45; // [rsp+88h] [rbp+7h] BYREF
  __int128 v46; // [rsp+98h] [rbp+17h] BYREF
  __int64 v47; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v48; // [rsp+B0h] [rbp+2Fh]

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (const wchar_t **)ExAllocatePool2(64LL, 8LL, 1970304114LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = L"product_e2fn::ProductE2fnDeviceContext::CreateContextResources";
      sub_1400A3268(L"product_e2fn::ProductE2fnDeviceContext::CreateContextResources");
      v1 = v4;
    }
  }
  v5 = ExAllocatePool2(64LL, 32LL, 808465204LL);
  if ( v5 && (v6 = sub_1400A3560(v5), (v7 = v6) != 0) && (v8 = *(__int64 **)(v6 + 16)) != 0LL )
  {
    v9 = ExAllocatePool2(64LL, 32LL, 808465205LL);
    if ( v9
      && (v10 = sub_1400A380C(v9), (v11 = (volatile signed __int32 *)v10) != 0LL)
      && (v12 = *(_QWORD *)(v10 + 16)) != 0 )
    {
      *((_QWORD *)&v40 + 1) = v11;
      *(_QWORD *)&v40 = v12;
    }
    else
    {
      v11 = 0LL;
      v40 = 0LL;
    }
    sub_1400A3C70(v8 + 2, (__int64 *)&v40);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    v13 = ExAllocatePool2(64LL, 32LL, 808465206LL);
    if ( v13
      && (v14 = sub_1400A37A8(v13), (v15 = (volatile signed __int32 *)v14) != 0LL)
      && (v16 = *(_QWORD *)(v14 + 16)) != 0 )
    {
      *((_QWORD *)&v41 + 1) = v15;
      *(_QWORD *)&v41 = v16;
    }
    else
    {
      v15 = 0LL;
      v41 = 0LL;
    }
    sub_1400A3C70(v8 + 4, (__int64 *)&v41);
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    v17 = ExAllocatePool2(64LL, 32LL, 808465207LL);
    if ( v17
      && (v18 = sub_1400A3870(v17), (v19 = (volatile signed __int32 *)v18) != 0LL)
      && (v20 = *(_QWORD *)(v18 + 16)) != 0 )
    {
      *((_QWORD *)&v42 + 1) = v19;
      *(_QWORD *)&v42 = v20;
    }
    else
    {
      v19 = 0LL;
      v42 = 0LL;
    }
    sub_1400A3C70(v8 + 6, (__int64 *)&v42);
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v21 = ExAllocatePool2(64LL, 32LL, 808465208LL);
    if ( v21
      && (v22 = sub_1400A3744(v21), (v23 = (volatile signed __int32 *)v22) != 0LL)
      && (v24 = *(_QWORD *)(v22 + 16)) != 0 )
    {
      *((_QWORD *)&v43 + 1) = v23;
      *(_QWORD *)&v43 = v24;
    }
    else
    {
      v23 = 0LL;
      v43 = 0LL;
    }
    sub_1400A3C70(v8 + 8, (__int64 *)&v43);
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    v25 = sub_1400A3E28(&v47, 0x30303339u);
    sub_1400A3C70(v8 + 10, v25);
    v26 = v48;
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
    v27 = ExAllocatePool2(64LL, 32LL, 808465249LL);
    if ( v27
      && (v28 = sub_1400A36E0(v27), (v29 = (volatile signed __int32 *)v28) != 0LL)
      && (v30 = *(_QWORD *)(v28 + 16)) != 0 )
    {
      *((_QWORD *)&v44 + 1) = v29;
      *(_QWORD *)&v44 = v30;
    }
    else
    {
      v29 = 0LL;
      v44 = 0LL;
    }
    sub_1400A3C70(v8 + 12, (__int64 *)&v44);
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    v31 = ExAllocatePool2(64LL, 32LL, 808476985LL);
    if ( v31
      && (v32 = sub_1400A3618(v31), (v33 = (volatile signed __int32 *)v32) != 0LL)
      && (v34 = *(_QWORD *)(v32 + 16)) != 0 )
    {
      *((_QWORD *)&v45 + 1) = v33;
      *(_QWORD *)&v45 = v34;
    }
    else
    {
      v33 = 0LL;
      v45 = 0LL;
    }
    sub_1400A3C70(v8 + 14, (__int64 *)&v45);
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
    v35 = ExAllocatePool2(64LL, 32LL, 808477025LL);
    if ( v35
      && (v36 = sub_1400A367C(v35), (v37 = (volatile signed __int32 *)v36) != 0LL)
      && (v38 = *(_QWORD *)(v36 + 16)) != 0 )
    {
      *((_QWORD *)&v46 + 1) = v37;
      *(_QWORD *)&v46 = v38;
    }
    else
    {
      v37 = 0LL;
      v46 = 0LL;
    }
    sub_1400A3C70(v8 + 16, (__int64 *)&v46);
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
    a1[1] = (__int64 *)v7;
    *a1 = v8;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A3054(
        *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
        2u,
        14LL,
        0x14u,
        (__int64)&unk_1400D4690,
        L"deviceContextResources");
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  if ( v1 )
  {
    sub_1400A32C4(*v1);
    ExFreePool(v1);
  }
  return a1;
}
