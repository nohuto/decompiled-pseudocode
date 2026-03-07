__int64 __fastcall sub_140134FD0(__int64 a1, __int64 a2, __int64 (__fastcall ***a3)(PVOID P))
{
  __int64 v5; // rdx
  const wchar_t *v7; // rdi
  __int64 v8; // rbx
  const wchar_t *v9; // rsi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  unsigned int v15; // r15d
  const wchar_t *v16; // rsi
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rdi
  __int64 (__fastcall **v21)(PVOID); // rbx
  __int64 (__fastcall **v22)(PVOID); // r14
  __int64 (__fastcall **v23)(PVOID); // rcx
  __int128 v24; // [rsp+58h] [rbp-49h] BYREF
  char v25[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v26; // [rsp+70h] [rbp-31h]
  char v27[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v28; // [rsp+80h] [rbp-21h]
  char v29[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v30; // [rsp+90h] [rbp-11h]
  char v31[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v32; // [rsp+A0h] [rbp-1h]
  __int64 (__fastcall **v33)(PVOID); // [rsp+A8h] [rbp+7h] BYREF
  __int16 v34; // [rsp+B0h] [rbp+Fh]
  __int64 (__fastcall **v35)(PVOID); // [rsp+B8h] [rbp+17h]
  const wchar_t *v36; // [rsp+C0h] [rbp+1Fh]
  __int64 (__fastcall **v37)(PVOID); // [rsp+C8h] [rbp+27h]
  __int64 v38; // [rsp+108h] [rbp+67h] BYREF

  LODWORD(v38) = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  if ( v5 )
  {
    v38 = 0LL;
    v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *))qword_1400DF850)(
            qword_1400DF700,
            v5,
            a2,
            0LL,
            &v38);
    if ( v15 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v16 = (const wchar_t *)&unk_1400D44E0;
        v7 = (const wchar_t *)&unk_1400D44E0;
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v31)
                                + 16LL);
        if ( v17 )
          v7 = v17;
        v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v29)
                                + 16LL);
        if ( v18 )
          v16 = v18;
        sub_1400B41F8(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          3u,
          0xBu,
          0x13u,
          (__int64)&unk_1400D9AF0,
          v16,
          v7,
          (const wchar_t *)qword_14014EC70);
        LOBYTE(v7) = 12;
      }
      if ( ((unsigned __int8)v7 & 8) != 0 )
      {
        v19 = v30;
        LOBYTE(v7) = (unsigned __int8)v7 & 0xF7;
        if ( v30 )
        {
          if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      if ( ((unsigned __int8)v7 & 4) != 0 )
      {
        v20 = v32;
        if ( v32 )
        {
          if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      return v15;
    }
    else
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(qword_1400DF678 + 2472))(qword_1400DF6A8, v38, &v24);
      v33 = &off_1400D41D0;
      v21 = 0LL;
      v34 = 0;
      v22 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      if ( *((_QWORD *)&v24 + 1) )
      {
        sub_1400011A8(&v33, *((__int64 *)&v24 + 1), (unsigned __int16)v24);
        v22 = v37;
        v7 = v36;
        v21 = v35;
      }
      if ( a3 != &v33 )
      {
        v23 = a3[2];
        if ( v23 )
          ExFreePool(v23);
        a3[2] = v21;
        v21 = 0LL;
        a3[3] = (__int64 (__fastcall **)(PVOID))v7;
        a3[4] = v22;
      }
      if ( v21 )
        ExFreePool(v21);
      return 0LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = a1 - 296;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v7 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             v27)
                              + 16LL);
      if ( v10 )
        v7 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, v25)
                              + 16LL);
      if ( v11 )
        v9 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xBu,
        0x12u,
        (__int64)&unk_1400D9AF0,
        v9,
        v7,
        L"m_configuration");
      LOBYTE(v7) = 3;
    }
    if ( ((unsigned __int8)v7 & 2) != 0 )
    {
      v12 = v26;
      LOBYTE(v7) = (unsigned __int8)v7 & 0xFD;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v13 = v28;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000B1BC(a1 - 352, (__int64)L"m_configuration", 134, 108);
    return 3221225635LL;
  }
}
