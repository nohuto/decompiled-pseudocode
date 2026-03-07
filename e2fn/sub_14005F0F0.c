_QWORD *__fastcall sub_14005F0F0(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  char v4; // r14
  __int64 *v6; // rsi
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  void *v12; // r14
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rax
  void *v22; // r14
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r15d
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  __int64 v35; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v36; // [rsp+60h] [rbp-31h]
  __int64 v37; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v38; // [rsp+70h] [rbp-21h]
  _BYTE v39[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v40; // [rsp+80h] [rbp-11h]
  _BYTE v41[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v42; // [rsp+90h] [rbp-1h]
  _BYTE v43[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v44; // [rsp+A0h] [rbp+Fh]
  _BYTE v45[16]; // [rsp+A8h] [rbp+17h] BYREF
  _BYTE v46[16]; // [rsp+B8h] [rbp+27h] BYREF
  unsigned int v47; // [rsp+110h] [rbp+7Fh]

  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14005A6E0(Pool2, (__int64)L"os_services::WorkItemFactory::CreateSerializedWorkItem", a1 - 352);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( *a4 )
  {
    v35 = a1 - 352;
    sub_1400AD4AC((unsigned int)&v37, 808466530, a3, a1 - 352, (__int64)a4);
    v20 = sub_1400A27D4(v45, a1 + 32);
    v21 = sub_1400A27D4(v46, a1 + 16);
    v47 = sub_14005FFD0(v37, *(_QWORD *)(a1 + 48), v21, v20);
    if ( v47 )
    {
      if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
      {
        v29 = v47;
      }
      else
      {
        v22 = &unk_1400D44E0;
        v23 = &unk_1400D44E0;
        v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                      a1 - 296,
                                      v43)
                       + 16LL);
        if ( v24 )
          v23 = v24;
        v25 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v41);
        LOBYTE(v26) = 2;
        v27 = *(void **)(*(_QWORD *)v25 + 16LL);
        v28 = *(_QWORD *)(a1 - 176);
        v29 = v47;
        if ( v27 )
          v22 = v27;
        sub_1400A5E80(
          *(_QWORD *)(v28 + 16),
          v26,
          5,
          22,
          (__int64)&unk_1400D7DC8,
          (__int64)v22,
          (__int64)v23,
          (__int64)L"workItem->Init(m_device, m_dataLockFactory, m_executionLockFactory)",
          v47);
        v4 = 12;
      }
      if ( (v4 & 8) != 0 )
      {
        v30 = v42;
        v4 &= ~8u;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
      }
      if ( (v4 & 4) != 0 )
      {
        v31 = v44;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      sub_14000A3FC(v35, (__int64)L"workItem->Init(m_device, m_dataLockFactory, m_executionLockFactory)", 314, 150, v29);
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    else
    {
      sub_1400AD408(a2, &v37);
    }
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        v32 = v38;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = &unk_1400D44E0;
      v13 = &unk_1400D44E0;
      v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v39)
                     + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, &v35);
      LOBYTE(v16) = 2;
      v17 = *(void **)(*(_QWORD *)v15 + 16LL);
      if ( v17 )
        v12 = v17;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v16,
        5,
        21,
        (__int64)&unk_1400D7DC8,
        (__int64)v12,
        (__int64)v13,
        (__int64)L"callback");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v18 = v36;
      v4 &= ~2u;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v19 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    sub_140022128(a1 - 352, (__int64)L"callback", 306, 150);
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  if ( v6 )
  {
    sub_14005A99C(v6);
    ExFreePool(v6);
  }
  v33 = (volatile signed __int32 *)a4[1];
  if ( v33 )
  {
    if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
  return a2;
}
