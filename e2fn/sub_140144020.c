__int64 __fastcall sub_140144020(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rsi
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rbx
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  unsigned int v24; // ebx
  _QWORD *v25; // rax
  __int64 v27; // [rsp+48h] [rbp-49h] BYREF
  volatile signed __int32 *v28; // [rsp+50h] [rbp-41h]
  __int64 v29; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v30; // [rsp+60h] [rbp-31h]
  _BYTE v31[8]; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v32; // [rsp+70h] [rbp-21h]
  _BYTE v33[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v34; // [rsp+80h] [rbp-11h]
  _BYTE v35[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v36; // [rsp+90h] [rbp-1h]
  __int64 (__fastcall **v37)(PVOID); // [rsp+98h] [rbp+7h] BYREF
  PVOID P; // [rsp+A8h] [rbp+17h]
  __int64 v39; // [rsp+B0h] [rbp+1Fh]
  __int64 v40; // [rsp+B8h] [rbp+27h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterQueue::Initialize", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[52];
  sub_1400A27D4(&v27, a1 + 12);
  v7 = a1 + 7;
  v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 8LL))(v6, v31);
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(a1[7] + 8LL))(a1 + 7);
  v10 = sub_140064C38((__int64)&v37, v9, (__int64)L" Events History");
  v11 = sub_1400B5584(&v29, 0x30303964u, v10, &v27, v8);
  v12 = a1[55];
  a1[55] = v11[1];
  v13 = *v11;
  v11[1] = v12;
  v14 = a1[54];
  a1[54] = v13;
  *v11 = v14;
  v15 = v30;
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v37 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      v16 = v28;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  v17 = v32;
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  if ( a1[54] )
  {
    v25 = sub_1400A27D4(&v27, a1 + 54);
    sub_1400714D4(a1, v25, 0);
    v24 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 16LL))(a1 + 7, v35)
                              + 16LL);
      if ( v20 )
        v19 = v20;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v7 + 24LL))(a1 + 7, v33)
                              + 16LL);
      if ( v21 )
        v18 = v21;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xBu, (__int64)&unk_1400DA028, v18, v19, L"m_eventHistory");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v22 = v34;
      v1 &= ~2u;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v23 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_140022208((int)a1, (__int64)L"m_eventHistory", 79, 106);
    v24 = -1073741811;
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v24;
}
