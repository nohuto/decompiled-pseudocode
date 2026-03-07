_QWORD *__fastcall sub_14005F590(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  char v4; // bl
  __int64 *v6; // r14
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  void *v12; // rsi
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 *v19; // rbx
  int v20; // esi
  __int64 v21; // rsi
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  void *v27; // rcx
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rbx
  void *v30; // rdi
  void *v31; // rax
  __int64 v32; // rax
  void *v33; // rdx
  void *v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r12d
  volatile signed __int32 *v37; // rsi
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  __int64 v42; // [rsp+30h] [rbp-61h]
  __int64 v43; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v44; // [rsp+60h] [rbp-31h]
  __int64 v45; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v46; // [rsp+70h] [rbp-21h]
  _BYTE v47[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v48; // [rsp+80h] [rbp-11h]
  _BYTE v49[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v50; // [rsp+90h] [rbp-1h]
  _BYTE v51[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v52; // [rsp+A0h] [rbp+Fh]
  _BYTE v53[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v54; // [rsp+B0h] [rbp+1Fh]
  _BYTE v55[8]; // [rsp+B8h] [rbp+27h] BYREF
  volatile signed __int32 *v56; // [rsp+C0h] [rbp+2Fh]
  unsigned int v57; // [rsp+110h] [rbp+7Fh]

  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14005A6E0(Pool2, (__int64)L"os_services::WorkItemFactory::CreateWorkItem", a1 - 352);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = &unk_1400D44E0;
      v13 = &unk_1400D44E0;
      v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v47)
                     + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, &v43);
      LOBYTE(v16) = 2;
      v17 = *(void **)(*(_QWORD *)v15 + 16LL);
      if ( v17 )
        v12 = v17;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v16,
        5,
        18,
        (__int64)&unk_1400D7DC8,
        (__int64)v12,
        (__int64)v13,
        (__int64)L"callback");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v18 = v44;
      v4 &= ~2u;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v19 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    sub_140022128(a1 - 352, (__int64)L"callback", 291, 150);
    *a2 = 0LL;
    a2[1] = 0LL;
    goto LABEL_68;
  }
  v20 = a1 - 352;
  v43 = a1 - 352;
  sub_1400AD520((unsigned int)&v45, 808466529, a3, a1 - 352, (__int64)a4);
  if ( v45 )
  {
    v57 = sub_14005FCC0(v45, *(_QWORD *)(a1 + 48));
    if ( !v57 )
    {
      sub_1400AD408(a2, &v45);
      goto LABEL_64;
    }
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
    {
      v36 = v57;
    }
    else
    {
      v30 = &unk_1400D44E0;
      v31 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v55)
                     + 16LL);
      if ( v31 )
        v30 = v31;
      v32 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v53);
      v33 = &unk_1400D44E0;
      v34 = *(void **)(*(_QWORD *)v32 + 16LL);
      v35 = *(_QWORD *)(a1 - 176);
      v36 = v57;
      if ( v34 )
        v33 = v34;
      v42 = (__int64)v33;
      LOBYTE(v33) = 2;
      sub_1400A5E80(
        *(_QWORD *)(v35 + 16),
        (_DWORD)v33,
        5,
        20,
        (__int64)&unk_1400D7DC8,
        v42,
        (__int64)v30,
        (__int64)L"workItem->Init(m_device)",
        v57);
      v4 = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v37 = v54;
      v4 &= ~0x20u;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
      v20 = v43;
    }
    if ( (v4 & 0x10) != 0 )
    {
      v38 = v56;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_140008244(v20, (__int64)L"workItem->Init(m_device)", 295, 150, v36);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
      v22 = &unk_1400D44E0;
      v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                    a1 - 296,
                                    v49)
                     + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v51);
      LOBYTE(v25) = 2;
      v26 = *(void **)(*(_QWORD *)v24 + 16LL);
      v27 = &unk_1400D44E0;
      if ( v26 )
        v27 = v26;
      sub_1400A3320(v21, v25, 5, 19, (__int64)&unk_1400D7DC8, (__int64)v22, (__int64)v27, (__int64)L"workItem");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v28 = v50;
      v4 &= ~8u;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v29 = v52;
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
    sub_140022128(a1 - 352, (__int64)L"workItem", 294, 150);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_64:
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
    {
      v39 = v46;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
    }
  }
LABEL_68:
  if ( v6 )
  {
    sub_14005A99C(v6);
    ExFreePool(v6);
  }
  v40 = (volatile signed __int32 *)a4[1];
  if ( v40 )
  {
    if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
      if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
    }
  }
  return a2;
}
