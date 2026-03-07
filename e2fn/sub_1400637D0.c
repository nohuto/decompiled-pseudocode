_QWORD *__fastcall sub_1400637D0(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, unsigned int a5, __int64 a6)
{
  char v6; // bl
  __int64 *v8; // rsi
  _QWORD *Pool2; // rax
  __int64 *v13; // rax
  int v14; // r9d
  void *v15; // r14
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  void *v20; // rax
  volatile signed __int32 *v21; // r14
  volatile signed __int32 *v22; // rbx
  unsigned int v23; // r14d
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  void *v27; // rdx
  void *v28; // rax
  volatile signed __int32 *v29; // r14
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int64 v34; // [rsp+30h] [rbp-51h]
  __int64 v35; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v36; // [rsp+60h] [rbp-21h]
  _BYTE v37[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v38; // [rsp+70h] [rbp-11h]
  _BYTE v39[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v40; // [rsp+80h] [rbp-1h]
  _BYTE v41[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v42; // [rsp+90h] [rbp+Fh]
  _BYTE v43[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v44; // [rsp+A0h] [rbp+1Fh]
  unsigned int v45; // [rsp+100h] [rbp+7Fh]

  v6 = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v13 = sub_14005A6E0(Pool2, (__int64)L"os_services::OsTimerFactory::CreateTimer", (__int64)a1);
      if ( v13 )
        v8 = v13;
    }
  }
  v14 = (int)a1;
  if ( a6 )
    v14 = a6;
  sub_1400ADE14((unsigned int)&v35, 808477238, a3, v14, a4);
  if ( v35 )
  {
    v45 = sub_140063C30(v35, a5, a1[46]);
    v23 = v45;
    if ( !v45 )
    {
      sub_1400A5180(a2, &v35);
      goto LABEL_47;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = &unk_1400D44E0;
      v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v43) + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v41);
      v27 = &unk_1400D44E0;
      v28 = *(void **)(*(_QWORD *)v26 + 16LL);
      if ( v28 )
        v27 = v28;
      v34 = (__int64)v27;
      LOBYTE(v27) = 2;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        (_DWORD)v27,
        5,
        14,
        (__int64)&unk_1400D83F8,
        v34,
        (__int64)v24,
        (__int64)L"timer->Initialize(type, m_device)",
        v45);
      v6 = 12;
    }
    if ( (v6 & 8) != 0 )
    {
      v29 = v42;
      v6 &= ~8u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
      v23 = v45;
    }
    if ( (v6 & 4) != 0 )
    {
      v30 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_140008DF0((int)a1, (__int64)L"timer->Initialize(type, m_device)", 197, 144, v23);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = &unk_1400D44E0;
      v16 = &unk_1400D44E0;
      v17 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v39) + 16LL);
      if ( v17 )
        v16 = v17;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v37);
      LOBYTE(v19) = 2;
      v20 = *(void **)(*(_QWORD *)v18 + 16LL);
      if ( v20 )
        v15 = v20;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v19,
        5,
        13,
        (__int64)&unk_1400D83F8,
        (__int64)v15,
        (__int64)v16,
        (__int64)L"timer");
      v6 = 3;
    }
    if ( (v6 & 2) != 0 )
    {
      v21 = v38;
      v6 &= ~2u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v22 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    sub_14000AF34((int)a1, (__int64)L"timer", 196, 144);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_47:
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      v31 = v36;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  if ( v8 )
  {
    sub_14005A99C(v8);
    ExFreePool(v8);
  }
  v32 = *(volatile signed __int32 **)(a4 + 8);
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  return a2;
}
