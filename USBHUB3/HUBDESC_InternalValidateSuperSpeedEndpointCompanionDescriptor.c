/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C00375E4
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038DB8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001497C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0029788 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1C00355BC (WPP_RECORDER_SF_Ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0035964 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5,
        _BYTE *a6)
{
  int *v6; // r14
  _BYTE *v9; // r13
  __int64 v10; // r12
  int v11; // r15d
  bool v12; // zf
  unsigned int v13; // ecx
  __int64 v14; // rdx
  char v15; // r13
  unsigned int *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r10
  int v20; // r11d
  int v21; // edx
  unsigned int *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned int v31; // edx
  __int64 v32; // r8
  __int64 v33; // rdx
  int v34; // [rsp+20h] [rbp-68h]
  __int64 v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  int v38; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v39; // [rsp+A0h] [rbp+18h]

  v39 = a3;
  v6 = a4;
  v38 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v38;
  }
  v9 = a6;
  if ( a6 )
    *a6 = 0;
  v10 = a5;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 4) == 3;
  LODWORD(a6) = *(_DWORD *)(a2 + 72) - v11;
  v13 = *a1;
  *a3 = v13;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x49u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11);
    v14 = 40LL;
LABEL_11:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v14);
LABEL_12:
    v15 = 1;
    goto LABEL_13;
  }
  if ( (unsigned __int8)v13 >= 6u )
  {
LABEL_23:
    if ( *a1 > 6u )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v37) = v20;
        LODWORD(v36) = v11;
        LODWORD(v35) = *a1;
        WPP_RECORDER_SF_DDD(v10, 2u, v18, 0x4Cu, v19, v35, v36, v37);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 42LL);
    }
    v21 = *(_DWORD *)(a2 + 256);
    if ( (v21 & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v35) = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x4Du, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 41LL);
      *v6 = 2;
      goto LABEL_33;
    }
    v23 = v39;
    v24 = (unsigned int)a6;
    v25 = v21 & 0xFFFFFFEB | 0x10;
    *(_DWORD *)(a2 + 256) = v25;
    if ( *v23 > v24 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v35) = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x4Eu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 44LL);
      v15 = 1;
      goto LABEL_13;
    }
    v26 = *(_QWORD *)(a2 + 192);
    v27 = 0LL;
    switch ( *(_BYTE *)(v26 + 3) & 3 )
    {
      case 0:
        if ( a1[2] )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[2];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x4Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 38LL);
          v27 = 0LL;
        }
        if ( a1[3] )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[3];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x50u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
            *(_QWORD *)(a2 + 40),
            37LL,
            a3,
            v27);
        }
        if ( !*((_WORD *)a1 + 2) )
          goto LABEL_12;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v36) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v35) = v11;
          WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x51u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
        }
        v14 = 39LL;
        goto LABEL_11;
      case 1:
        v31 = v25 & 0xFFFFFFDF;
        *(_DWORD *)(a2 + 256) = v31;
        *(_DWORD *)(a2 + 256) = v31 & 0xFFFFFFF7 | (a1[3] >> 4) & 0xFFFFFF8;
        if ( a1[2] > 0xFu )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[2];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x5Au, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 50LL);
          v27 = 0LL;
        }
        if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL);
            LODWORD(v36) = a1[2];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DDD(
              v10,
              2u,
              v32,
              0x5Bu,
              (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
              v35,
              v36,
              v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 51LL);
        }
        if ( (*(_DWORD *)(a2 + 256) & 8) == 0 && (a1[3] & 3) == 3 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[3] & 3;
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x5Cu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 52LL);
        }
        if ( (a1[3] & 0x7C) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[3];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x5Du, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
            *(_QWORD *)(a2 + 40),
            49LL,
            a3,
            v27);
        }
        v15 = 1;
        if ( (*(_DWORD *)(a2 + 256) & 8) == 0 )
        {
          v33 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * (a1[2] + 1) * ((a1[3] & 3u) + 1);
          if ( *((unsigned __int16 *)a1 + 2) <= (unsigned int)v33 )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Ddd(v10, v33, (__int64)a3, 0x5Eu, v34);
          v30 = 53LL;
LABEL_70:
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 32))(
            *(_QWORD *)(a2 + 40),
            v30,
            a3,
            v27);
          break;
        }
        if ( *((_WORD *)a1 + 2) != 1 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = *((unsigned __int16 *)a1 + 2);
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x5Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
            *(_QWORD *)(a2 + 40),
            204LL,
            a3,
            v27);
        }
        break;
      case 2:
        if ( a1[2] > 0xFu )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[2];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x52u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 34LL);
        }
        if ( (a1[3] & 0x1F) != 0 && v9 )
          *v9 = 1;
        if ( (a1[3] & 0x1Fu) > 0x10 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[3] & 0x1F;
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x53u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 35LL);
        }
        if ( a1[3] >= 0x20u )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[3];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x54u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
            *(_QWORD *)(a2 + 40),
            33LL,
            a3,
            v27);
        }
        if ( !*((_WORD *)a1 + 2) )
          goto LABEL_12;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v36) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v35) = v11;
          WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x55u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
        }
        v14 = 36LL;
        goto LABEL_11;
      case 3:
        if ( a1[2] > 0xFu )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[2];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x56u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 45LL);
          v27 = 0LL;
        }
        if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
        {
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL);
            LODWORD(v36) = a1[2];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DDD(
              v10,
              2u,
              v28,
              0x57u,
              (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
              v35,
              v36,
              v37);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 46LL);
          v27 = 0LL;
        }
        if ( a1[3] )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = a1[3];
            LODWORD(v35) = v11;
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x58u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v35, v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
            *(_QWORD *)(a2 + 40),
            47LL,
            a3,
            v27);
        }
        v15 = 1;
        v29 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3u) + 1);
        if ( *((unsigned __int16 *)a1 + 2) > (unsigned int)v29 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Ddd(v10, v29, (__int64)a3, 0x59u, v34);
          v30 = 48LL;
          goto LABEL_70;
        }
        break;
      default:
        goto LABEL_12;
    }
LABEL_13:
    if ( !*v6 )
      return v15;
    goto LABEL_33;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 43LL);
  v16 = v39;
  if ( (unsigned int)a6 >= 6 )
    *v39 = 6;
  v17 = *v16;
  *v6 = 2;
  if ( v17 >= 6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v10,
        2u,
        5u,
        0x4Bu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *a1,
        v11,
        6,
        v17);
    goto LABEL_23;
  }
  v15 = 1;
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(
      v10,
      2u,
      (__int64)a3,
      0x4Au,
      (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
      *a1,
      v11,
      6);
    goto LABEL_13;
  }
LABEL_33:
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x60u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v15;
}
