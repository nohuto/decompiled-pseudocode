__int64 __fastcall sub_1400441A4(_QWORD *a1, int a2, unsigned __int16 a3)
{
  char v3; // di
  unsigned int v6; // r15d
  void *v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rsi
  volatile signed __int32 *v14; // rdi
  int v16; // ebx
  const wchar_t *v17; // r12
  void *v18; // rsi
  void *v19; // rdi
  void *v20; // rax
  __int64 v21; // rax
  int v22; // edx
  void *v23; // rax
  volatile signed __int32 *v24; // rsi
  volatile signed __int32 *v25; // rdi
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // ebx
  unsigned int v30; // esi
  void *v31; // rsi
  void *v32; // rdi
  void *v33; // rax
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rsi
  volatile signed __int32 *v38; // rdi
  signed __int32 v39[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v40; // [rsp+30h] [rbp-49h]
  const wchar_t *v41; // [rsp+38h] [rbp-41h]
  unsigned int v42; // [rsp+40h] [rbp-39h]
  char v43[8]; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v44; // [rsp+58h] [rbp-21h]
  char v45[8]; // [rsp+60h] [rbp-19h] BYREF
  volatile signed __int32 *v46; // [rsp+68h] [rbp-11h]
  char v47[8]; // [rsp+70h] [rbp-9h] BYREF
  volatile signed __int32 *v48; // [rsp+78h] [rbp-1h]
  char v49[8]; // [rsp+80h] [rbp+7h] BYREF
  volatile signed __int32 *v50; // [rsp+88h] [rbp+Fh]
  char v51[8]; // [rsp+90h] [rbp+17h] BYREF
  volatile signed __int32 *v52; // [rsp+98h] [rbp+1Fh]
  char v53[8]; // [rsp+A0h] [rbp+27h] BYREF
  volatile signed __int32 *v54; // [rsp+A8h] [rbp+2Fh]

  v3 = 0;
  if ( (a2 & 0xFFFF0000) == 0 )
  {
    v16 = a3 | ((a2 & 0x1F | 0x400) << 16);
    v6 = sub_14003E7A0((__int64)a1);
    if ( v6 )
    {
      v17 = L"AcquirePhyOwnership()";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v18 = &unk_1400D44E0;
        v19 = &unk_1400D44E0;
        v20 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v47) + 16LL);
        if ( v20 )
          v19 = v20;
        v21 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v49);
        v42 = v6;
        v41 = L"AcquirePhyOwnership()";
        LOBYTE(v22) = 2;
        v23 = *(void **)(*(_QWORD *)v21 + 16LL);
        if ( v23 )
          v18 = v23;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v22,
          10,
          35,
          (__int64)&unk_1400D71E0,
          (__int64)v19,
          (__int64)v18,
          (__int64)v41,
          v42);
        v3 = 12;
      }
      if ( (v3 & 8) != 0 )
      {
        v24 = v48;
        v3 &= ~8u;
        if ( v48 )
        {
          if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
          }
        }
      }
      if ( (v3 & 4) != 0 )
      {
        v25 = v50;
        if ( v50 )
        {
          if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
            if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
      }
      v26 = 318;
    }
    else
    {
      v27 = a1[47];
      v28 = *(_QWORD *)(v27 + 8);
      if ( !v28 || *(_DWORD *)(v27 + 20) )
      {
        v29 = -1073741661;
        if ( *(_DWORD *)(v27 + 20) == 3 )
          v29 = -1073741130;
      }
      else
      {
        *(_DWORD *)(v28 + 32) = v16;
        _InterlockedOr(v39, 0);
        v29 = 0;
      }
      v30 = v29 | sub_14004333C(a1, a2);
      v6 = sub_14004240C((__int64)a1);
      if ( !v6 )
        return v30;
      v17 = L"ReleasePhyOwnership()";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v31 = &unk_1400D44E0;
        v32 = &unk_1400D44E0;
        v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v53) + 16LL);
        if ( v33 )
          v32 = v33;
        v34 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v51);
        v42 = v6;
        v41 = L"ReleasePhyOwnership()";
        LOBYTE(v35) = 2;
        v40 = (__int64)v32;
        v36 = *(void **)(*(_QWORD *)v34 + 16LL);
        if ( v36 )
          v31 = v36;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v35,
          10,
          36,
          (__int64)&unk_1400D71E0,
          (__int64)v31,
          v40,
          (__int64)v41,
          v42);
        v3 = 48;
      }
      if ( (v3 & 0x20) != 0 )
      {
        v37 = v52;
        v3 &= ~0x20u;
        if ( v52 )
        {
          if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
            if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
          }
        }
      }
      if ( (v3 & 0x10) != 0 )
      {
        v38 = v54;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
            if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
          }
        }
      }
      v26 = 326;
    }
    sub_14003B824((int)a1, (__int64)v17, v26, 156, v6);
    return v6;
  }
  v6 = sub_14004468C();
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v45) + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v43);
      v42 = v6;
      v41 = L"WritePhyXmdioRegisterSafe(offset, value)";
      LOBYTE(v11) = 2;
      v40 = (__int64)v8;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v11,
        14,
        34,
        (__int64)&unk_1400D71E0,
        (__int64)v7,
        v40,
        (__int64)v41,
        v42);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v13 = v44;
      v3 &= ~2u;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v14 = v46;
      if ( v46 )
      {
        if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_140009320((int)a1, (__int64)L"WritePhyXmdioRegisterSafe(offset, value)", 307, 156, v6);
    return v6;
  }
  return 0LL;
}
