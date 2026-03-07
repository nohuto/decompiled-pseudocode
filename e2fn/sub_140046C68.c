__int64 __fastcall sub_140046C68(__int64 a1, __int64 a2, unsigned __int64 a3, const char **a4)
{
  char v4; // di
  __int64 v8; // rbx
  void *v9; // rsi
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rsi
  volatile signed __int32 *v16; // rdi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rbx
  const char *v20; // rsi
  void *v21; // rsi
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rdi
  void *v29; // rsi
  void *v30; // rdi
  void *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  void *v34; // rax
  volatile signed __int32 *v35; // rsi
  volatile signed __int32 *v36; // rdi
  _BYTE v37[8]; // [rsp+48h] [rbp-29h] BYREF
  volatile signed __int32 *v38; // [rsp+50h] [rbp-21h]
  _BYTE v39[8]; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v40; // [rsp+60h] [rbp-11h]
  _BYTE v41[8]; // [rsp+68h] [rbp-9h] BYREF
  volatile signed __int32 *v42; // [rsp+70h] [rbp-1h]
  _BYTE v43[8]; // [rsp+78h] [rbp+7h] BYREF
  volatile signed __int32 *v44; // [rsp+80h] [rbp+Fh]
  _BYTE v45[8]; // [rsp+88h] [rbp+17h] BYREF
  volatile signed __int32 *v46; // [rsp+90h] [rbp+1Fh]
  _BYTE v47[8]; // [rsp+98h] [rbp+27h] BYREF
  volatile signed __int32 *v48; // [rsp+A0h] [rbp+2Fh]

  v4 = 0;
  if ( a4 )
  {
    v18 = a3 - 9;
    v19 = 36LL;
    if ( a3 - 9 <= 0x24 )
    {
LABEL_23:
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v21 = &unk_1400D44E0;
        v22 = &unk_1400D44E0;
        v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v47)
                       + 16LL);
        if ( v23 )
          v22 = v23;
        v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v45);
        LOBYTE(v25) = 4;
        v26 = *(void **)(*(_QWORD *)v24 + 16LL);
        if ( v26 )
          v21 = v26;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v25,
          14,
          35,
          (__int64)&unk_1400D72A0,
          (__int64)v21,
          (__int64)v22,
          (__int64)qword_1400B7720);
        v4 = 12;
      }
      if ( (v4 & 8) != 0 )
      {
        v27 = v46;
        v4 &= ~8u;
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
      if ( (v4 & 4) != 0 )
      {
        v28 = v48;
        if ( v48 )
        {
          if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
            if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
      }
      return 3221226021LL;
    }
    else
    {
      v20 = (const char *)(a2 + 36);
      while ( strncmp(v20, "_SB_\bAMAC", 9uLL) )
      {
        ++v19;
        ++v20;
        if ( v19 >= v18 )
          goto LABEL_23;
      }
      if ( v19 + 36 < a3 )
      {
        *a4 = v20;
        return 0LL;
      }
      else
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v29 = &unk_1400D44E0;
          v30 = &unk_1400D44E0;
          v31 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v43)
                         + 16LL);
          if ( v31 )
            v30 = v31;
          v32 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v41);
          LOBYTE(v33) = 4;
          v34 = *(void **)(*(_QWORD *)v32 + 16LL);
          if ( v34 )
            v29 = v34;
          sub_1400A3320(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            v33,
            14,
            36,
            (__int64)&unk_1400D72A0,
            (__int64)v29,
            (__int64)v30,
            (__int64)qword_1400B7720);
          v4 = 48;
        }
        if ( (v4 & 0x20) != 0 )
        {
          v35 = v42;
          v4 &= ~0x20u;
          if ( v42 )
          {
            if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
              if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
            }
          }
        }
        if ( (v4 & 0x10) != 0 )
        {
          v36 = v44;
          if ( v44 )
          {
            if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
              if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
            }
          }
        }
        return 3222536196LL;
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = a1 + 56;
      v9 = &unk_1400D44E0;
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v39)
                     + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 24LL))(v8, v37);
      LOBYTE(v13) = 2;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v9 = v14;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v13,
        14,
        34,
        (__int64)&unk_1400D72A0,
        (__int64)v9,
        (__int64)v10,
        (__int64)qword_1400B7720);
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v15 = v38;
      v4 &= ~2u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v16 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    return 3221225485LL;
  }
}
