__int64 __fastcall sub_1400FD488(_QWORD *a1, unsigned int a2)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 *v5; // r15
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // r12
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  unsigned int v14; // r14d
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // edx
  int v25; // eax
  const wchar_t *v26; // r12
  const wchar_t *v27; // rdi
  const wchar_t *v28; // rax
  __int64 v29; // rax
  const wchar_t *v30; // rax
  volatile signed __int32 *v31; // rsi
  volatile signed __int32 *v32; // rdi
  int v33; // eax
  const wchar_t *v34; // r12
  const wchar_t *v35; // rdi
  const wchar_t *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rsi
  volatile signed __int32 *v41; // rdi
  signed __int32 v43[8]; // [rsp+8h] [rbp-79h] BYREF
  const wchar_t *v44; // [rsp+38h] [rbp-49h]
  const wchar_t *v45; // [rsp+40h] [rbp-41h]
  unsigned int v46; // [rsp+48h] [rbp-39h]
  _BYTE v47[8]; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v48; // [rsp+60h] [rbp-21h]
  _BYTE v49[8]; // [rsp+68h] [rbp-19h] BYREF
  volatile signed __int32 *v50; // [rsp+70h] [rbp-11h]
  _BYTE v51[8]; // [rsp+78h] [rbp-9h] BYREF
  volatile signed __int32 *v52; // [rsp+80h] [rbp-1h]
  _BYTE v53[8]; // [rsp+88h] [rbp+7h] BYREF
  volatile signed __int32 *v54; // [rsp+90h] [rbp+Fh]
  _BYTE v55[8]; // [rsp+98h] [rbp+17h] BYREF
  volatile signed __int32 *v56; // [rsp+A0h] [rbp+1Fh]
  _BYTE v57[8]; // [rsp+A8h] [rbp+27h] BYREF
  volatile signed __int32 *v58; // [rsp+B0h] [rbp+2Fh]

  v2 = 0;
  v3 = a2;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::ArmFlexibleFilters",
             (__int64)a1);
      if ( v7 )
        v5 = v7;
    }
  }
  if ( !(_DWORD)v3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v49)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v47)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        4u,
        0xAu,
        0x2Du,
        (__int64)&unk_1400D64E8,
        v8,
        v9,
        (const wchar_t *)qword_14014EC70);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v12 = v48;
      v2 &= ~2u;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v13 = v50;
      if ( v50 )
      {
        if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    goto LABEL_23;
  }
  v15 = 0;
  v16 = v3;
  do
  {
    v15 = (2 * v15) | 1;
    --v16;
  }
  while ( v16 );
  v17 = a1[54];
  v18 = v15 & 0xFFFFFF00;
  v19 = *(_QWORD *)(v17 + 8);
  if ( !v19 || *(_DWORD *)(v17 + 20) )
  {
    v33 = -1073741661;
    if ( *(_DWORD *)(v17 + 20) == 3 )
      v33 = -1073741130;
    v14 = v33;
    goto LABEL_60;
  }
  v20 = *(unsigned int *)(v19 + 22540);
  if ( (_DWORD)v20 == -1 && *(_DWORD *)(*(_QWORD *)(v17 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v17 + 8LL))(v17, 3LL, v20, v18);
    v14 = -1073741130;
LABEL_60:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v34 = (const wchar_t *)&unk_1400D44E0;
      v35 = (const wchar_t *)&unk_1400D44E0;
      v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v55)
                              + 16LL);
      if ( v36 )
        v35 = v36;
      v37 = *(_QWORD *)(a1[22] + 16LL);
      v38 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v57);
      v46 = v14;
      v39 = *(const wchar_t **)(*(_QWORD *)v38 + 16LL);
      if ( v39 )
        v34 = v39;
      sub_1400A5E80(
        v37,
        2u,
        0xAu,
        0x2Eu,
        (__int64)&unk_1400D64E8,
        v35,
        v34,
        L"m_mmioAccessor->SetMaskSafe(0x0580C, wufcExtValue)");
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v40 = v56;
      v2 &= ~8u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v41 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    sub_14000F3C4((int)a1, (__int64)L"m_mmioAccessor->SetMaskSafe(0x0580C, wufcExtValue)", 717, 59, v14);
    goto LABEL_77;
  }
  *(_DWORD *)(*(_QWORD *)(v17 + 8) + 22540LL) = v18 | v20;
  _InterlockedOr(v43, 0);
  v21 = a1[54];
  v22 = (unsigned __int8)v15 << 16;
  v23 = *(_QWORD *)(v21 + 8);
  if ( !v23 || *(_DWORD *)(v21 + 20) )
  {
    v25 = -1073741661;
    if ( *(_DWORD *)(v21 + 20) == 3 )
      v25 = -1073741130;
    v14 = v25;
  }
  else
  {
    v24 = *(_DWORD *)(v23 + 22536);
    if ( v24 != -1 || *(_DWORD *)(*(_QWORD *)(v21 + 8) + 8LL) != -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v21 + 8) + 22536LL) = v22 | v24;
      _InterlockedOr(v43, 0);
LABEL_23:
      v14 = 0;
      goto LABEL_77;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, 3LL, v22);
    v14 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v26 = (const wchar_t *)&unk_1400D44E0;
    v27 = (const wchar_t *)&unk_1400D44E0;
    v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v53)
                            + 16LL);
    if ( v28 )
      v27 = v28;
    v29 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v51);
    v46 = v14;
    v45 = L"m_mmioAccessor->SetMaskSafe(0x05808, wufcValue)";
    v44 = v27;
    v30 = *(const wchar_t **)(*(_QWORD *)v29 + 16LL);
    if ( v30 )
      v26 = v30;
    sub_1400A5E80(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0x2Fu, (__int64)&unk_1400D64E8, v26, v44, v45);
    v2 = 48;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v31 = v52;
    v2 &= ~0x20u;
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
  }
  if ( (v2 & 0x10) != 0 )
  {
    v32 = v54;
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
  }
  sub_14000F278((int)a1, (__int64)L"m_mmioAccessor->SetMaskSafe(0x05808, wufcValue)", 721, 59, v14);
LABEL_77:
  if ( v5 )
  {
    sub_14000BFA4(v5);
    ExFreePool(v5);
  }
  return v14;
}
