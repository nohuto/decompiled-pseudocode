__int64 __fastcall sub_14010ABAC(_QWORD *a1, __int64 *a2)
{
  char v2; // bl
  __int64 *v4; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // r14
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  __int64 v11; // rsi
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // rdi
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rax
  __int64 v22; // rsi
  const wchar_t *v23; // rax
  const wchar_t *v24; // rcx
  volatile signed __int32 *v25; // rdi
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  volatile signed __int32 *v35; // rbx
  volatile signed __int32 *v36; // rbx
  _QWORD *v37; // rax
  volatile signed __int32 *v38; // rbx
  __int64 v39; // [rsp+40h] [rbp-89h] BYREF
  volatile signed __int32 *v40; // [rsp+48h] [rbp-81h]
  __int64 (__fastcall **v41)(PVOID); // [rsp+50h] [rbp-79h] BYREF
  PVOID P; // [rsp+60h] [rbp-69h]
  __int64 v43; // [rsp+68h] [rbp-61h]
  __int64 v44; // [rsp+70h] [rbp-59h]
  _BYTE v45[8]; // [rsp+78h] [rbp-51h] BYREF
  volatile signed __int32 *v46; // [rsp+80h] [rbp-49h]
  _BYTE v47[8]; // [rsp+88h] [rbp-41h] BYREF
  volatile signed __int32 *v48; // [rsp+90h] [rbp-39h]
  _BYTE v49[8]; // [rsp+98h] [rbp-31h] BYREF
  volatile signed __int32 *v50; // [rsp+A0h] [rbp-29h]
  _BYTE v51[8]; // [rsp+A8h] [rbp-21h] BYREF
  volatile signed __int32 *v52; // [rsp+B0h] [rbp-19h]
  _BYTE v53[8]; // [rsp+B8h] [rbp-11h] BYREF
  volatile signed __int32 *v54; // [rsp+C0h] [rbp-9h]
  __int64 v55; // [rsp+C8h] [rbp-1h] BYREF
  volatile signed __int32 *v56; // [rsp+D0h] [rbp+7h]
  _QWORD v57[9]; // [rsp+D8h] [rbp+Fh] BYREF
  int v58; // [rsp+138h] [rbp+6Fh] BYREF
  char v59; // [rsp+140h] [rbp+77h] BYREF

  v2 = 0;
  v58 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x20) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005C614(Pool2, (__int64)L"os_services::IoctlDispatcher::BindAndInitialize", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v45)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(_QWORD *)(a1[22] + 16LL);
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v47)
                              + 16LL);
      if ( v12 )
        v8 = v12;
      sub_1400A3320(v11, 2u, 6u, 0xAu, (__int64)&unk_1400D7CC0, v9, v8, L"lockFactory");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v13 = v46;
      v2 &= ~2u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v14 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_14000B954((int)a1, (__int64)L"lockFactory", 54, 134);
LABEL_46:
    if ( v4 )
    {
      sub_14005C8D0(v4);
      ExFreePool(v4);
    }
    v27 = (volatile signed __int32 *)a2[1];
    if ( v27 && _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return 3221225485LL;
  }
  v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 8LL))(*a2, v49);
  v16 = a1[47];
  a1[47] = v15[1];
  v17 = *v15;
  v15[1] = v16;
  v18 = a1[46];
  a1[46] = v17;
  *v15 = v18;
  v19 = v50;
  if ( v50 )
  {
    if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  if ( !a1[46] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v51)
                              + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = *(_QWORD *)(a1[22] + 16LL);
      v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v53)
                              + 16LL);
      v24 = (const wchar_t *)&unk_1400D44E0;
      if ( v23 )
        v24 = v23;
      sub_1400A3320(v22, 2u, 6u, 0xBu, (__int64)&unk_1400D7CC0, v20, v24, L"m_handlersLock");
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v25 = v52;
      v2 &= ~8u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v26 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    sub_140022208((int)a1, (__int64)L"m_handlersLock", 56, 134);
    goto LABEL_46;
  }
  LOBYTE(v58) = 1;
  v59 = 0;
  sub_1400A27D4(&v39, a1 + 12);
  v29 = (*(__int64 (__fastcall **)(_QWORD *))(a1[7] + 8LL))(a1 + 7);
  v30 = sub_14005C3F8((__int64)&v41, v29, (__int64)L" History");
  v31 = sub_1400ACBCC(&v55, 0x30303733u, v30, &v39, a2, &v59, (char *)&v58);
  v32 = a1[55];
  a1[55] = v31[1];
  v33 = *v31;
  v31[1] = v32;
  v34 = a1[54];
  a1[54] = v33;
  *v31 = v34;
  v35 = v56;
  if ( v56 )
  {
    if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  v41 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( v40 )
  {
    if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
    {
      v36 = v40;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
      if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
    }
  }
  v37 = sub_1400A27D4(v57, a1 + 54);
  sub_1400714D4(a1, v37, 1);
  if ( v4 )
  {
    sub_14005C8D0(v4);
    ExFreePool(v4);
  }
  v38 = (volatile signed __int32 *)a2[1];
  if ( v38 )
  {
    if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
      if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
    }
  }
  return 0LL;
}
