unsigned __int8 __fastcall HUBDESC_InternalValidateBillboardCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  void *v9; // r8
  __int64 v10; // r12
  int v11; // r15d
  unsigned int v12; // r14d
  unsigned __int8 result; // al
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  v20 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v20;
  }
  v9 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
  v10 = a5;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 72) - v11;
  if ( v12 >= 0x30 )
  {
    v15 = a1[4];
    v16 = *a1;
    if ( v16 != 4 * v15 + 44 )
    {
      v17 = 4 * v15 + 44;
      *a3 = v17;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(
          v10,
          2u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          0x9Eu,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v11,
          v16,
          v17);
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 236LL, v9);
      if ( ((*a1 - 40) & 0xFB) != 0 )
      {
        if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
          *v5 = 2;
      }
      else
      {
        *a1 = *(_BYTE *)a3;
      }
      v9 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
    }
    if ( *a3 <= v12 )
    {
      result = a1[4];
      if ( result )
      {
        if ( result <= 0x80u )
        {
          if ( a1[5] <= result )
            goto LABEL_37;
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v19) = a1[5];
            WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA2u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v19);
          }
          v18 = 241LL;
        }
        else
        {
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v19) = a1[4];
            WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA1u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v19);
          }
          v18 = 239LL;
        }
      }
      else
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v10, 2u, 5u, 0xA0u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        v18 = 238LL;
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x9Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v19);
      }
      v18 = 237LL;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), v18, v9);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
               *(_QWORD *)(a2 + 40),
               237LL,
               &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    result = WPP_RECORDER_SF_DDD(
               v10,
               2u,
               v14,
               0x9Du,
               (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
               v12,
               v11,
               48);
  }
LABEL_37:
  if ( *v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(v10, 2u, 5u, 0xA6u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  }
  return result;
}
