__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  __int64 v7; // r9
  __int64 v10; // r12
  int v11; // r14d
  bool v12; // zf
  unsigned int v13; // eax
  __int64 result; // rax
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r10
  int v18; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+30h] [rbp-58h]
  int v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+38h] [rbp-50h]
  int v30; // [rsp+38h] [rbp-50h]
  unsigned int v31; // [rsp+40h] [rbp-48h]
  unsigned int v32; // [rsp+90h] [rbp+8h]
  int v33; // [rsp+98h] [rbp+10h] BYREF

  v7 = 0LL;
  v33 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    a4 = &v33;
  }
  v10 = a5;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 4) == 3;
  v32 = *(_DWORD *)(a2 + 72) - v11;
  v13 = *a1;
  *a3 = v13;
  if ( !v12 || !*(_DWORD *)(a2 + 16) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = v11;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x61u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v24);
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 205LL);
    *a4 = 2;
    goto LABEL_48;
  }
  if ( (unsigned __int8)v13 < 8u )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 208LL);
    if ( v32 >= 8 )
      *a3 = 8;
    v15 = *a3;
    *a4 = 2;
    if ( v15 < 8 )
    {
      *a4 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v29 = 8;
      v26 = v11;
      v22 = *a1;
      result = WPP_RECORDER_SF_DDD(
                 v10,
                 2u,
                 (__int64)a3,
                 0x62u,
                 (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                 v22,
                 v26,
                 v29);
LABEL_48:
      if ( !*a4 )
        return result;
      goto LABEL_49;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = v15;
      v30 = 8;
      v27 = v11;
      v23 = *a1;
      WPP_RECORDER_SF_DDDD(
        v10,
        2u,
        5u,
        0x63u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v23,
        v27,
        v30,
        v31);
    }
  }
  if ( *a1 > 8u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *a4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v28) = 8;
      LODWORD(v25) = v11;
      LODWORD(v21) = *a1;
      WPP_RECORDER_SF_DDD(v10, 2u, v16, 0x64u, v17, v21, v25, v28);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 207LL);
  }
  v18 = *(_DWORD *)(a2 + 256);
  if ( (v18 & 8) != 0 )
  {
    *(_DWORD *)(a2 + 256) = v18 & 0xFFFFFFD7 | 0x20;
    if ( *a3 <= v32 )
    {
      if ( *((_WORD *)a1 + 1) )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *a4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v25) = *((unsigned __int16 *)a1 + 1);
          LODWORD(v21) = v11;
          WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x67u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v21, v25);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 210LL);
      }
      result = (unsigned int)(*((_DWORD *)a1 + 1) - 49153);
      if ( (unsigned int)result <= 0xFF3FFE )
        goto LABEL_48;
      if ( *(_BYTE *)(a2 + 15) )
        *a4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dddd(v10, a2, (__int64)a3, v7, v20);
      v19 = 211LL;
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *a4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x66u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v21);
      }
      v19 = 209LL;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v19);
    goto LABEL_48;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v11;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x65u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v21);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 206LL);
  *a4 = 2;
LABEL_49:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_(v10, 2u, 5u, 0x69u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return result;
}
