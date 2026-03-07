__int64 __fastcall sub_14013FFC8(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  const wchar_t *v12; // r12
  const wchar_t *v13; // rdx
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rbx
  const wchar_t *v17; // r12
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rbx
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  volatile signed __int32 *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  const wchar_t *v32; // r12
  const wchar_t *v33; // rdx
  const wchar_t *v34; // rax
  volatile signed __int32 *v35; // rdi
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  __int64 v39; // [rsp+48h] [rbp-49h] BYREF
  volatile signed __int32 *v40; // [rsp+50h] [rbp-41h]
  _BYTE v41[8]; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v42; // [rsp+60h] [rbp-31h]
  _BYTE v43[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v44; // [rsp+70h] [rbp-21h]
  _BYTE v45[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v46; // [rsp+80h] [rbp-11h]
  _BYTE v47[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v48; // [rsp+90h] [rbp-1h]
  _BYTE v49[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v50; // [rsp+A0h] [rbp+Fh]
  _BYTE v51[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v52; // [rsp+B0h] [rbp+1Fh]
  _BYTE v53[8]; // [rsp+B8h] [rbp+27h] BYREF
  volatile signed __int32 *v54; // [rsp+C0h] [rbp+2Fh]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::Initialize", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  if ( !a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v43);
      v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v41);
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)v11 + 16LL);
      if ( v14 )
        v13 = v14;
      if ( *(_QWORD *)(v10 + 16) )
        v12 = *(const wchar_t **)(v10 + 16);
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0x10u, (__int64)&unk_1400D9E10, v13, v12, L"netAdapter");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v15 = v42;
      v3 &= ~2u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v16 = v44;
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
    sub_14000B87C((int)a1, (__int64)L"netAdapter", 107, 113);
LABEL_42:
    v23 = -1073741811;
    goto LABEL_70;
  }
  a1[63] = a2;
  if ( !a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v47)
                              + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v45)
                              + 16LL);
      if ( v20 )
        v17 = v20;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0x11u, (__int64)&unk_1400D9E10, v17, v18, L"device");
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v21 = v46;
      v3 &= ~8u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v22 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    sub_14000B00C((int)a1, (__int64)L"device", 110, 113);
    goto LABEL_42;
  }
  v24 = a1[46];
  a1[64] = a3;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 8LL))(v24, &v39);
  v25 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v39 + 8LL))(v39, v49);
  v26 = a1[49];
  a1[49] = v25[1];
  v27 = *v25;
  v25[1] = v26;
  v28 = a1[48];
  a1[48] = v27;
  *v25 = v28;
  v29 = v50;
  if ( v50 )
  {
    if ( !_InterlockedDecrement(v50 + 2) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( !_InterlockedDecrement(v29 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  if ( a1[48] )
  {
    sub_14014C3F8(a1[71]);
    v23 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v30 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v53);
      v31 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v51);
      v32 = (const wchar_t *)&unk_1400D44E0;
      v33 = (const wchar_t *)&unk_1400D44E0;
      v34 = *(const wchar_t **)(*(_QWORD *)v31 + 16LL);
      if ( v34 )
        v33 = v34;
      if ( *(_QWORD *)(v30 + 16) )
        v32 = *(const wchar_t **)(v30 + 16);
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0x12u,
        (__int64)&unk_1400D9E10,
        v33,
        v32,
        L"m_flexibleFiltersLock");
      v3 = 48;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v35 = v52;
      v3 &= ~0x20u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v36 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    sub_14000B51C((int)a1, (__int64)L"m_flexibleFiltersLock", 117, 113);
    v23 = -1073741801;
  }
  v37 = v40;
  if ( v40 )
  {
    if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
      if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
    }
  }
LABEL_70:
  if ( v5 )
  {
    sub_140075108(v5);
    ExFreePool(v5);
  }
  return v23;
}
