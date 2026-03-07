__int64 __fastcall sub_140133BA0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  const wchar_t *v10; // r13
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rbx
  int v16; // r8d
  const wchar_t *v17; // rdx
  const wchar_t *v18; // r13
  const wchar_t *v19; // rdi
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  const wchar_t *v26; // r13
  const wchar_t *v27; // rdi
  const wchar_t *v28; // rax
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  volatile signed __int32 *v38; // rdi
  const wchar_t *v39; // r13
  const wchar_t *v40; // rdi
  const wchar_t *v41; // rax
  const wchar_t *v42; // rax
  volatile signed __int32 *v43; // rdi
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  volatile signed __int32 *v48; // rbx
  __int64 v49; // [rsp+48h] [rbp-69h] BYREF
  volatile signed __int32 *v50; // [rsp+50h] [rbp-61h]
  _BYTE v51[8]; // [rsp+58h] [rbp-59h] BYREF
  volatile signed __int32 *v52; // [rsp+60h] [rbp-51h]
  _BYTE v53[8]; // [rsp+68h] [rbp-49h] BYREF
  volatile signed __int32 *v54; // [rsp+70h] [rbp-41h]
  _BYTE v55[8]; // [rsp+78h] [rbp-39h] BYREF
  volatile signed __int32 *v56; // [rsp+80h] [rbp-31h]
  _BYTE v57[8]; // [rsp+88h] [rbp-29h] BYREF
  volatile signed __int32 *v58; // [rsp+90h] [rbp-21h]
  _BYTE v59[8]; // [rsp+98h] [rbp-19h] BYREF
  volatile signed __int32 *v60; // [rsp+A0h] [rbp-11h]
  _BYTE v61[8]; // [rsp+A8h] [rbp-9h] BYREF
  volatile signed __int32 *v62; // [rsp+B0h] [rbp-1h]
  _BYTE v63[8]; // [rsp+B8h] [rbp+7h] BYREF
  volatile signed __int32 *v64; // [rsp+C0h] [rbp+Fh]
  _BYTE v65[8]; // [rsp+C8h] [rbp+17h] BYREF
  volatile signed __int32 *v66; // [rsp+D0h] [rbp+1Fh]
  _BYTE v67[8]; // [rsp+D8h] [rbp+27h] BYREF
  volatile signed __int32 *v68; // [rsp+E0h] [rbp+2Fh]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterRegistryAccessor::BindAndInitialize", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  if ( !a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v53)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v51)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xAu, (__int64)&unk_1400D9AF0, v10, v11, L"netAdapter");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v14 = v52;
      v3 &= ~2u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v15 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    v16 = 57;
    v17 = L"netAdapter";
LABEL_42:
    sub_14000B87C((int)a1, (__int64)v17, v16, 108);
    if ( v5 )
    {
      sub_140075108(v5);
      ExFreePool(v5);
    }
    v24 = (volatile signed __int32 *)a3[1];
    if ( v24 && _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return 3221225485LL;
  }
  a1[46] = a2;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v57)
                              + 16LL);
      if ( v20 )
        v19 = v20;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v55)
                              + 16LL);
      if ( v21 )
        v18 = v21;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xBu, (__int64)&unk_1400D9AF0, v18, v19, L"osServices");
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v22 = v56;
      v3 &= ~8u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v23 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    v16 = 60;
    v17 = L"osServices";
    goto LABEL_42;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 16LL))(*a3, &v49);
  if ( v49 )
  {
    v34 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v49 + 8LL))(v49, v63);
    v35 = a1[48];
    a1[48] = v34[1];
    v36 = *v34;
    v34[1] = v35;
    v37 = a1[47];
    a1[47] = v36;
    *v34 = v37;
    v38 = v64;
    if ( v64 )
    {
      if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
    if ( a1[47] )
    {
      v47 = v50;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
      if ( v5 )
      {
        sub_140075108(v5);
        ExFreePool(v5);
      }
      v48 = (volatile signed __int32 *)a3[1];
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
        }
      }
      return 0LL;
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v39 = (const wchar_t *)&unk_1400D44E0;
        v40 = (const wchar_t *)&unk_1400D44E0;
        v41 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v67)
                                + 16LL);
        if ( v41 )
          v40 = v41;
        v42 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v65)
                                + 16LL);
        if ( v42 )
          v39 = v42;
        sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xDu, (__int64)&unk_1400D9AF0, v39, v40, L"m_lock");
        v3 = -64;
      }
      if ( v3 < 0 )
      {
        v43 = v66;
        v3 &= ~0x80u;
        if ( v66 )
        {
          if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
            if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
      }
      if ( (v3 & 0x40) != 0 )
      {
        v44 = v68;
        if ( v68 )
        {
          if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
            if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
          }
        }
      }
      sub_14000B00C((int)a1, (__int64)L"m_lock", 64, 108);
      v45 = v50;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
          if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
        }
      }
      if ( v5 )
      {
        sub_140075108(v5);
        ExFreePool(v5);
      }
      v46 = (volatile signed __int32 *)a3[1];
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
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = (const wchar_t *)&unk_1400D44E0;
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v61)
                              + 16LL);
      if ( v28 )
        v27 = v28;
      v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v59)
                              + 16LL);
      if ( v29 )
        v26 = v29;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xCu, (__int64)&unk_1400D9AF0, v26, v27, L"lockFactory");
      v3 = 48;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v30 = v60;
      v3 &= ~0x20u;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v31 = v62;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    sub_14000B954((int)a1, (__int64)L"lockFactory", 62, 108);
    v32 = v50;
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
    if ( v5 )
    {
      sub_140075108(v5);
      ExFreePool(v5);
    }
    v33 = (volatile signed __int32 *)a3[1];
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
    return 3221225635LL;
  }
}
