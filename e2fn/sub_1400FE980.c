__int64 __fastcall sub_1400FE980(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  char v4; // di
  _QWORD *v8; // rbx
  const wchar_t *v9; // r13
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  __int64 v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  unsigned __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rdx
  unsigned int v24; // r14d
  const wchar_t *v25; // r13
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  __int64 v28; // rax
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rax
  const wchar_t *v35; // r13
  const wchar_t *v36; // rdx
  const wchar_t *v37; // rax
  const wchar_t *v38; // rax
  volatile signed __int32 *v39; // rsi
  volatile signed __int32 *v40; // rdi
  signed __int32 v41[8]; // [rsp+0h] [rbp-89h] BYREF
  const wchar_t *v42; // [rsp+30h] [rbp-59h]
  const wchar_t *v43; // [rsp+38h] [rbp-51h]
  unsigned int v44; // [rsp+40h] [rbp-49h]
  _BYTE v45[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v46; // [rsp+58h] [rbp-31h]
  _BYTE v47[8]; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v48; // [rsp+68h] [rbp-21h]
  _BYTE v49[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v50; // [rsp+78h] [rbp-11h]
  _BYTE v51[8]; // [rsp+80h] [rbp-9h] BYREF
  volatile signed __int32 *v52; // [rsp+88h] [rbp-1h]
  _BYTE v53[8]; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v54; // [rsp+98h] [rbp+Fh]
  _BYTE v55[8]; // [rsp+A0h] [rbp+17h] BYREF
  volatile signed __int32 *v56; // [rsp+A8h] [rbp+1Fh]
  unsigned int v57; // [rsp+F8h] [rbp+6Fh]

  v3 = *(_DWORD *)(a2 + 24);
  v4 = 0;
  if ( (v3 & 1) != 0 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = a1 + 7;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v47)
                              + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v8 + 24LL))(v8, v45);
      v44 = v3;
      v13 = *(const wchar_t **)(*(_QWORD *)v12 + 16LL);
      if ( v13 )
        v9 = v13;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0x27u,
        (__int64)&unk_1400D64E8,
        v9,
        v10,
        (const wchar_t *)qword_14014EC70);
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v14 = v46;
      v4 &= ~2u;
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
    if ( (v4 & 1) != 0 )
    {
      v15 = v48;
      if ( v48 )
      {
        if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    return 3221225473LL;
  }
  else
  {
    v17 = 0LL;
    if ( v3 )
    {
      while ( 1 )
      {
        v57 = a3;
        if ( (unsigned __int64)(unsigned int)v17 >= *(_QWORD *)(a2 + 24) )
          sub_140072758(59, 0x24Fu, v17, *(_DWORD *)(a2 + 24), 0);
        v18 = a1[54];
        v19 = *(_QWORD *)(v18 + 8);
        if ( !v19 || *(_DWORD *)(v18 + 20) )
          break;
        *(_DWORD *)(a3 + v19) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v17);
        _InterlockedOr(v41, 0);
        v20 = a1[54];
        v21 = (unsigned int)(v17 + 1);
        v22 = a3 + 4;
        if ( v21 >= *(_QWORD *)(a2 + 24) )
          sub_140072758(59, 0x24Fu, v21, *(_DWORD *)(a2 + 24), 0);
        v23 = *(_QWORD *)(v20 + 8);
        if ( !v23 || *(_DWORD *)(v20 + 20) )
        {
          v24 = -1073741130;
          if ( *(_DWORD *)(v20 + 20) != 3 )
            v24 = -1073741661;
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v25 = (const wchar_t *)&unk_1400D44E0;
            v26 = (const wchar_t *)&unk_1400D44E0;
            v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(
                                                   a1 + 7,
                                                   v51)
                                    + 16LL);
            if ( v27 )
              v26 = v27;
            v28 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v49);
            v44 = v24;
            v43 = L"m_mmioAccessor->WriteRegisterSafe(patternOffset, pattern->at(patternIndex + 1))";
            v42 = v26;
            v29 = *(const wchar_t **)(*(_QWORD *)v28 + 16LL);
            if ( v29 )
              v25 = v29;
            sub_1400A5E80(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0x29u, (__int64)&unk_1400D64E8, v25, v42, v43);
            v4 = 48;
          }
          if ( (v4 & 0x20) != 0 )
          {
            v30 = v50;
            v4 &= ~0x20u;
            if ( v50 )
            {
              if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
                if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
              }
            }
          }
          if ( (v4 & 0x10) != 0 )
          {
            v31 = v52;
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
          sub_14000A92C(
            (int)a1,
            (__int64)L"m_mmioAccessor->WriteRegisterSafe(patternOffset, pattern->at(patternIndex + 1))",
            617,
            59,
            v24);
          return v24;
        }
        *(_DWORD *)(v22 + v23) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v21);
        _InterlockedOr(v41, 0);
        v17 = (unsigned int)(v17 + 2);
        a3 = v57 + 16;
        if ( (unsigned int)v17 >= v3 )
          return 0LL;
      }
      v24 = -1073741130;
      if ( *(_DWORD *)(v18 + 20) != 3 )
        v24 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v32 = *(_QWORD *)(a1[22] + 16LL);
        v33 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v53);
        v34 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v55);
        v44 = v24;
        v35 = (const wchar_t *)&unk_1400D44E0;
        v43 = L"m_mmioAccessor->WriteRegisterSafe(patternOffset, pattern->at(patternIndex))";
        v36 = (const wchar_t *)&unk_1400D44E0;
        v37 = *(const wchar_t **)(*(_QWORD *)v34 + 16LL);
        if ( v37 )
          v36 = v37;
        v38 = *(const wchar_t **)(v33 + 16);
        v42 = v36;
        if ( v38 )
          v35 = v38;
        sub_1400A5E80(v32, 2u, 0xAu, 0x28u, (__int64)&unk_1400D64E8, v35, v42, v43);
        v4 = 12;
      }
      if ( (v4 & 8) != 0 )
      {
        v39 = v54;
        v4 &= ~8u;
        if ( v54 )
        {
          if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
            if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
          }
        }
      }
      if ( (v4 & 4) != 0 )
      {
        v40 = v56;
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
      sub_14000A7E0(
        (int)a1,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe(patternOffset, pattern->at(patternIndex))",
        614,
        59,
        v24);
      return v24;
    }
    else
    {
      return 0LL;
    }
  }
}
