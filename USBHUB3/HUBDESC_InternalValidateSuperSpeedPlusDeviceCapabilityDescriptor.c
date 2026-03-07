__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v6; // rsi
  int v9; // r14d
  unsigned int v10; // r12d
  __int64 result; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r14
  int v16; // edx
  __int64 v17; // r11
  int v18; // ecx
  __int64 v19; // r9
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // [rsp+20h] [rbp-98h]
  __int64 v26; // [rsp+28h] [rbp-90h]
  __int64 v27; // [rsp+30h] [rbp-88h]
  __int64 v28; // [rsp+38h] [rbp-80h]
  unsigned int v29; // [rsp+70h] [rbp-48h]
  int v30; // [rsp+74h] [rbp-44h] BYREF
  __int64 v31; // [rsp+78h] [rbp-40h]
  char v32; // [rsp+C0h] [rbp+8h]
  int v33; // [rsp+C8h] [rbp+10h]
  int v34; // [rsp+D8h] [rbp+20h]

  v6 = a4;
  v30 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v30;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72) - v9;
  if ( *a1 >= 0x10u )
  {
LABEL_9:
    v29 = *((_DWORD *)a1 + 1) & 0x1F;
    if ( *a1 != 4LL * v29 + 16 )
    {
      if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = 4 * v29 + 16;
        LODWORD(v27) = *a1;
        LODWORD(v26) = v9;
        WPP_RECORDER_SF_DDD(
          a5,
          2u,
          0LL,
          0xB1u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v26,
          v27,
          v28);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 213LL);
    }
    if ( *a3 <= v10 )
    {
      if ( *((_DWORD *)a1 + 1) >= 0x200u )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = *((_DWORD *)a1 + 1);
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB3u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 215LL);
      }
      if ( (a1[8] & 0xF0) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = *((unsigned __int16 *)a1 + 4);
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB4u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 216LL);
      }
      if ( a1[3] )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = a1[3];
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB5u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 218LL);
      }
      if ( *((_WORD *)a1 + 5) )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = *((unsigned __int16 *)a1 + 5);
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB6u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 219LL);
      }
      v14 = v29;
      LODWORD(v15) = 0;
      v34 = 0;
      v33 = 0;
      v32 = 0;
      do
      {
        v16 = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12];
        if ( (v16 & 0x80u) != 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v26) = v15;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB7u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
          }
          v13 = 220LL;
          goto LABEL_121;
        }
        if ( (_DWORD)v15 == v14 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v26) = v15 + 1;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB8u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
          }
          v13 = 222LL;
          goto LABEL_121;
        }
        v17 = (unsigned int)(v15 + 1);
        v18 = *(_DWORD *)&a1[4 * v17 + 12];
        v19 = v17;
        v31 = v17;
        if ( (v18 & 0x80u) == 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v26) = v15 + 1;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB9u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
          }
          v13 = 221LL;
          goto LABEL_121;
        }
        if ( (((unsigned __int8)v16 ^ (unsigned __int8)v18) & 0xF) != 0
          || (((unsigned __int8)v16 ^ (unsigned __int8)v18) & 0x40) != 0
          || (((unsigned __int16)v16 ^ (unsigned __int16)v18) & 0xC000) != 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDDDdDDD(
              a5,
              (*(_DWORD *)&a1[4 * v17 + 12] >> 6) & 1,
              *(_DWORD *)&a1[4 * (unsigned int)v15 + 12] & 0xF,
              0xBAu,
              v25);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 223LL);
          v19 = v31;
        }
        v20 = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12];
        if ( (v20 & 0x40) == 0
          && (((a1[4 * v19 + 12] ^ (unsigned __int8)v20) & 0x30) != 0
           || *(_WORD *)&a1[4 * (unsigned int)v15 + 14] != *(_WORD *)&a1[4 * v19 + 14]) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDDDdDDD(
              a5,
              (*(_DWORD *)&a1[4 * v19 + 12] >> 4) & 3,
              (*(_DWORD *)&a1[4 * (unsigned int)v15 + 12] >> 4) & 3,
              0xBBu,
              v25);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 224LL);
        }
        v21 = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12];
        if ( (((unsigned __int8)v21 ^ (unsigned __int8)*((_WORD *)a1 + 4)) & 0xF) == 0 )
        {
          v32 = 1;
          if ( (v21 & 0x40) == 0 && (*((_WORD *)a1 + 4) & 0xF00) != ((*((_WORD *)a1 + 4) >> 4) & 0xF00) )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
              *v6 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDD(a5, 2u, 3840LL, 0xBCu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 225LL);
          }
        }
        v22 = v34;
        v23 = *(_DWORD *)&a1[4 * (unsigned int)v15 + 12] & 0xF;
        if ( _bittest(&v22, v23) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DD(a5, 2u, 5u, 0xBDu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 226LL);
          v24 = v33;
        }
        else
        {
          v34 |= 1 << v23;
          v24 = ++v33;
        }
        v14 = v29;
        v15 = (unsigned int)(v15 + 2);
      }
      while ( (unsigned int)v15 <= v29 );
      if ( ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1 != v24 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1;
          LODWORD(v26) = v24;
          WPP_RECORDER_SF_DD(a5, 2u, 5u, 0xBEu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26, v27);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 227LL);
      }
      if ( !v32 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = *(_DWORD *)&a1[4 * v15 + 12] & 0xF;
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xBFu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
        }
        v13 = 228LL;
        goto LABEL_121;
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = v9;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB2u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
      }
      v13 = 217LL;
LABEL_121:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v13);
    }
    goto LABEL_122;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 214LL);
  if ( v10 >= 0x10 )
  {
    *v6 = 2;
    *a3 = 16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0xAFu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v9,
        *a1,
        16,
        16);
    goto LABEL_9;
  }
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return result;
  WPP_RECORDER_SF_DDD(a5, 2u, v12, 0xB0u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v9, *a1, 16);
LABEL_122:
  result = 0LL;
  if ( *v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(a5, 2u, 5u, 0xC0u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  }
  return result;
}
