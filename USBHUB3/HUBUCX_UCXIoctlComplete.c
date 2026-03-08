/*
 * XREFs of HUBUCX_UCXIoctlComplete @ 0x1C0025AA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001CA0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C000CE04 (Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000CE90 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015204 (WPP_RECORDER_SF_q.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0015618 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C00258CC (WPP_RECORDER_SF_Ld.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 */

int __fastcall HUBUCX_UCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 jj; // rax
  int v5; // esi
  void *v6; // r8
  int v8; // r14d
  unsigned int *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v17; // r8
  __int64 v18; // rdx
  unsigned int k; // ecx
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r8
  _QWORD *m; // rax
  unsigned int n; // edx
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  unsigned int ii; // r8d
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned __int16 v32; // r9
  unsigned __int8 v33; // dl
  int v34; // esi
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned int kk; // edx
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  bool v45; // zf
  int v46; // ecx
  unsigned int v47; // ecx
  __int64 v48; // rcx
  unsigned __int64 v49; // rbx
  unsigned __int8 v50; // cf
  unsigned __int64 v51; // r8
  unsigned __int64 i; // rcx
  unsigned int j; // edx
  __int64 v54; // rdx
  __int64 v56; // [rsp+20h] [rbp-48h]
  __int64 v57; // [rsp+28h] [rbp-40h]
  __int64 v58; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  jj = (unsigned __int64)&retaddr;
  v5 = *(_DWORD *)(a3 + 8);
  v6 = &WPP_e357673766b030573709eddce5304229_Traceguids;
  v8 = 0;
  if ( v5 < 0 )
  {
    v9 = (unsigned int *)(a4 + 440);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Ld(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        a2,
        5u,
        0xBu,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
        *v9,
        v5);
      v6 = &WPP_e357673766b030573709eddce5304229_Traceguids;
    }
    v10 = *v9;
    jj = (unsigned int)(v10 - 4788231);
    if ( (unsigned int)jj > 0x38 || (v11 = 0x100000001000001LL, !_bittest64(&v11, jj)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v58) = v5;
        LODWORD(v57) = *v9;
        WPP_RECORDER_SF_Ld(
          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
          v10,
          5u,
          0xCu,
          (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
          v57,
          v58);
      }
      v12 = *(unsigned __int64 **)(a4 + 8);
      jj = *v12;
      v13 = *(unsigned int *)(*v12 + 2592);
      if ( (v13 & 0x80) != 0 )
        LODWORD(jj) = HUBMISC_VerifierDbgBreak("HubHwVerifierControllerOperationFailure", v12 + 34);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
      {
        LODWORD(v57) = v5;
        LODWORD(v56) = *v9;
        LODWORD(jj) = McTemplateK0pqq_EtwWriteTransfer(
                        v13,
                        &USBHUB3_ETW_EVENT_UCX_IOCTL_FAILURE,
                        (const GUID *)(a4 + 1516),
                        *(_QWORD *)(a4 + 24),
                        v56,
                        v57);
      }
    }
  }
  switch ( *(_DWORD *)(a4 + 440) )
  {
    case 0x491017:
      jj = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
             WdfDriverGlobals,
             *(_QWORD *)(a4 + 432),
             0LL);
      if ( (*(_DWORD *)(jj + 32) & 3) != 0 )
      {
        v54 = *(_QWORD *)(a4 + 2416);
        *(_DWORD *)(a4 + 1564) = -2147481856;
        v5 = -1073741823;
        LODWORD(jj) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
                        WdfDriverGlobals,
                        v54,
                        -10000000LL);
      }
      else
      {
        if ( v5 >= 0 )
        {
          LODWORD(jj) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a4 + 2416),
                          0LL);
          break;
        }
        if ( v5 == -1073741823 )
          v5 = -1073741670;
      }
      goto LABEL_118;
    case 0x49101B:
      jj = *(_QWORD *)(a4 + 48);
      if ( jj )
      {
        v51 = jj + 16;
        jj = *(_QWORD *)(jj + 16);
        for ( i = jj - 8; v51 != jj; i = jj - 8 )
        {
          for ( j = 0; j < *(_DWORD *)(i + 24); ++j )
          {
            if ( *(_DWORD *)(i + 72LL * j + 48) == 5 )
              *(_DWORD *)(i + 72LL * j + 48) = 6;
          }
          jj = *(_QWORD *)(i + 8);
        }
      }
      goto LABEL_110;
    case 0x49101F:
      jj = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C006A1E8);
      v49 = jj;
      if ( v5 < 0 )
      {
        *(_DWORD *)(a4 + 2432) = 1073807361;
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x80) != 0 )
        {
          LODWORD(v56) = v5;
          LODWORD(jj) = McTemplateK0pq_EtwWriteTransfer(
                          v48,
                          &USBHUB3_ETW_EVENT_SET_ADDRESS_FAILURE,
                          (const GUID *)(a4 + 1516),
                          *(_QWORD *)(a4 + 24),
                          v56);
        }
        if ( (*(_DWORD *)(a4 + 1456) & 0x20000) != 0 && (*(_DWORD *)(a4 + 1636) & 0x10000) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            LODWORD(jj) = WPP_RECORDER_SF_(
                            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                            2u,
                            5u,
                            0x13u,
                            (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids);
          _InterlockedOr((volatile signed __int32 *)(a4 + 1636), 0x10000u);
          _InterlockedIncrement((volatile signed __int32 *)(v49 + 88));
        }
LABEL_118:
        *(_DWORD *)(a4 + 1560) = v5;
        if ( !*(_DWORD *)(a4 + 1564) )
        {
          LODWORD(jj) = HUBPDO_GetUSBDErrorFromNTStatus(v5);
          *(_DWORD *)(a4 + 1564) = jj;
        }
        break;
      }
      jj = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
             WdfDriverGlobals,
             *(_QWORD *)(a4 + 432),
             0LL);
      v50 = _bittest((const signed __int32 *)(a4 + 1636), 0x10u);
      *(_DWORD *)(a4 + 1648) = *(_DWORD *)(jj + 28);
      if ( v50 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          LODWORD(jj) = WPP_RECORDER_SF_(
                          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                          2u,
                          5u,
                          0x12u,
                          (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids);
        _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFEFFFF);
        _InterlockedDecrement((volatile signed __int32 *)(v49 + 88));
      }
      break;
    case 0x491023:
      if ( !(unsigned int)Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage() )
      {
        if ( v5 >= 0 )
        {
          LODWORD(jj) = *(unsigned __int16 *)(a4 + 2210);
          *(_WORD *)(a4 + 2208) = jj;
          break;
        }
        jj = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
               WdfDriverGlobals,
               *(_QWORD *)(a4 + 432),
               0LL);
        v45 = (*(_DWORD *)(jj + 56) & 1) == 0;
        goto LABEL_89;
      }
      jj = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
             WdfDriverGlobals,
             *(_QWORD *)(a4 + 432),
             0LL);
      if ( v5 < 0 )
      {
        LODWORD(jj) = *(_DWORD *)(jj + 56);
        v45 = (jj & 1) == 0;
LABEL_89:
        if ( !v45 )
        {
          v34 = 4024;
          goto LABEL_121;
        }
        goto LABEL_118;
      }
      *(_WORD *)(a4 + 2208) = *(_WORD *)(a4 + 2210);
      if ( (*(_DWORD *)(jj + 24) & 0x80) != 0 )
      {
        v46 = *(_DWORD *)(a4 + 1636);
        if ( *(_BYTE *)(jj + 66) == 1 )
          v47 = v46 | 0x200000;
        else
          v47 = v46 & 0xFFDFFFFF;
        *(_DWORD *)(a4 + 1636) = v47;
      }
      break;
    case 0x49102B:
      if ( (*(_DWORD *)(a4 + 1644) & 0x4000000) != 0 )
      {
        v40 = *(_QWORD *)(a4 + 16);
        if ( v40 )
        {
          if ( *(_DWORD *)(v40 + 4) == 1 )
          {
            v41 = v40 + 456;
            if ( *(_QWORD *)(v40 + 488) && (LODWORD(jj) = *(_DWORD *)(v40 + 496), (jj & 2) != 0) )
            {
              *(_BYTE *)(v40 + 536) = 1;
              v42 = *(_QWORD *)(v40 + 544);
              v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v42,
                      off_1C006A120);
              *(_QWORD *)v43 = v41;
              *(_QWORD *)(v43 + 16) = a4;
              *(_DWORD *)(v43 + 8) = 1;
              LODWORD(jj) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(
                              WdfDriverGlobals,
                              v42);
              v8 = 1;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      v40,
                      v6);
              LODWORD(jj) = WPP_RECORDER_SF_q(
                              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                              4u,
                              2u,
                              0xDu,
                              (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
                              v44);
            }
          }
        }
      }
      goto LABEL_110;
    case 0x491037:
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
              WdfDriverGlobals,
              *(_QWORD *)(a4 + 432),
              0LL);
      v15 = *(_QWORD *)(a4 + 48);
      v16 = v14;
      if ( v15 )
      {
        v17 = (_QWORD *)(v15 + 16);
        v18 = *v17 - 8LL;
        if ( v17 != (_QWORD *)*v17 )
        {
          do
          {
            for ( k = 0; k < *(_DWORD *)(v18 + 24); ++k )
            {
              if ( *(_DWORD *)(v18 + 72LL * k + 48) == 5 )
                *(_DWORD *)(v18 + 72LL * k + 48) = 6;
            }
            v20 = *(_QWORD **)(v18 + 8);
            v18 = (__int64)(v20 - 1);
          }
          while ( v17 != v20 );
        }
      }
      v21 = *(_QWORD *)(a4 + 56);
      if ( v21 )
      {
        v22 = (_QWORD *)(v21 + 16);
        for ( m = *(_QWORD **)(v21 + 16); ; m = (_QWORD *)*m )
        {
          v25 = m - 1;
          if ( v22 == m )
            break;
          for ( n = 0; n < *((_DWORD *)v25 + 6); ++n )
          {
            if ( LODWORD(v25[9 * n + 6]) == 5 )
              LODWORD(v25[9 * n + 6]) = 6;
          }
        }
      }
      v26 = *(_QWORD *)(a4 + 72);
      if ( v26 )
      {
        for ( ii = 0; ii < *(_DWORD *)(v26 + 24); *(_DWORD *)(v26 + 72 * v28 + 48) = 6 )
          v28 = ii++;
      }
      v29 = *(_DWORD *)(v16 + 76);
      if ( !v29 )
        goto LABEL_45;
      if ( (*(_DWORD *)(v16 + 72) & 4) != 0 )
      {
        v30 = *(unsigned __int16 *)(a4 + 2208);
        if ( v30 <= v29 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v58) = *(unsigned __int16 *)(a4 + 2208);
            v32 = 15;
            LODWORD(v57) = *(_DWORD *)(v16 + 76);
            v33 = 2;
            goto LABEL_43;
          }
        }
        else
        {
          v31 = v30 - v29;
          *(_DWORD *)(a4 + 2584) = v31;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v58) = v31;
            v32 = 14;
            v33 = 4;
            LODWORD(v57) = *(_DWORD *)(v16 + 76);
