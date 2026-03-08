/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C003AC58
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C003B5DC (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001497C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0029788 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        __int64 a8)
{
  int *v9; // rsi
  _BYTE *v11; // r12
  void *v12; // r8
  __int64 v13; // r15
  int v14; // r14d
  unsigned int v15; // r13d
  __int64 v16; // r8
  unsigned int *v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  char v20; // bl
  __int64 v21; // rdx
  int v22; // eax
  __int16 v23; // ax
  unsigned __int16 v24; // ax
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v9 = a4;
  v29 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v9 = &v29;
  }
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v11 = a7;
  if ( *a7 )
    *a7 = 0;
  v12 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
  v13 = a8;
  v14 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v15 = *(_DWORD *)(a2 + 72) - v14;
  if ( *a1 >= 0xAu )
  {
LABEL_16:
    v18 = 768LL;
    if ( *a1 > 0xAu )
    {
      if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = 10;
        LODWORD(v27) = *a1;
        LODWORD(v26) = v14;
        WPP_RECORDER_SF_DDD(
          v13,
          2u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          0xC3u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v26,
          v27,
          v28);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 135LL, v12, v18);
    }
    if ( *v30 > v15 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = v14;
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC4u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
      }
      v19 = 140LL;
      goto LABEL_30;
    }
    if ( (a1[3] & 0xFD) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = a1[3];
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC5u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 137LL, v12, v18);
    }
    if ( (a1[3] & 2) != 0 && *v11 )
      *v11 = 1;
    if ( (*((_WORD *)a1 + 2) & 0xFFF0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = *((unsigned __int16 *)a1 + 2);
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC6u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 143LL, v12, v18);
    }
    if ( !*((_WORD *)a1 + 2) )
    {
      *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v13, 2u, 5u, 0xC7u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 144LL, v12, v18);
    }
    if ( a1[6] <= 3u )
    {
      v22 = *((unsigned __int16 *)a1 + 2);
      if ( _bittest(&v22, a1[6]) )
      {
LABEL_63:
        v23 = a1[7];
        if ( (unsigned __int8)v23 < 0xBu )
        {
          if ( a5 )
          {
            *a5 = v23;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = a1[7];
              WPP_RECORDER_SF_d(v13, 4u, 5u, 0xCBu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
            *v9 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v26) = a1[7];
            WPP_RECORDER_SF_d(v13, 2u, 5u, 0xCAu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
          }
          (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 138LL, v12, v18);
        }
        v24 = *((_WORD *)a1 + 4);
        if ( v24 < 0x800u )
        {
          if ( a6 )
          {
            *a6 = v24;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = *((unsigned __int16 *)a1 + 4);
              WPP_RECORDER_SF_d(v13, 4u, 5u, 0xCDu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
            }
          }
          goto LABEL_83;
        }
        if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
          *v9 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = *((unsigned __int16 *)a1 + 4);
          WPP_RECORDER_SF_d(v13, 2u, 5u, 0xCCu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
        }
        v19 = 139LL;
LABEL_30:
        (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v19, v12, v18);
LABEL_83:
        v20 = 1;
LABEL_84:
        if ( !*v9 )
          return v20;
        goto LABEL_85;
      }
      *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = *((unsigned __int16 *)a1 + 2);
        LODWORD(v26) = a1[6];
        WPP_RECORDER_SF_DD(v13, 2u, 5u, 0xC9u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26, v27);
      }
      v21 = 141LL;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = a1[6];
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC8u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v26);
      }
      v21 = 142LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v21, v12, v18);
    goto LABEL_63;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    136LL,
    &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  if ( v15 >= 0xA )
  {
    v17 = v30;
    *v9 = 2;
    *v17 = 10;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v13,
        2u,
        5u,
        0xC1u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v14,
        *a1,
        10,
        10);
    v12 = &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids;
    goto LABEL_16;
  }
  v20 = 1;
  *v9 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v13, 2u, v16, 0xC2u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v14, *a1, 10);
    goto LABEL_84;
  }
LABEL_85:
  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v13, 2u, 5u, 0xCEu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v20;
}
