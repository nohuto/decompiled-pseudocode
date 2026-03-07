_QWORD *__fastcall sub_14001AE20(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  char v4; // r14
  __int64 *v6; // r15
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // r8
  void *v14; // rdx
  void *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  int v18; // edi
  int v19; // r8d
  __int64 v20; // rbx
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  void *v24; // rdx
  void *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  void *v34; // rdi
  void *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  void *v38; // rax
  void *v39; // rcx
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  __int64 v44; // [rsp+30h] [rbp-A1h]
  __int64 v45; // [rsp+38h] [rbp-99h]
  int v46; // [rsp+58h] [rbp-79h] BYREF
  __int64 v47; // [rsp+60h] [rbp-71h] BYREF
  volatile signed __int32 *v48; // [rsp+68h] [rbp-69h]
  __int64 v49; // [rsp+70h] [rbp-61h]
  _QWORD v50[2]; // [rsp+78h] [rbp-59h] BYREF
  _BYTE v51[8]; // [rsp+88h] [rbp-49h] BYREF
  volatile signed __int32 *v52; // [rsp+90h] [rbp-41h]
  _BYTE v53[8]; // [rsp+98h] [rbp-39h] BYREF
  volatile signed __int32 *v54; // [rsp+A0h] [rbp-31h]
  _BYTE v55[8]; // [rsp+A8h] [rbp-29h] BYREF
  volatile signed __int32 *v56; // [rsp+B0h] [rbp-21h]
  _BYTE v57[8]; // [rsp+B8h] [rbp-19h] BYREF
  volatile signed __int32 *v58; // [rsp+C0h] [rbp-11h]
  _BYTE v59[8]; // [rsp+C8h] [rbp-9h] BYREF
  volatile signed __int32 *v60; // [rsp+D0h] [rbp-1h]
  _BYTE v61[8]; // [rsp+D8h] [rbp+7h] BYREF
  volatile signed __int32 *v62; // [rsp+E0h] [rbp+Fh]
  _BYTE v63[64]; // [rsp+E8h] [rbp+17h] BYREF
  unsigned int v66; // [rsp+150h] [rbp+7Fh]

  v4 = 0;
  v46 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14000BBDC(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnMsixInterruptsFactory::AllocateLinkInterrupt",
              a1 - 352);
      if ( v10 )
        v6 = v10;
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v53);
    v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v51);
    v13 = &unk_1400D44E0;
    v14 = &unk_1400D44E0;
    v15 = *(void **)(*(_QWORD *)v12 + 16LL);
    if ( v15 )
      v13 = v15;
    if ( *(_QWORD *)(v11 + 16) )
      v14 = *(void **)(v11 + 16);
    v45 = (__int64)v14;
    LOBYTE(v14) = 4;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      (_DWORD)v14,
      10,
      40,
      (__int64)&unk_1400D5958,
      (__int64)v13,
      v45,
      (__int64)qword_1400B7720);
    v4 = 3;
  }
  if ( (v4 & 2) != 0 )
  {
    v16 = v52;
    v4 &= ~2u;
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v17 = v54;
    v4 &= ~1u;
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  v18 = a1 - 352;
  v46 = 2;
  v19 = a1 - 352;
  v49 = a1 - 352;
  if ( a4 )
    v19 = a4;
  sub_1400A7694((unsigned int)&v47, 808465714, v19, a1 + 72, (__int64)&v46);
  v20 = v47;
  if ( v47 )
  {
    v30 = a3[1];
    a3[1] = 0LL;
    v50[1] = v30;
    v31 = *a3;
    *a3 = 0LL;
    v50[0] = v31;
    v32 = sub_1400A27D4(v63, a1 + 120);
    v66 = sub_1400558B0(v20, v32, v50);
    if ( !v66 )
    {
      sub_1400A5180(a2, &v47);
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          v42 = v48;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
        }
      }
      if ( v6 )
      {
        sub_14000BFA4(v6);
        ExFreePool(v6);
      }
      v29 = (volatile signed __int32 *)a3[1];
      if ( v29 && _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        goto LABEL_77;
      return a2;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 |= 0x30u;
      v33 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
      v34 = &unk_1400D44E0;
      v35 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v61)
                     + 16LL);
      if ( v35 )
        v34 = v35;
      v36 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v59);
      LOBYTE(v37) = 2;
      v38 = *(void **)(*(_QWORD *)v36 + 16LL);
      v39 = &unk_1400D44E0;
      if ( v38 )
        v39 = v38;
      sub_1400A5E80(
        v33,
        v37,
        10,
        42,
        (__int64)&unk_1400D5958,
        (__int64)v39,
        (__int64)v34,
        (__int64)L"interruptControl->Bind(m_otherInterruptsDispatcher, move(interruptAssertedCallback))",
        v66);
      v18 = v49;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v40 = v60;
      v4 &= ~0x20u;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v41 = v62;
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
    sub_14000AA78(
      v18,
      (__int64)L"interruptControl->Bind(m_otherInterruptsDispatcher, move(interruptAssertedCallback))",
      377,
      65,
      v66);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 |= 0xCu;
      v21 = &unk_1400D44E0;
      v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v57)
                     + 16LL);
      if ( v22 )
        v21 = v22;
      v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v55);
      v24 = &unk_1400D44E0;
      v25 = *(void **)(*(_QWORD *)v23 + 16LL);
      if ( v25 )
        v24 = v25;
      v44 = (__int64)v24;
      LOBYTE(v24) = 2;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        (_DWORD)v24,
        10,
        41,
        (__int64)&unk_1400D5958,
        v44,
        (__int64)v21,
        (__int64)L"interruptControl");
      v18 = v49;
    }
    if ( (v4 & 8) != 0 )
    {
      v26 = v56;
      v4 &= ~8u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v27 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_14000B294(v18, (__int64)L"interruptControl", 371, 65);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v48 )
  {
    if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
    {
      v28 = v48;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
    }
  }
  if ( v6 )
  {
    sub_14000BFA4(v6);
    ExFreePool(v6);
  }
  v29 = (volatile signed __int32 *)a3[1];
  if ( v29 && _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
  {
LABEL_77:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return a2;
}
