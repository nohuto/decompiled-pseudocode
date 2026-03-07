__int64 __fastcall sub_1400FFB58(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // ecx
  int v13; // eax
  const wchar_t *v14; // r12
  const wchar_t *v15; // r14
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // r14
  volatile signed __int32 *v21; // rdi
  int v22; // r8d
  int v23; // eax
  const wchar_t *v24; // r14
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  __int64 v27; // rax
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // r14
  volatile signed __int32 *v30; // rdi
  signed __int32 v32[8]; // [rsp+0h] [rbp-B8h] BYREF
  const wchar_t *v33; // [rsp+30h] [rbp-88h]
  const wchar_t *v34; // [rsp+38h] [rbp-80h]
  unsigned int v35; // [rsp+40h] [rbp-78h]
  _BYTE v36[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-60h]
  _BYTE v38[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-50h]
  _BYTE v40[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-40h]
  _BYTE v42[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v43; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::DisarmFlexibleFilters",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[54];
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v23 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v23 = -1073741130;
    v9 = v23;
    goto LABEL_40;
  }
  v8 = *(_DWORD *)(v7 + 22536);
  if ( v8 == -1 && *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v9 = -1073741130;
LABEL_40:
    v14 = L"m_mmioAccessor->UnsetMaskSafe(0x05808, 0x00FF0000)";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v42)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v40);
      v35 = v9;
      v34 = L"m_mmioAccessor->UnsetMaskSafe(0x05808, 0x00FF0000)";
      v33 = v25;
      v28 = *(const wchar_t **)(*(_QWORD *)v27 + 16LL);
      if ( v28 )
        v24 = v28;
      sub_1400A5E80(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0x30u, (__int64)&unk_1400D64E8, v24, v33, v34);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v29 = v41;
      v1 &= ~2u;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v30 = v43;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    v22 = 745;
    goto LABEL_57;
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 8) + 22536LL) = v8 & 0xFF00FFFF;
  _InterlockedOr(v32, 0);
  v10 = a1[54];
  v11 = *(_QWORD *)(v10 + 8);
  if ( !v11 || *(_DWORD *)(v10 + 20) )
  {
    v13 = -1073741661;
    if ( *(_DWORD *)(v10 + 20) == 3 )
      v13 = -1073741130;
    v9 = v13;
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 22540);
    if ( v12 != -1 || *(_DWORD *)(*(_QWORD *)(v10 + 8) + 8LL) != -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v10 + 8) + 22540LL) = (unsigned __int8)v12;
      _InterlockedOr(v32, 0);
      v9 = 0;
      goto LABEL_58;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 8LL))(a1[54], 3LL);
    v9 = -1073741130;
  }
  v14 = L"m_mmioAccessor->UnsetMaskSafe(0x0580C, 0xFFFFFF00)";
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v15 = (const wchar_t *)&unk_1400D44E0;
    v16 = (const wchar_t *)&unk_1400D44E0;
    v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v38)
                            + 16LL);
    if ( v17 )
      v16 = v17;
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v36);
    v35 = v9;
    v34 = L"m_mmioAccessor->UnsetMaskSafe(0x0580C, 0xFFFFFF00)";
    v33 = v16;
    v19 = *(const wchar_t **)(*(_QWORD *)v18 + 16LL);
    if ( v19 )
      v15 = v19;
    sub_1400A5E80(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0x31u, (__int64)&unk_1400D64E8, v15, v33, v34);
    v1 = 12;
  }
  if ( (v1 & 8) != 0 )
  {
    v20 = v37;
    v1 &= ~8u;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v21 = v39;
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  v22 = 747;
LABEL_57:
  sub_14000F3C4((int)a1, (__int64)v14, v22, 59, v9);
LABEL_58:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v9;
}
