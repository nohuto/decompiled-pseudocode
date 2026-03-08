/*
 * XREFs of HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0016F68
 * Callers:
 *     HUBDSM_ValidatingSelectInterfaceUrbFromConfigured @ 0x1C00206D0 (HUBDSM_ValidatingSelectInterfaceUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C001502C (WPP_RECORDER_SF_dq.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C0016D14 (HUBPDO_InitializeInterfaceInformation.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectInterfaceUrb(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdx
  unsigned __int16 *v4; // rbx
  int v5; // edi
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rcx
  unsigned int *v8; // rax
  unsigned __int16 v9; // r9
  int v10; // ebx
  int v11; // r12d
  __int64 result; // rax
  unsigned int *v13; // r8
  unsigned int v14; // edx
  unsigned __int16 v15; // r9
  unsigned __int16 *v16; // [rsp+40h] [rbp-78h]
  __int64 v17; // [rsp+48h] [rbp-70h]
  _OWORD v18[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v19; // [rsp+78h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 456);
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v18);
  v4 = (unsigned __int16 *)*((_QWORD *)&v18[0] + 1);
  v5 = 0;
  v6 = *(_WORD *)(*((_QWORD *)&v18[0] + 1) + 2LL);
  v17 = *(_QWORD *)(*((_QWORD *)&v18[0] + 1) + 24LL);
  if ( v17 || *(_DWORD *)(v1 + 388) != -1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)&v18[0] + 1) + 24LL) != *(_QWORD *)(a1 + 48) )
    {
      if ( v6 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_15;
        v9 = 37;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_15;
        v9 = 38;
      }
LABEL_14:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v9,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
      goto LABEL_15;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x24u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    v6 = v4[1];
    v17 = *(_QWORD *)(a1 + 48);
    *((_QWORD *)v4 + 3) = v17;
  }
  if ( v6 == 1 )
    v7 = v4 + 16;
  else
    v7 = v4 + 24;
  v8 = (unsigned int *)(v4 + 16);
  *((_QWORD *)v7 + 1) = -1LL;
  v16 = v7;
  if ( v4[1] != 1 )
  {
    if ( *v8 )
    {
      v13 = (unsigned int *)*((_QWORD *)v4 + 5);
      v14 = 0;
      while ( (char *)v13 + *v13 <= (char *)v4 + *v4 )
      {
        if ( !*((_WORD *)v13 + 2) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_15;
          v15 = 42;
          goto LABEL_43;
        }
        ++v14;
        v13 = (unsigned int *)((char *)v13 + *v13);
        if ( v14 >= *v8 )
          goto LABEL_22;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 41;
LABEL_43:
        WPP_RECORDER_SF_dq(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          (__int64)v13,
          v15,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v14,
          v4);
        goto LABEL_15;
      }
      goto LABEL_15;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 40;
      goto LABEL_14;
    }
LABEL_15:
    v10 = -2147482880;
    goto LABEL_25;
  }
  v11 = *v7 + 32;
  if ( v11 != *v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x27u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        *v4,
        *v7 + 32);
      v7 = v16;
    }
    *v4 = v11;
  }
LABEL_22:
  v10 = HUBPDO_InitializeInterfaceInformation(v1, v7, v17);
  if ( v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x2Bu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
LABEL_25:
    *(_DWORD *)(a1 + 1564) = v10;
    result = 4065LL;
    if ( v10 > -1073737728 )
    {
      switch ( v10 )
      {
        case -1073713152:
          v5 = -1073741810;
          goto LABEL_54;
        case -1073676288:
          v5 = -1073741536;
          goto LABEL_54;
        case 1:
LABEL_54:
          *(_DWORD *)(a1 + 1560) = v5;
          return result;
      }
    }
    else
    {
      switch ( v10 )
      {
        case -1073737728:
          v5 = -1073741670;
          goto LABEL_54;
        case -2147483136:
        case -2147482880:
        case -2147482112:
        case -1073739264:
          v5 = -1073741811;
          goto LABEL_54;
        case -1073738240:
          v5 = -1073741637;
          goto LABEL_54;
      }
    }
    v5 = -1073741823;
    goto LABEL_54;
  }
  return 4077LL;
}
