__int64 __fastcall sub_14012ED00(__int64 *a1)
{
  char v1; // si
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rdi
  const wchar_t *v16; // r12
  const wchar_t *v17; // rbx
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  const wchar_t *v31; // r12
  const wchar_t *v32; // rbx
  const wchar_t *v33; // rax
  __int64 v34; // rdi
  const wchar_t *v35; // rax
  volatile signed __int32 *v36; // rbx
  volatile signed __int32 *v37; // rbx
  unsigned int v38; // ebx
  _QWORD *v39; // rax
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v44; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall **v45)(PVOID); // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall **v49)(PVOID); // [rsp+88h] [rbp-78h] BYREF
  PVOID v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v54; // [rsp+B8h] [rbp-48h]
  char v55[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v56; // [rsp+C8h] [rbp-38h]
  char v57[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v60; // [rsp+E8h] [rbp-18h]
  char v61[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v62; // [rsp+F8h] [rbp-8h]
  char v63[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v64; // [rsp+108h] [rbp+8h]
  __int64 v65[8]; // [rsp+110h] [rbp+10h] BYREF
  int v66; // [rsp+160h] [rbp+60h] BYREF
  char v67; // [rsp+168h] [rbp+68h] BYREF
  char v68; // [rsp+170h] [rbp+70h] BYREF

  v1 = 0;
  v66 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareReceiveScaling::Initialize", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  LOBYTE(v66) = 1;
  v67 = 1;
  sub_1400A27D4(&v41, a1 + 12);
  v6 = a1 + 7;
  v7 = (*(__int64 (__fastcall **)(__int64 *))(a1[7] + 8))(a1 + 7);
  v8 = sub_140080154((__int64)&v45, v7, (__int64)L" Hash secret key history");
  v9 = sub_1400ACBCC(&v53, 0x30306331u, v8, &v41, a1 + 47, &v67, (char *)&v66);
  v10 = a1[54];
  a1[54] = v9[1];
  v11 = *v9;
  v9[1] = v10;
  v12 = a1[53];
  a1[53] = v11;
  *v9 = v12;
  v13 = v54;
  if ( v54 )
  {
    if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v45 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
    {
      v14 = v42;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
    }
  }
  if ( !a1[53] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = *(_QWORD *)(a1[22] + 16);
      v16 = (const wchar_t *)&unk_1400D44E0;
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*v6 + 24LL))(a1 + 7, v55)
                              + 16LL);
      if ( v18 )
        v17 = v18;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*v6 + 16LL))(a1 + 7, v57)
                              + 16LL);
      if ( v19 )
        v16 = v19;
      sub_1400A3320(v15, 2u, 0xAu, 0xBu, (__int64)&unk_1400D98B8, v17, v16, L"m_hashSecretKeyHistory");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v20 = v56;
      v1 &= ~2u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v21 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    sub_14000B5F4((int)a1, (__int64)L"m_hashSecretKeyHistory", 79, 88);
LABEL_62:
    v38 = -1073741801;
    goto LABEL_64;
  }
  v22 = sub_1400A27D4(v65, a1 + 53);
  sub_1400714D4(a1, v22, 0);
  v68 = 1;
  sub_1400A27D4(&v43, a1 + 12);
  v23 = (*(__int64 (__fastcall **)(__int64 *))(*v6 + 8LL))(a1 + 7);
  v24 = sub_140080370((__int64)&v49, v23, (__int64)L" Indirection table history");
  v25 = sub_1400B1F24(&v59, 0x30306335u, v24, &v43, a1 + 47, &v68);
  v26 = a1[56];
  a1[56] = v25[1];
  v27 = *v25;
  v25[1] = v26;
  v28 = a1[55];
  a1[55] = v27;
  *v25 = v28;
  v29 = v60;
  if ( v60 )
  {
    if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  v49 = &off_1400D41D0;
  if ( v50 )
    ExFreePool(v50);
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( v44 )
  {
    if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
    {
      v30 = v44;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
    }
  }
  if ( !a1[55] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = (const wchar_t *)&unk_1400D44E0;
      v32 = (const wchar_t *)&unk_1400D44E0;
      v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*v6 + 24LL))(a1 + 7, v61)
                              + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = *(_QWORD *)(a1[22] + 16);
      v1 = 12;
      v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*v6 + 16LL))(a1 + 7, v63)
                              + 16LL);
      if ( v35 )
        v31 = v35;
      sub_1400A3320(v34, 2u, 0xAu, 0xCu, (__int64)&unk_1400D98B8, v32, v31, L"m_indirectionTableHistory");
    }
    if ( (v1 & 8) != 0 )
    {
      v36 = v62;
      v1 &= ~8u;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v37 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    sub_140017CC8((int)a1, (__int64)L"m_indirectionTableHistory", 83, 88);
    goto LABEL_62;
  }
  v39 = sub_1400A27D4(&v41, a1 + 55);
  sub_1400714D4(a1, v39, 0);
  v38 = 0;
LABEL_64:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v38;
}
