__int64 __fastcall sub_140106C90(_QWORD *a1)
{
  char v1; // bl
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rdi
  const wchar_t *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  const wchar_t *v13; // r15
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rbx
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rdi
  const wchar_t *v23; // r15
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rax
  const wchar_t *v26; // rax
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  volatile signed __int32 *v32; // rbx
  unsigned __int16 v33; // r9
  __int64 v34; // rcx
  const wchar_t *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  volatile signed __int32 *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  volatile signed __int32 *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  volatile signed __int32 *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  volatile signed __int32 *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  volatile signed __int32 *v59; // rbx
  unsigned int v60; // ebx
  _BYTE v62[8]; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v63; // [rsp+48h] [rbp-60h]
  _BYTE v64[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v65; // [rsp+58h] [rbp-50h]
  _BYTE v66[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v67; // [rsp+68h] [rbp-40h]
  _BYTE v68[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v69; // [rsp+78h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14005A6E0(Pool2, (__int64)L"os_services::OsServices::AllocateComponents", (__int64)(a1 - 44));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = ExAllocatePool2(64LL, 32LL, 808466278LL);
  if ( !v6 || (v7 = sub_1400A38D4(v6)) == 0 || (v8 = *(_QWORD *)(v7 + 16)) == 0 )
  {
    v8 = 0LL;
    v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v9 = (volatile signed __int32 *)a1[4];
  a1[4] = v7;
  a1[3] = v8;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( !a1[3] )
  {
    v10 = L"m_spinLockFactory";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(a1 - 37, v64);
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(a1 - 37, v62);
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)v12 + 16LL);
      if ( v15 )
        v14 = v15;
      if ( *(_QWORD *)(v11 + 16) )
        v13 = *(const wchar_t **)(v11 + 16);
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        2u,
        5u,
        0xAu,
        (__int64)&unk_1400D7980,
        v14,
        v13,
        L"m_spinLockFactory");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v16 = v63;
      v1 &= ~2u;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v17 = v65;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    v18 = 81;
LABEL_58:
    sub_14000B36C((_DWORD)a1 - 352, (__int64)v10, v18, 143);
LABEL_137:
    v60 = -1073741801;
    goto LABEL_139;
  }
  v19 = ExAllocatePool2(64LL, 32LL, 808466480LL);
  if ( !v19 || (v20 = sub_1400ABE78(v19)) == 0 || (v21 = *(_QWORD *)(v20 + 16)) == 0 )
  {
    v21 = 0LL;
    v20 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v22 = (volatile signed __int32 *)a1[6];
  a1[6] = v20;
  a1[5] = v21;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  if ( !a1[5] )
  {
    v10 = L"m_waitLockFactory";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = (const wchar_t *)&unk_1400D44E0;
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             v66)
                              + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             v68)
                              + 16LL);
      if ( v26 )
        v23 = v26;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        2u,
        5u,
        0xBu,
        (__int64)&unk_1400D7980,
        v24,
        v23,
        L"m_waitLockFactory");
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v27 = v67;
      v1 &= ~8u;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v28 = v69;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    v18 = 84;
    goto LABEL_58;
  }
  v29 = ExAllocatePool2(64LL, 32LL, 808466481LL);
  if ( !v29
    || (v30 = sub_1400AC1F0(v29, (__int64)L"Main IOCTL Dispatcher", (int)a1 - 352)) == 0
    || (v31 = *(_QWORD *)(v30 + 16)) == 0 )
  {
    v31 = 0LL;
    v30 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v32 = (volatile signed __int32 *)a1[8];
  a1[8] = v30;
  a1[7] = v31;
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  if ( !a1[7] )
  {
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
      goto LABEL_137;
    v33 = 12;
    v34 = *((_QWORD *)P + 1);
    v35 = L"m_ioctlDispatcher";
LABEL_136:
    sub_1400A3054(*(_QWORD *)(v34 + 16), 2u, 5LL, v33, (__int64)&unk_1400D7980, v35);
    goto LABEL_137;
  }
  v36 = ExAllocatePool2(64LL, 32LL, 808466488LL);
  if ( !v36 || (v37 = sub_1400AC110(v36, (int)a1 - 352)) == 0 || (v38 = *(_QWORD *)(v37 + 16)) == 0 )
  {
    v38 = 0LL;
    v37 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v39 = (volatile signed __int32 *)a1[10];
  a1[10] = v37;
  a1[9] = v38;
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
      if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
    }
  }
  if ( !a1[9] )
  {
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
      goto LABEL_137;
    v33 = 13;
    v34 = *((_QWORD *)P + 1);
    v35 = L"m_workItemFactory";
    goto LABEL_136;
  }
  v40 = ExAllocatePool2(64LL, 32LL, 808466489LL);
  if ( !v40 || (v41 = sub_1400ABFC0(v40, (int)a1 - 352)) == 0 || (v42 = *(_QWORD *)(v41 + 16)) == 0 )
  {
    v42 = 0LL;
    v41 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v43 = (volatile signed __int32 *)a1[12];
  a1[12] = v41;
  a1[11] = v42;
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
      if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
    }
  }
  if ( !a1[11] )
  {
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
      goto LABEL_137;
    v33 = 14;
    v34 = *((_QWORD *)P + 1);
    v35 = L"m_fileAccessorFactory";
    goto LABEL_136;
  }
  v44 = ExAllocatePool2(64LL, 32LL, 808477234LL);
  if ( !v44 || (v45 = sub_1400ABEE0(v44, (int)a1 - 352)) == 0 || (v46 = *(_QWORD *)(v45 + 16)) == 0 )
  {
    v46 = 0LL;
    v45 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v47 = (volatile signed __int32 *)a1[14];
  a1[14] = v45;
  a1[13] = v46;
  if ( v47 )
  {
    if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
      if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
    }
  }
  if ( !a1[13] )
  {
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
      goto LABEL_137;
    v33 = 15;
    v34 = *((_QWORD *)P + 1);
    v35 = L"m_deferredProcedureCallFactory";
    goto LABEL_136;
  }
  v48 = ExAllocatePool2(64LL, 32LL, 808477237LL);
  if ( !v48 || (v49 = sub_1400AC0A0(v48, (int)a1 - 352)) == 0 || (v50 = *(_QWORD *)(v49 + 16)) == 0 )
  {
    v50 = 0LL;
    v49 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v51 = (volatile signed __int32 *)a1[16];
  a1[16] = v49;
  a1[15] = v50;
  if ( v51 )
  {
    if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
      if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
    }
  }
  if ( !a1[15] )
  {
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
      goto LABEL_137;
    v33 = 16;
    v34 = *((_QWORD *)P + 1);
    v35 = L"m_osTimerFactory";
    goto LABEL_136;
  }
  v52 = ExAllocatePool2(64LL, 32LL, 808477284LL);
  if ( !v52 || (v53 = sub_1400ABF50(v52, (int)a1 - 352)) == 0 || (v54 = *(_QWORD *)(v53 + 16)) == 0 )
  {
    v54 = 0LL;
    v53 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v55 = (volatile signed __int32 *)a1[18];
  a1[18] = v53;
  a1[17] = v54;
  if ( v55 )
  {
    if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
      if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
    }
  }
  if ( !a1[17] )
  {
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
      goto LABEL_137;
    v33 = 17;
    v34 = *((_QWORD *)P + 1);
    v35 = L"m_deviceRestarter";
    goto LABEL_136;
  }
  v56 = ExAllocatePool2(64LL, 32LL, 808478049LL);
  if ( !v56 || (v57 = sub_1400AC030(v56, (int)a1 - 352)) == 0 || (v58 = *(_QWORD *)(v57 + 16)) == 0 )
  {
    v58 = 0LL;
    v57 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v59 = (volatile signed __int32 *)a1[20];
  a1[20] = v57;
  a1[19] = v58;
  if ( v59 )
  {
    if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
      if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
    }
  }
  if ( !a1[19] )
  {
    if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
      goto LABEL_137;
    v33 = 18;
    v34 = *((_QWORD *)P + 1);
    v35 = L"m_osActivePowerScheme";
    goto LABEL_136;
  }
  v60 = 0;
LABEL_139:
  if ( v3 )
  {
    sub_14005A99C(v3);
    ExFreePool(v3);
  }
  return v60;
}
