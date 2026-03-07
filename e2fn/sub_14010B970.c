__int64 __fastcall sub_14010B970(__int64 a1, int a2)
{
  char v2; // di
  __int64 v4; // rbx
  const wchar_t *v5; // r12
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rax
  const wchar_t *v8; // rax
  volatile signed __int32 *v9; // rsi
  volatile signed __int32 *v10; // rdi
  __int64 v12; // rbx
  const wchar_t *v13; // r12
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rdi
  int v19; // r15d
  unsigned int v20; // r14d
  const wchar_t *v21; // r13
  const wchar_t *v22; // r12
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  int v28; // r8d
  const wchar_t *v29; // r12
  const wchar_t *v30; // rdi
  const wchar_t *v31; // rax
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rsi
  volatile signed __int32 *v34; // rdi
  _BYTE v35[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v36; // [rsp+60h] [rbp-41h]
  _BYTE v37[8]; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v38; // [rsp+70h] [rbp-31h]
  _BYTE v39[8]; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v40; // [rsp+80h] [rbp-21h]
  _BYTE v41[8]; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v42; // [rsp+90h] [rbp-11h]
  _BYTE v43[8]; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v44; // [rsp+A0h] [rbp-1h]
  _BYTE v45[8]; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v46; // [rsp+B0h] [rbp+Fh]
  _BYTE v47[8]; // [rsp+B8h] [rbp+17h] BYREF
  volatile signed __int32 *v48; // [rsp+C0h] [rbp+1Fh]
  _BYTE v49[8]; // [rsp+C8h] [rbp+27h] BYREF
  volatile signed __int32 *v50; // [rsp+D0h] [rbp+2Fh]

  v2 = 0;
  if ( *(_QWORD *)(a1 - 168) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 = a1 - 472;
      v5 = (const wchar_t *)&unk_1400D44E0;
      v6 = (const wchar_t *)&unk_1400D44E0;
      v7 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 16LL))(
                                            a1 - 472,
                                            v37)
                             + 16LL);
      if ( v7 )
        v6 = v7;
      v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 24LL))(v4, v35)
                             + 16LL);
      if ( v8 )
        v5 = v8;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 352) + 16LL),
        2u,
        5u,
        0xEu,
        (__int64)&unk_1400D80C0,
        v5,
        v6,
        (const wchar_t *)qword_14014EC70);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v9 = v36;
      v2 &= ~2u;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v10 = v38;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    return 3221225860LL;
  }
  if ( !a2 )
  {
    v19 = a1 - 528;
    v20 = sub_14010BF60(a1 - 528, 3LL);
    if ( v20 )
    {
      v21 = L"OpenFile(0x00000003)";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v29 = (const wchar_t *)&unk_1400D44E0;
        v30 = (const wchar_t *)&unk_1400D44E0;
        v31 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 16LL))(
                                               a1 - 472,
                                               v49)
                                + 16LL);
        if ( v31 )
          v30 = v31;
        v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 24LL))(
                                               a1 - 472,
                                               v47)
                                + 16LL);
        if ( v32 )
          v29 = v32;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 352) + 16LL),
          2u,
          5u,
          0xFu,
          (__int64)&unk_1400D80C0,
          v29,
          v30,
          L"OpenFile(0x00000003)");
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v33 = v48;
        v2 &= ~8u;
        if ( v48 )
        {
          if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
            if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v34 = v50;
        if ( v50 )
        {
          if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
            if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
          }
        }
      }
      v28 = 206;
      goto LABEL_74;
    }
    return 0LL;
  }
  if ( a2 == 1 )
  {
    v19 = a1 - 528;
    v20 = sub_14010BF60(a1 - 528, 5LL);
    if ( v20 )
    {
      v21 = L"OpenFile(0x00000005)";
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v22 = (const wchar_t *)&unk_1400D44E0;
        v23 = (const wchar_t *)&unk_1400D44E0;
        v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 16LL))(
                                               a1 - 472,
                                               v45)
                                + 16LL);
        if ( v24 )
          v23 = v24;
        v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 24LL))(
                                               a1 - 472,
                                               v43)
                                + 16LL);
        if ( v25 )
          v22 = v25;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 352) + 16LL),
          2u,
          5u,
          0x10u,
          (__int64)&unk_1400D80C0,
          v22,
          v23,
          L"OpenFile(0x00000005)");
        v2 = 48;
      }
      if ( (v2 & 0x20) != 0 )
      {
        v26 = v44;
        v2 &= ~0x20u;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      if ( (v2 & 0x10) != 0 )
      {
        v27 = v46;
        if ( v46 )
        {
          if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      v28 = 209;
LABEL_74:
      sub_140007FAC(v19, (__int64)v21, v28, 131, v20);
      return v20;
    }
    return 0LL;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v12 = a1 - 472;
    v13 = (const wchar_t *)&unk_1400D44E0;
    v14 = (const wchar_t *)&unk_1400D44E0;
    v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 472) + 16LL))(
                                           a1 - 472,
                                           v41)
                            + 16LL);
    if ( v15 )
      v14 = v15;
    v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 24LL))(v12, v39)
                            + 16LL);
    if ( v16 )
      v13 = v16;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 - 352) + 16LL),
      2u,
      5u,
      0x11u,
      (__int64)&unk_1400D80C0,
      v13,
      v14,
      (const wchar_t *)qword_14014EC70);
    v2 = -64;
  }
  if ( v2 < 0 )
  {
    v17 = v40;
    v2 &= ~0x80u;
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  if ( (v2 & 0x40) != 0 )
  {
    v18 = v42;
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  return 3221225485LL;
}
