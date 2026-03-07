__int64 __fastcall sub_14010F230(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  __int64 *v5; // r13
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rsi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rcx
  const wchar_t *v14; // rdx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rbx
  int v18; // edi
  _QWORD *v19; // rax
  __int64 *v20; // rdx
  volatile signed __int32 *v21; // rdi
  const wchar_t *v22; // r14
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  __int64 v30; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int32 *v31; // [rsp+58h] [rbp-71h]
  __int128 v32; // [rsp+60h] [rbp-69h] BYREF
  int v33; // [rsp+70h] [rbp-59h]
  __int64 v34; // [rsp+80h] [rbp-49h]
  _BYTE v35[8]; // [rsp+88h] [rbp-41h] BYREF
  volatile signed __int32 *v36; // [rsp+90h] [rbp-39h]
  _BYTE v37[8]; // [rsp+98h] [rbp-31h] BYREF
  volatile signed __int32 *v38; // [rsp+A0h] [rbp-29h]
  _BYTE v39[8]; // [rsp+A8h] [rbp-21h] BYREF
  volatile signed __int32 *v40; // [rsp+B0h] [rbp-19h]
  _BYTE v41[8]; // [rsp+B8h] [rbp-11h] BYREF
  volatile signed __int32 *v42; // [rsp+C0h] [rbp-9h]
  _QWORD v43[11]; // [rsp+C8h] [rbp-1h] BYREF
  unsigned int v44; // [rsp+130h] [rbp+67h] BYREF
  __int64 v45; // [rsp+138h] [rbp+6Fh]
  __int64 v46; // [rsp+140h] [rbp+77h]
  int v47; // [rsp+148h] [rbp+7Fh] BYREF

  v46 = a3;
  v45 = a2;
  v3 = 0;
  v44 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterruptsPool::EvtPrepareHardware", a1);
      if ( v8 )
        v5 = v8;
    }
  }
  *(_DWORD *)(a1 + 408) = 0;
  v33 = 0;
  v34 = 0LL;
  v32 = 0LL;
  v9 = sub_14010F788(a1, a3, &v32);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v37);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v35)
                              + 16LL);
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      if ( v12 )
        v14 = v12;
      if ( *(_QWORD *)(v10 + 16) )
        v13 = *(const wchar_t **)(v10 + 16);
      sub_1400A5E80(
        v11,
        2u,
        4u,
        0xCu,
        (__int64)&unk_1400D89D0,
        v14,
        v13,
        L"FindInterruptResources(resourcesTranslated, interruptResourceIds)");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v15 = v36;
      v3 &= ~2u;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v16 = v38;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14002D834(a1, (__int64)L"FindInterruptResources(resourcesTranslated, interruptResourceIds)", 89, 141, v9);
  }
  else
  {
    v44 = 0;
    v17 = *((_QWORD *)&v32 + 1);
    *(_DWORD *)(a1 + 408) = v34;
    if ( !v34 || (__int128 *)v17 == &v32 )
    {
LABEL_36:
      v9 = 0;
    }
    else
    {
      while ( 1 )
      {
        v47 = *(_DWORD *)(v17 + 16);
        sub_1400AE850(&v30, 0x30303737u, a1, &v47, &v44);
        v18 = v30;
        if ( !v30 )
          break;
        v19 = sub_1400A27D4(v43, (__int64 *)(a1 + 376));
        v9 = sub_140111D8C(v18, v45, v46, *(_QWORD *)(a1 + 368), (__int64)v19);
        if ( v9 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            sub_1400A1CFC(
              *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
              2u,
              4u,
              0xEu,
              (__int64)&unk_1400D89D0,
              L"interrupt->Initialize(resourcesRaw, resourcesTranslated, m_device, m_osServices)",
              v9);
          goto LABEL_56;
        }
        if ( *(_QWORD *)(a1 + 456) )
          v20 = (__int64 *)(a1 + 416);
        else
          v20 = *(__int64 **)(a1 + 424);
        sub_1400A440C((__int64 *)(a1 + 416), v20, &v30);
        ++v44;
        if ( v31 )
        {
          if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
          {
            v21 = v31;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
        v17 = *(_QWORD *)(v17 + 8);
        if ( (__int128 *)v17 == &v32 )
          goto LABEL_36;
      }
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v22 = (const wchar_t *)&unk_1400D44E0;
        v23 = (const wchar_t *)&unk_1400D44E0;
        v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v41)
                                + 16LL);
        if ( v24 )
          v23 = v24;
        v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v39)
                                + 16LL);
        if ( v25 )
          v22 = v25;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          4u,
          0xDu,
          (__int64)&unk_1400D89D0,
          v22,
          v23,
          L"interrupt");
        v3 = 12;
      }
      if ( (v3 & 8) != 0 )
      {
        v26 = v40;
        v3 &= ~8u;
        if ( v40 )
        {
          if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      if ( (v3 & 4) != 0 )
      {
        v27 = v42;
        if ( v42 )
        {
          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      sub_14003B970(a1, (__int64)L"interrupt", 97, 141);
      v9 = -1073741801;
LABEL_56:
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          v28 = v31;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
  }
  while ( v34 )
    sub_1400A4398(&v32, *((_QWORD **)&v32 + 1));
  v32 = 0LL;
  if ( v5 )
  {
    sub_14005B5AC(v5);
    ExFreePool(v5);
  }
  return v9;
}
