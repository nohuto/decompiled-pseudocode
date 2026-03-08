/*
 * XREFs of HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0036484
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038DB8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001497C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0029788 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0035964 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x1C0036224 (HUBDESC_InternalValidateLastEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateEndpointDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  int v9; // ebp
  __int64 v10; // r15
  unsigned int v11; // r12d
  char v12; // r13
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15; // edx
  unsigned __int16 v16; // bx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  unsigned __int16 v22; // r9
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  unsigned __int16 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  unsigned __int16 v33; // r9
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  unsigned __int16 v37; // r9
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  unsigned __int8 v44; // [rsp+90h] [rbp+8h]
  int v45; // [rsp+98h] [rbp+10h] BYREF

  v5 = a4;
  v45 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v45;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  *a3 = *a1;
  HUBDESC_InternalValidateLastEndpoint(a2, v5, v10);
  v12 = 1;
  if ( *v5 == 1 )
  {
LABEL_82:
    if ( !*v5 )
      return v12;
    goto LABEL_83;
  }
  if ( *a1 >= 7u )
  {
LABEL_19:
    if ( *a1 > 7u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v42) = 7;
        LODWORD(v41) = v9;
        LODWORD(v40) = *a1;
        WPP_RECORDER_SF_DDD(
          v10,
          3u,
          7LL,
          0x21u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v40,
          v41,
          v42);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 80LL);
    }
    if ( *a3 > v11 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v40) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x22u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40);
      }
      v14 = 83LL;
LABEL_31:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v14);
      goto LABEL_82;
    }
    v44 = a1[2];
    if ( (*(_DWORD *)(a2 + 256) & 1) == 0 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v40) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x23u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40);
      }
      v14 = 85LL;
      goto LABEL_31;
    }
    if ( (a1[2] & 0xF) == 0 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v40) = v9;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x24u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 86LL);
    }
    if ( (a1[2] & 0x70) != 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v41) = a1[2];
        LODWORD(v40) = v9;
        WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x25u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 84LL);
    }
    if ( (a1[3] & 0xC0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v41) = v9;
        LODWORD(v40) = a1[3];
        WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x26u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 82LL);
    }
    v15 = a1[3];
    v16 = *((_WORD *)a1 + 2);
    if ( (a1[3] & 3) != 0 )
    {
      if ( (a1[3] & 3) != 1 )
      {
        if ( (a1[3] & 3) != 2 )
        {
          if ( (a1[3] & 3) != 3 )
            goto LABEL_73;
          v17 = *(_DWORD *)(a2 + 4);
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                if ( v19 != 1 || v16 <= 0x400u )
                  goto LABEL_73;
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v41) = v9;
                  LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_DD(
                    v10,
                    2u,
                    5u,
                    0x37u,
                    (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                    v40,
                    v41);
                }
              }
              else
              {
                if ( (v15 & 0xFFFFFFFC) != 0 )
                {
                  if ( *(_BYTE *)(a2 + 15) )
                    *v5 = 2;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v41) = v9;
                    LODWORD(v40) = a1[3];
                    WPP_RECORDER_SF_DD(
                      v10,
                      2u,
                      5u,
                      0x33u,
                      (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                      v40,
                      v41);
                  }
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
                }
                if ( (v16 & 0x7FFu) > 0x400 )
                {
                  if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                    *v5 = 2;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v41) = v9;
                    LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
                    WPP_RECORDER_SF_DD(
                      v10,
                      2u,
                      5u,
                      0x34u,
                      (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                      v40,
                      v41);
                  }
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
                }
                if ( v16 >= 0x2000u )
                {
                  if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                    *v5 = 2;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v41) = v9;
                    LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
                    WPP_RECORDER_SF_DD(
                      v10,
                      2u,
                      5u,
                      0x35u,
                      (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                      v40,
                      v41);
                  }
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
                }
                if ( (v16 & 0x1800) != 0x1800 )
                  goto LABEL_73;
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v41) = v9;
                  LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_DD(
                    v10,
                    2u,
                    5u,
                    0x36u,
                    (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                    v40,
                    v41);
                }
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
LABEL_73:
              if ( _bittest64(*(const signed __int64 **)(a2 + 144), v44) )
              {
                if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v43) = *(unsigned __int8 *)(a2 + 81);
                  LODWORD(v42) = *(unsigned __int8 *)(a2 + 80);
                  LODWORD(v41) = v9;
                  LODWORD(v40) = v44;
                  WPP_RECORDER_SF_DDDD(
                    v10,
                    2u,
                    5u,
                    0x47u,
                    (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                    v40,
                    v41,
                    v42,
                    v43);
                }
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 102LL);
              }
              RtlSetBit((PRTL_BITMAP)(a2 + 136), v44);
              v20 = *(_DWORD *)(a2 + 256);
              ++*(_BYTE *)(a2 + 185);
              *(_QWORD *)(a2 + 192) = a1;
              *(_DWORD *)(a2 + 256) = v20 & 0xFFFFFFEB | 4;
              goto LABEL_82;
            }
            if ( (v15 & 0xFFFFFFFC) != 0 )
            {
              if ( *(_BYTE *)(a2 + 15) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v41) = v9;
                LODWORD(v40) = a1[3];
                WPP_RECORDER_SF_DD(
                  v10,
                  2u,
                  5u,
                  0x30u,
                  (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                  v40,
                  v41);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
            }
            if ( *((_WORD *)a1 + 2) > 0x40u )
            {
              *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v41) = v9;
                LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_DD(
                  v10,
                  2u,
                  5u,
                  0x31u,
                  (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                  v40,
                  v41);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            }
            if ( a1[6] )
              goto LABEL_73;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_126;
            v22 = 50;
          }
          else
          {
            if ( (v15 & 0xFFFFFFFC) != 0 )
            {
              if ( *(_BYTE *)(a2 + 15) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v41) = v9;
                LODWORD(v40) = a1[3];
                WPP_RECORDER_SF_DD(
                  v10,
                  2u,
                  5u,
                  0x2Cu,
                  (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                  v40,
                  v41);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
            }
            if ( *((_WORD *)a1 + 2) > 8u )
            {
              *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v41) = v9;
                LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_DD(
                  v10,
                  2u,
                  5u,
                  0x2Du,
                  (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                  v40,
                  v41);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            }
            if ( !*((_WORD *)a1 + 2) )
            {
              *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v41) = v9;
                LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_DD(
                  v10,
                  2u,
                  5u,
                  0x2Eu,
                  (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                  v40,
                  v41);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            }
            if ( a1[6] )
              goto LABEL_73;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_126;
            v22 = 47;
          }
          LODWORD(v41) = v9;
          LODWORD(v40) = a1[6];
          WPP_RECORDER_SF_DD(v10, 2u, 5u, v22, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
LABEL_126:
          v23 = 109LL;
LABEL_127:
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v23);
          goto LABEL_73;
        }
        if ( (v15 & 0xFFFFFFFC) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v41) = v9;
            LODWORD(v40) = a1[3];
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x38u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 31LL);
        }
        v24 = *(_DWORD *)(a2 + 4);
        if ( !v24 )
        {
          *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v40) = v9;
            WPP_RECORDER_SF_d(v10, 2u, 5u, 0x39u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40);
          }
          v23 = 30LL;
          goto LABEL_127;
        }
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 != 1 || *((_WORD *)a1 + 2) == 1024 )
              goto LABEL_73;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_163;
            v27 = 60;
          }
          else
          {
            if ( *((_WORD *)a1 + 2) == 512 )
              goto LABEL_73;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_163;
            v27 = 59;
          }
        }
        else
        {
          v28 = *((unsigned __int16 *)a1 + 2);
          LOWORD(v28) = v28 - 8;
          if ( (unsigned __int16)v28 <= 0x38u )
          {
            v29 = 0x100000001000101LL;
            if ( _bittest64(&v29, v28) )
              goto LABEL_73;
          }
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( !*((_WORD *)a1 + 2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_163;
          v27 = 58;
        }
        LODWORD(v41) = v9;
        LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
        WPP_RECORDER_SF_DD(v10, 2u, 5u, v27, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
LABEL_163:
        v23 = 32LL;
        goto LABEL_127;
      }
      if ( !*(_BYTE *)(a2 + 81) && v16 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v41) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v40) = v9;
          WPP_RECORDER_SF_DD(v10, 3u, 5u, 0x3Du, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 233LL);
      }
      v30 = *(_DWORD *)(a2 + 4);
      if ( !v30 )
      {
        *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v40) = v9;
          WPP_RECORDER_SF_d(v10, 2u, 5u, 0x3Eu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40);
        }
        v23 = 111LL;
        goto LABEL_127;
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 != 1 )
            goto LABEL_73;
          if ( *((_WORD *)a1 + 2) > 0x400u )
          {
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v41) = v9;
              LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_DD(
                v10,
                2u,
                5u,
                0x45u,
                (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                v40,
                v41);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
            goto LABEL_73;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_201;
          v33 = 70;
        }
        else
        {
          if ( (v16 & 0x7FFu) > 0x400 )
          {
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v41) = v9;
              LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_DD(
                v10,
                2u,
                5u,
                0x41u,
                (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                v40,
                v41);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( v16 >= 0x2000u )
          {
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v41) = v9;
              LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_DD(
                v10,
                2u,
                5u,
                0x42u,
                (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                v40,
                v41);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( (v16 & 0x1800) == 0x1800 )
          {
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v41) = v9;
              LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_DD(
                v10,
                2u,
                5u,
                0x43u,
                (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
                v40,
                v41);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
          }
          if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
            goto LABEL_73;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_201;
          v33 = 68;
        }
      }
      else
      {
        if ( *((_WORD *)a1 + 2) > 0x3FFu )
        {
          *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v41) = v9;
            LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x3Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
        }
        if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
          goto LABEL_73;
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_201;
        v33 = 64;
      }
      LODWORD(v41) = v9;
      LODWORD(v40) = a1[6];
      WPP_RECORDER_SF_DD(v10, 2u, 5u, v33, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
LABEL_201:
      v23 = 112LL;
      goto LABEL_127;
    }
    if ( (v15 & 0xFFFFFFFC) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v41) = v9;
        LODWORD(v40) = a1[3];
        WPP_RECORDER_SF_DD(v10, 2u, 5u, 0x27u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 67LL);
    }
    v34 = *(_DWORD *)(a2 + 4);
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 || *((_WORD *)a1 + 2) == 512 )
            goto LABEL_73;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_253;
          v37 = 43;
        }
        else
        {
          if ( *((_WORD *)a1 + 2) == 64 )
            goto LABEL_73;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_253;
          v37 = 42;
        }
      }
      else
      {
        v38 = *((unsigned __int16 *)a1 + 2);
        LOWORD(v38) = v38 - 8;
        if ( (unsigned __int16)v38 <= 0x38u )
        {
          v39 = 0x100000001000101LL;
          if ( _bittest64(&v39, v38) )
            goto LABEL_73;
        }
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( !*((_WORD *)a1 + 2) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_253;
        v37 = 41;
      }
    }
    else
    {
      if ( *((_WORD *)a1 + 2) == 8 )
        goto LABEL_73;
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( (unsigned __int16)(*((_WORD *)a1 + 2) - 1) > 7u )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_253;
      v37 = 40;
    }
    LODWORD(v41) = v9;
    LODWORD(v40) = *((unsigned __int16 *)a1 + 2);
    WPP_RECORDER_SF_DD(v10, 2u, 5u, v37, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v40, v41);
LABEL_253:
    v23 = 68LL;
    goto LABEL_127;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 81LL);
  if ( v11 < 7 )
  {
    v13 = *a3;
  }
  else
  {
    *a3 = 7;
    v13 = 7;
  }
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( v13 >= 7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v10,
        2u,
        5u,
        0x20u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *a1,
        v9,
        7,
        v13);
    goto LABEL_19;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v10, 2u, 7LL, 0x1Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, *a1, v9, 7);
    goto LABEL_82;
  }
LABEL_83:
  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x48u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v12;
}
