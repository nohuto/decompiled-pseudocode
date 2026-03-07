char __fastcall HUBDESC_InternalValidateInterfaceDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  unsigned int v9; // eax
  int v10; // ebp
  char v11; // r15
  int v12; // r13d
  void *v13; // r8
  unsigned int v14; // ebp
  __int64 v15; // r8
  unsigned int v16; // ecx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r12
  bool v19; // si
  bool v20; // bp
  __int64 v21; // r8
  _BYTE *v22; // rsi
  unsigned __int8 v23; // al
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+98h] [rbp+10h] BYREF

  v29 = 0;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v29;
  }
  v9 = *a1;
  v10 = *(_DWORD *)(a2 + 72);
  v11 = 1;
  *a3 = v9;
  v12 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v13 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
  v14 = v10 - v12;
  if ( (unsigned __int8)v9 >= 9u )
    goto LABEL_19;
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    99LL,
    &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  if ( v14 < 9 )
  {
    v16 = *a3;
  }
  else
  {
    *a3 = 9;
    v16 = 9;
  }
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( v16 >= 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0x6Bu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *a1,
        v12,
        9,
        v16);
    v13 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
LABEL_19:
    if ( *a1 > 9u )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = 9;
        LODWORD(v26) = v12;
        LODWORD(v25) = *a1;
        WPP_RECORDER_SF_DDD(
          a5,
          2u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          0x6Cu,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v25,
          v26,
          v27);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 98LL, v13);
    }
    if ( *a3 <= v14 )
    {
      v17 = a1[2];
      v18 = a1[3];
      v19 = (*(_DWORD *)(a2 + 256) & 1) == 0 || (_BYTE)v17 != *(_BYTE *)(a2 + 80);
      v20 = !(*(_BYTE *)(a2 + 256) & 1);
      HUBDESC_InternalValidateLastInterface(a2, v5, a5);
      if ( *v5 != 1 )
      {
        if ( v19 )
        {
          if ( _bittest64(*(const signed __int64 **)(a2 + 216), v17) )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = v17;
              LODWORD(v25) = v12;
              WPP_RECORDER_SF_DD(a5, 2u, 5u, 0x6Eu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v25, v26);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 103LL);
          }
          if ( !v20 && *(_BYTE *)(a2 + 80) > (unsigned __int8)v17 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = *(unsigned __int8 *)(a2 + 80);
              LODWORD(v26) = v17;
              LODWORD(v25) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v21,
                0x6Fu,
                (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                v25,
                v26,
                v27);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 106LL);
          }
          if ( (_BYTE)v18 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = v18;
              LODWORD(v26) = v17;
              LODWORD(v25) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v21,
                0x70u,
                (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                v25,
                v26,
                v27);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 104LL);
          }
          RtlClearAllBits((PRTL_BITMAP)(a2 + 88));
          RtlSetBit((PRTL_BITMAP)(a2 + 208), v17);
          *(_BYTE *)(a2 + 80) = v17;
          ++*(_WORD *)(a2 + 202);
          v22 = (_BYTE *)(a2 + 81);
        }
        else
        {
          if ( _bittest64(*(const signed __int64 **)(a2 + 96), v18) )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = v17;
              LODWORD(v26) = v12;
              LODWORD(v25) = v18;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v21,
                0x71u,
                (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                v25,
                v26,
                v27);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 101LL);
          }
          v22 = (_BYTE *)(a2 + 81);
          if ( *(_BYTE *)(a2 + 81) >= (unsigned __int8)v18 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = (unsigned __int8)*v22;
              LODWORD(v26) = v18;
              LODWORD(v25) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v21,
                0x72u,
                (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                v25,
                v26,
                v27);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 105LL);
          }
        }
        RtlClearAllBits((PRTL_BITMAP)(a2 + 136));
        *(_BYTE *)(a2 + 185) = 0;
        v23 = a1[4];
        *(_DWORD *)(a2 + 256) &= ~2u;
        *(_BYTE *)(a2 + 184) = v23;
        RtlSetBit((PRTL_BITMAP)(a2 + 88), v18);
        *v22 = v18;
      }
      v11 = 1;
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = v12;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x6Du, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v25);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 100LL, v13);
    }
LABEL_85:
    if ( !*v5 )
      return v11;
    goto LABEL_86;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(a5, 2u, v15, 0x6Au, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, *a1, v12, 9);
    goto LABEL_85;
  }
LABEL_86:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a5, 2u, 5u, 0x73u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v11;
}
