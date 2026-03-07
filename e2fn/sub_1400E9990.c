__int64 __fastcall sub_1400E9990(__int64 a1)
{
  char v1; // bl
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // r15d
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // r15d
  volatile signed __int32 *v14; // rax
  __int64 v15; // rax
  volatile signed __int32 *v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  __int64 v20; // rsi
  const wchar_t *v21; // rax
  const wchar_t *v22; // rcx
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rbx
  const wchar_t *v25; // rsi
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  __int64 v35; // [rsp+58h] [rbp-79h] BYREF
  volatile signed __int32 *v36; // [rsp+60h] [rbp-71h]
  __int64 v37; // [rsp+68h] [rbp-69h] BYREF
  volatile signed __int32 *v38; // [rsp+70h] [rbp-61h]
  _QWORD v39[2]; // [rsp+78h] [rbp-59h] BYREF
  _QWORD v40[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v41; // [rsp+98h] [rbp-39h] BYREF
  volatile signed __int32 *v42; // [rsp+A0h] [rbp-31h]
  char v43[8]; // [rsp+A8h] [rbp-29h] BYREF
  volatile signed __int32 *v44; // [rsp+B0h] [rbp-21h]
  char v45[8]; // [rsp+B8h] [rbp-19h] BYREF
  volatile signed __int32 *v46; // [rsp+C0h] [rbp-11h]
  char v47[8]; // [rsp+C8h] [rbp-9h] BYREF
  volatile signed __int32 *v48; // [rsp+D0h] [rbp-1h]
  char v49[8]; // [rsp+D8h] [rbp+7h] BYREF
  volatile signed __int32 *v50; // [rsp+E0h] [rbp+Fh]
  char v51[8]; // [rsp+E8h] [rbp+17h] BYREF
  volatile signed __int32 *v52; // [rsp+F0h] [rbp+1Fh]
  char v53[8]; // [rsp+F8h] [rbp+27h] BYREF
  volatile signed __int32 *v54; // [rsp+100h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::CreateInterruptsFactory", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 384) + 40LL))(*(_QWORD *)(a1 + 384), &v35);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 384) + 8LL))(*(_QWORD *)(a1 + 384), &v41);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 8LL))(v41, &v37);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  if ( v6 == 1 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v53)
                              + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v51)
                              + 16LL);
      if ( v28 )
        v25 = v28;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x64u,
        (__int64)&unk_1400D49F8,
        v25,
        v26,
        (const wchar_t *)qword_14014EC70);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v29 = v52;
      v1 &= ~2u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v30 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    v13 = -1073741637;
  }
  else if ( v6 == 5 )
  {
    v14 = v36;
    v36 = 0LL;
    v39[1] = v14;
    v15 = v35;
    v35 = 0LL;
    v39[0] = v15;
    v16 = v38;
    v38 = 0LL;
    v40[1] = v16;
    v17 = v37;
    v37 = 0LL;
    v40[0] = v17;
    v13 = sub_1400E9FD4(a1, v40, v39);
    if ( v13 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v18 = (const wchar_t *)&unk_1400D44E0;
        v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v47)
                                + 16LL);
        if ( v19 )
          v18 = v19;
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v49)
                                + 16LL);
        v22 = (const wchar_t *)&unk_1400D44E0;
        if ( v21 )
          v22 = v21;
        sub_1400A5E80(
          v20,
          2u,
          0xAu,
          0x65u,
          (__int64)&unk_1400D49F8,
          v18,
          v22,
          L"CreateMsixInterruptsFactory(move(bar0), move(interruptsPool))");
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v23 = v48;
        v1 &= ~8u;
        if ( v48 )
        {
          if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v24 = v50;
        if ( v50 )
        {
          if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
          }
        }
      }
      sub_140009D80(a1, (__int64)L"CreateMsixInterruptsFactory(move(bar0), move(interruptsPool))", 718, 46, v13);
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            v45)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v43)
                              + 16LL);
      if ( v10 )
        v7 = v10;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x66u,
        (__int64)&unk_1400D49F8,
        v7,
        v8,
        (const wchar_t *)qword_14014EC70);
      v1 = 48;
    }
    if ( (v1 & 0x20) != 0 )
    {
      v11 = v44;
      v1 &= ~0x20u;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v1 & 0x10) != 0 )
    {
      v12 = v46;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    v13 = -1073741661;
  }
  v31 = v38;
  if ( v38 )
  {
    if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  v32 = v42;
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  v33 = v36;
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v13;
}
