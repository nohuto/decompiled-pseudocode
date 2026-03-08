/*
 * XREFs of HUBDESC_InternalValidateIADescriptor @ 0x1C0038974
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038DB8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001497C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0029788 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateIADescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v9; // r12d
  __int64 v10; // r13
  unsigned int v11; // r15d
  unsigned int v12; // eax
  void *v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // bl
  __int64 v17; // r14
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-48h]
  int v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+10h]

  v23 = 0;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v23;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  v24 = *(_QWORD *)(a2 + 56);
  v12 = *a1;
  *a3 = v12;
  v13 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
  if ( (unsigned __int8)v12 >= 8u )
  {
LABEL_14:
    if ( *a1 > 8u )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = 8;
        LODWORD(v20) = *a1;
        LODWORD(v19) = v9;
        WPP_RECORDER_SF_DDD(
          v10,
          2u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          0x76u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v19,
          v20,
          v21);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 92LL, v13);
    }
    if ( *a3 <= v11 )
    {
      if ( 256 - a1[2] < a1[3] )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v21) = a1[3];
          LODWORD(v20) = a1[2];
          LODWORD(v19) = v9;
          WPP_RECORDER_SF_DDD(
            v10,
            2u,
            (__int64)v13,
            0x78u,
            (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
            v19,
            v20,
            v21);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 97LL, v13);
      }
      v17 = v24;
      if ( a1[3] > *(_BYTE *)(v24 + 4) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v21) = *(unsigned __int8 *)(v17 + 4);
          LODWORD(v20) = a1[3];
          LODWORD(v19) = v9;
          WPP_RECORDER_SF_DDD(
            v10,
            2u,
            (__int64)v13,
            0x79u,
            (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
            v19,
            v20,
            v21);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL, v13);
      }
      if ( *(unsigned __int16 *)(a2 + 202) + (unsigned int)a1[3] > *(unsigned __int8 *)(v17 + 4) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v22) = *(unsigned __int8 *)(v17 + 4);
          LODWORD(v21) = *(unsigned __int16 *)(a2 + 202);
          LODWORD(v20) = a1[3];
          LODWORD(v19) = v9;
          WPP_RECORDER_SF_DDDD(
            v10,
            2u,
            5u,
            0x7Au,
            (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
            v19,
            v20,
            v21,
            v22);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL, v13);
      }
      if ( a1[3] )
        goto LABEL_64;
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x7Bu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v19);
      }
      v15 = 96LL;
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x77u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v19);
      }
      v15 = 94LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), v15, v13);
LABEL_64:
    v16 = 1;
LABEL_65:
    if ( !*v5 )
      return v16;
    goto LABEL_66;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    93LL,
    &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( v11 >= 8 )
  {
    *a3 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v10, 2u, 5u, 0x74u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v9, *a1, 8, 8);
    v13 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
    goto LABEL_14;
  }
  v16 = 1;
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x75u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v9, *a1, 8);
    goto LABEL_65;
  }
LABEL_66:
  v16 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x7Cu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v16;
}