LABEL_43:
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              v33,
              5u,
              v32,
              (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
              v57,
              v58);
          }
        }
      }
      else if ( v5 >= 0 )
      {
        v35 = v29 + *(unsigned __int16 *)(a4 + 2208);
        *(_DWORD *)(a4 + 2584) = v35;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v58) = v35;
          LODWORD(v57) = *(_DWORD *)(v16 + 76);
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            4u,
            5u,
            0x10u,
            (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
            v57,
            v58);
        }
        goto LABEL_45;
      }
      *(_DWORD *)(a4 + 2584) = 0;
LABEL_45:
      if ( (*(_DWORD *)(v16 + 72) & 7) != 0 )
      {
        v5 = -1073741823;
        *(_DWORD *)(a4 + 1564) = -2147481856;
        if ( *(_WORD *)(a4 + 2208) )
        {
          memmove(
            (void *)(*(_QWORD *)(a4 + 136) + 8LL * *(unsigned int *)(a4 + 144)),
            *(const void **)(a4 + 120),
            8LL * *(unsigned int *)(a4 + 128));
          *(_DWORD *)(a4 + 144) += *(_DWORD *)(a4 + 128);
          v34 = 4024;
          *(_DWORD *)(a4 + 128) = 0;
          *(_DWORD *)(a4 + 1560) = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
LABEL_121:
          LODWORD(jj) = HUBSM_AddEvent(a4 + 504, v34);
          return jj;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 2416),
          -10000000LL);
      }
      if ( (*(_DWORD *)(a4 + 1636) & 0x8000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFF7FFF);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            4u,
            5u,
            0x11u,
            (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids);
        v36 = *(_QWORD *)(a4 + 2416);
        *(_DWORD *)(a4 + 1564) = -2147481856;
        v5 = -1073741823;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
          WdfDriverGlobals,
          v36,
          -10000000LL);
      }
      else if ( *(_DWORD *)(a4 + 112) && v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 2416),
          0LL);
      }
      else if ( v5 == -1073741823 )
      {
        v5 = -1073741670;
      }
      jj = *(_QWORD *)(a4 + 48);
      if ( jj )
      {
        v37 = jj + 16;
        for ( jj = *(_QWORD *)(jj + 16); ; jj = *(_QWORD *)jj )
        {
          v39 = jj - 8;
          if ( v37 == jj )
            break;
          for ( kk = 0; kk < *(_DWORD *)(v39 + 24); ++kk )
          {
            if ( *(_DWORD *)(v39 + 72LL * kk + 48) == 3 )
              *(_DWORD *)(v39 + 72LL * kk + 48) = ((v5 >> 31) & 2) + 4;
          }
        }
      }
      *(_DWORD *)(a4 + 128) = 0;
      *(_DWORD *)(a4 + 112) = 0;
      *(_DWORD *)(a4 + 144) = 0;
LABEL_110:
      if ( v5 >= 0 )
        break;
      goto LABEL_118;
    default:
      goto LABEL_110;
  }
  v34 = ((v5 >> 31) & 0xFFFFFFF8) + 4028;
  if ( !v8 )
    goto LABEL_121;
  return jj;
}
