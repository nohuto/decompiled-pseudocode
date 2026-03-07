_QWORD *__fastcall sub_140061F80(__int64 a1, _QWORD *a2, int a3, _QWORD *a4, char a5)
{
  char v5; // bl
  __int64 *v7; // r14
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  void *v13; // rsi
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rbx
  int v21; // esi
  __int64 v22; // r8
  __int64 v23; // rsi
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  void *v29; // rcx
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rbx
  void *v32; // rdi
  void *v33; // rax
  __int64 v34; // rax
  void *v35; // rdx
  void *v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // r12d
  volatile signed __int32 *v39; // rsi
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  __int64 v44; // [rsp+30h] [rbp-69h]
  __int64 v45; // [rsp+58h] [rbp-41h] BYREF
  volatile signed __int32 *v46; // [rsp+60h] [rbp-39h]
  __int64 v47; // [rsp+68h] [rbp-31h] BYREF
  volatile signed __int32 *v48; // [rsp+70h] [rbp-29h]
  _BYTE v49[8]; // [rsp+78h] [rbp-21h] BYREF
  volatile signed __int32 *v50; // [rsp+80h] [rbp-19h]
  _BYTE v51[8]; // [rsp+88h] [rbp-11h] BYREF
  volatile signed __int32 *v52; // [rsp+90h] [rbp-9h]
  _BYTE v53[8]; // [rsp+98h] [rbp-1h] BYREF
  volatile signed __int32 *v54; // [rsp+A0h] [rbp+7h]
  _BYTE v55[8]; // [rsp+A8h] [rbp+Fh] BYREF
  volatile signed __int32 *v56; // [rsp+B0h] [rbp+17h]
  _BYTE v57[8]; // [rsp+B8h] [rbp+1Fh] BYREF
  volatile signed __int32 *v58; // [rsp+C0h] [rbp+27h]
  unsigned int v59; // [rsp+110h] [rbp+77h]

  v5 = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_14005A6E0(
              Pool2,
              (__int64)L"os_services::DeferredProcedureCallFactory::CreateDeferredProcedureCall",
              a1 - 352);
      if ( v12 )
        v7 = v12;
    }
  }
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = &unk_1400D44E0;
      v14 = &unk_1400D44E0;
      v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v49)
                     + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, &v45);
      LOBYTE(v17) = 2;
      v18 = *(void **)(*(_QWORD *)v16 + 16LL);
      if ( v18 )
        v13 = v18;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v17,
        5,
        16,
        (__int64)&unk_1400D8318,
        (__int64)v13,
        (__int64)v14,
        (__int64)L"callback");
      v5 = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v19 = v46;
      v5 &= ~2u;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v20 = v50;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    sub_140022128(a1 - 352, (__int64)L"callback", 168, 129);
    *a2 = 0LL;
    a2[1] = 0LL;
    goto LABEL_68;
  }
  v21 = a1 - 352;
  v45 = a1 - 352;
  sub_1400ADC90((unsigned int)&v47, 808477232, a3, a1 - 352, (__int64)a4);
  if ( v47 )
  {
    LOBYTE(v22) = a5;
    v59 = sub_140062698(v47, *(_QWORD *)(a1 + 16), v22);
    if ( !v59 )
    {
      sub_1400A5180(a2, &v47);
      goto LABEL_64;
    }
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
    {
      v38 = v59;
    }
    else
    {
      v32 = &unk_1400D44E0;
      v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v57)
                     + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v55);
      v35 = &unk_1400D44E0;
      v36 = *(void **)(*(_QWORD *)v34 + 16LL);
      v37 = *(_QWORD *)(a1 - 176);
      v38 = v59;
      if ( v36 )
        v35 = v36;
      v44 = (__int64)v35;
      LOBYTE(v35) = 2;
      sub_1400A5E80(
        *(_QWORD *)(v37 + 16),
        (_DWORD)v35,
        5,
        18,
        (__int64)&unk_1400D8318,
        v44,
        (__int64)v32,
        (__int64)L"dpc->Init(m_device, automaticSerialization)",
        v59);
      v5 = 48;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v39 = v56;
      v5 &= ~0x20u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
      v21 = v45;
    }
    if ( (v5 & 0x10) != 0 )
    {
      v40 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    sub_1400095B8(v21, (__int64)L"dpc->Init(m_device, automaticSerialization)", 173, 129, v38);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
      v24 = &unk_1400D44E0;
      v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                    a1 - 296,
                                    v51)
                     + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v53);
      LOBYTE(v27) = 2;
      v28 = *(void **)(*(_QWORD *)v26 + 16LL);
      v29 = &unk_1400D44E0;
      if ( v28 )
        v29 = v28;
      sub_1400A3320(v23, v27, 5, 17, (__int64)&unk_1400D8318, (__int64)v24, (__int64)v29, (__int64)L"dpc");
      v5 = 12;
    }
    if ( (v5 & 8) != 0 )
    {
      v30 = v52;
      v5 &= ~8u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v31 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    sub_14000DA44(a1 - 352, (__int64)L"dpc", 171, 129);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_64:
  if ( v48 )
  {
    if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
    {
      v41 = v48;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
      if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
    }
  }
LABEL_68:
  if ( v7 )
  {
    sub_14005A99C(v7);
    ExFreePool(v7);
  }
  v42 = (volatile signed __int32 *)a4[1];
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
      if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
    }
  }
  return a2;
}
