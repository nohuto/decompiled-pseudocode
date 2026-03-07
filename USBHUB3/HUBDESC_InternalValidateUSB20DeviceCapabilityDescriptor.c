char __fastcall HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        int *a5,
        __int64 a6)
{
  int *v6; // rsi
  void *v10; // r8
  __int64 v11; // r13
  int v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // bl
  int v17; // eax
  int *v18; // r14
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  int v27; // [rsp+80h] [rbp+8h] BYREF

  v27 = 0;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v27;
  }
  v10 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
  v11 = a6;
  v12 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v13 = *(_DWORD *)(a2 + 72) - v12;
  if ( *a1 >= 7u )
  {
LABEL_10:
    if ( *a1 > 7u )
    {
      if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 513) <= 0xEu )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = 7;
        LODWORD(v25) = *a1;
        LODWORD(v24) = v12;
        WPP_RECORDER_SF_DDD(
          v11,
          2u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          0xD1u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v24,
          v25,
          v26);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 145LL, v10);
    }
    if ( *a3 <= v13 )
    {
      if ( (*(_DWORD *)(a1 + 3) & 0xFFFF00E1) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = *(_DWORD *)(a1 + 3);
          WPP_RECORDER_SF_d(v11, 2u, 5u, 0xD3u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v24);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 147LL, v10);
      }
      v17 = *(_DWORD *)(a1 + 3);
      if ( (v17 & 2) != 0 )
      {
        v18 = a5;
        *a5 |= 1u;
        v19 = *v18 ^ ((unsigned __int8)*v18 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 1)) & 2;
        *v18 = v19;
        if ( (a1[3] & 8) != 0 )
        {
          v20 = v19 | 4;
          *v18 = v20;
          *v18 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF0;
        }
        v21 = *(_DWORD *)(a1 + 3);
        if ( (v21 & 0x10) != 0 )
        {
          if ( (v21 & 8) != 0 )
          {
            v22 = (v21 >> 8) & 0xF;
            if ( (unsigned __int16)*(_DWORD *)(a1 + 3) >> 12 <= v22 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v25) = v22;
                LODWORD(v24) = (unsigned __int16)*(_DWORD *)(a1 + 3) >> 12;
                WPP_RECORDER_SF_DD(
                  v11,
                  2u,
                  5u,
                  0xD4u,
                  (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                  v24,
                  v25);
              }
              (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 151LL, v10);
            }
          }
          *v18 |= 8u;
          *v18 ^= ((unsigned __int16)*v18 ^ (unsigned __int16)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF00;
        }
        goto LABEL_50;
      }
      if ( (v17 & 4) == 0 )
      {
LABEL_50:
        v16 = 1;
LABEL_51:
        if ( !*v6 )
          return v16;
        goto LABEL_52;
      }
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = *(_DWORD *)(a1 + 3);
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0xD5u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v24);
      }
      v15 = 150LL;
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = v12;
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0xD2u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v24);
      }
      v15 = 148LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), v15, v10);
    goto LABEL_50;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    146LL,
    &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  if ( v13 >= 7 )
  {
    *v6 = 2;
    *a3 = 7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v11,
        2u,
        5u,
        0xCFu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v12,
        *a1,
        7,
        7);
    v10 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
    goto LABEL_10;
  }
  v16 = 1;
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v11, 2u, v14, 0xD0u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v12, *a1, 7);
    goto LABEL_51;
  }
LABEL_52:
  v16 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v11, 2u, 5u, 0xD6u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v16;
}
