/*
 * XREFs of HUBPDO_ValidateSelectConfigUrb @ 0x1C0016970
 * Callers:
 *     HUBDSM_ValidatingSelectConfigUrbFromConfigured @ 0x1C00206B0 (HUBDSM_ValidatingSelectConfigUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C001676C (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     WMI_FireNotification @ 0x1C008C428 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectConfigUrb(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rdx
  unsigned __int16 *v4; // r12
  __int64 v5; // r13
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int16 *v13; // rcx
  unsigned __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // r9
  int v17; // eax
  __int64 result; // rax
  _OWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 456);
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v19);
  v4 = (unsigned __int16 *)*((_QWORD *)&v19[0] + 1);
  v5 = *(_QWORD *)(*((_QWORD *)&v19[0] + 1) + 24LL);
  if ( !v5 )
  {
    *(_DWORD *)(v1 + 36) = 0;
    return 4077LL;
  }
  v6 = HUBPDO_ValidateConfigurationDescriptor(
         a1,
         *(unsigned __int8 **)(*((_QWORD *)&v19[0] + 1) + 24LL),
         *(unsigned __int16 *)(v5 + 2));
  if ( !v6 )
  {
    v8 = *(_QWORD *)(v1 + 16);
    v9 = 2 * *(unsigned __int8 *)(v5 + 8);
    *(_DWORD *)(v1 + 36) = v9;
    v10 = (unsigned int *)(v8 + 92);
    if ( *(_BYTE *)(v8 + 240) && v9 > *v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          3u,
          5u,
          0x1Cu,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
      v7 = -1073741670;
      v6 = -1073737728;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1424LL) = 5;
      WMI_FireNotification(*(_QWORD *)a1, *(unsigned __int16 *)(v1 + 48), 2LL);
      goto LABEL_52;
    }
    if ( (*(_DWORD *)(a1 + 1456) & 0x800) != 0 )
    {
      v11 = 900;
      if ( *v10 == 100 )
        v11 = 150;
      if ( 8 * (unsigned int)*(unsigned __int8 *)(v5 + 8) > v11 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            3u,
            5u,
            0x1Du,
            (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
        v12 = *(_QWORD *)(v1 + 24);
        if ( (*(_DWORD *)(v12 + 2436) & 0x1000) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetConfigTooMuchPowerRequired", v12 + 504);
      }
    }
    v13 = v4 + 20;
    v14 = (unsigned __int64)v4 + *v4;
    v15 = 0;
    if ( (unsigned __int64)(v4 + 21) < v14 )
    {
      while ( v15 < *(unsigned __int8 *)(v5 + 4) )
      {
        v16 = *v13;
        if ( (unsigned int)v16 < 0x18 || (v13 = (unsigned __int16 *)((char *)v13 + v16), (unsigned __int64)v13 > v14) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              3u,
              5u,
              0x1Eu,
              (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
              v16);
          goto LABEL_50;
        }
        ++v15;
        if ( (unsigned __int64)(v13 + 1) >= v14 )
          break;
      }
    }
    v17 = *(unsigned __int8 *)(v5 + 4);
    if ( (_BYTE)v17 )
    {
      if ( v15 == v17 && v15 )
        return 4077LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          3u,
          5u,
          0x20u,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          *(unsigned __int8 *)(v5 + 4),
          v15);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x1Fu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    }
LABEL_50:
    v6 = -1073737984;
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x1Bu,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
  if ( v6 > -1073737728 )
  {
    switch ( v6 )
    {
      case -1073713152:
        v7 = -1073741810;
        goto LABEL_52;
      case -1073676288:
        v7 = -1073741536;
        goto LABEL_52;
      case 1:
        return 4077LL;
    }
    goto LABEL_51;
  }
  if ( v6 == -1073737728 )
  {
    v7 = -1073741670;
    goto LABEL_52;
  }
  if ( v6 == -2147483136 || v6 == -2147482880 || v6 == -2147482112 || v6 == -1073739264 )
  {
    v7 = -1073741811;
    goto LABEL_52;
  }
  if ( v6 != -1073738240 )
  {
LABEL_51:
    v7 = -1073741823;
    goto LABEL_52;
  }
  v7 = -1073741637;
LABEL_52:
  result = 4065LL;
  *(_DWORD *)(a1 + 1560) = v7;
  *(_DWORD *)(a1 + 1564) = v6;
  return result;
}
