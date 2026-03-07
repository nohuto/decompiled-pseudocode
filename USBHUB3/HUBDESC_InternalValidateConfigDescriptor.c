char __fastcall HUBDESC_InternalValidateConfigDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v9; // rbp
  char v10; // r15
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // r14d
  __int64 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  v18 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v18;
  }
  v9 = a5;
  *a3 = 9;
  v10 = 1;
  if ( *a1 < 9u )
  {
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDD(
        v9,
        2u,
        (__int64)a3,
        0x13u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *a1,
        9,
        9);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 55LL);
  }
  v11 = 512LL;
  if ( *a1 > 9u )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = 9;
      LODWORD(v16) = 9;
      LODWORD(v15) = *a1;
      WPP_RECORDER_SF_DDD(
        v9,
        2u,
        512LL,
        0x14u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v15,
        v16,
        v17);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 54LL, v11);
  }
  if ( a1[1] != 2 )
  {
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = 2;
      LODWORD(v16) = 2;
      LODWORD(v15) = a1[1];
      WPP_RECORDER_SF_DDD(v9, 2u, v11, 0x15u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v15, v16, v17);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 58LL, v11);
  }
  v12 = *(_DWORD *)(a2 + 72);
  if ( *a3 <= v12 )
  {
    v13 = 9 * (a1[4] + 1);
    if ( v13 > v12 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v13;
        LODWORD(v15) = *(_DWORD *)(a2 + 72);
        WPP_RECORDER_SF_DD(v9, 2u, 5u, 0x17u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v15, v16);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 57LL, v11);
    }
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *((unsigned __int16 *)a1 + 1);
    if ( (unsigned int)*((unsigned __int16 *)a1 + 1) > *(_DWORD *)(a2 + 72) )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = *(_DWORD *)(a2 + 72);
        LODWORD(v16) = v17;
        LODWORD(v15) = *((unsigned __int16 *)a1 + 1);
        WPP_RECORDER_SF_DDD(
          v9,
          2u,
          v11,
          0x18u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v15,
          v16,
          v17);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 61LL, v11);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    }
    if ( *((unsigned __int16 *)a1 + 1) < v13 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = *(_DWORD *)(a2 + 72);
        LODWORD(v16) = v13;
        LODWORD(v15) = *((unsigned __int16 *)a1 + 1);
        WPP_RECORDER_SF_DDD(
          v9,
          2u,
          v11,
          0x19u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v15,
          v16,
          v17);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 62LL, v11);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    }
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v9, 2u, 5u, 0x16u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 56LL, v11);
  }
  if ( *v5 )
  {
    v10 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v9, 2u, 5u, 0x1Au, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  }
  return v10;
}
