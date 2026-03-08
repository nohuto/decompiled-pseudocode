/*
 * XREFs of Controller_ConfigureS0IdleSettings @ 0x1C006EC7C
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_L @ 0x1C00136C0 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     Controller_IsRegKeySetToDisableS0Idle @ 0x1C001EA78 (Controller_IsRegKeySetToDisableS0Idle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ExecuteDSM @ 0x1C006E4A4 (Controller_ExecuteDSM.c)
 *     Controller_UpdateIdleTimeout @ 0x1C006E734 (Controller_UpdateIdleTimeout.c)
 */

void __fastcall Controller_ConfigureS0IdleSettings(_QWORD *a1)
{
  int v2; // edx
  _DWORD *v3; // rsi
  int v4; // r9d
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // r12
  int v10; // edx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-89h]
  int v14; // [rsp+28h] [rbp-81h]
  _QWORD v15[10]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v16[10]; // [rsp+90h] [rbp-19h] BYREF
  int v17; // [rsp+110h] [rbp+67h] BYREF

  v17 = 0;
  memset(v16, 0, 0x44uLL);
  memset(v15, 0, 0x48uLL);
  if ( (a1[42] & 0x100000LL) != 0 )
  {
    v3 = a1 + 58;
    *((_DWORD *)a1 + 116) = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v4 = 22;
LABEL_4:
    LOBYTE(v2) = 3;
    WPP_RECORDER_SF_(a1[9], v2, 4, v4, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    goto LABEL_25;
  }
  if ( Controller_IsRegKeySetToDisableS0Idle((__int64)a1) )
  {
    v3 = a1 + 58;
    *((_DWORD *)a1 + 116) = 3;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v4 = 23;
    goto LABEL_4;
  }
  if ( _bittest64(a1 + 42, 0x3Au) )
    Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 3, 0, 0LL, 0);
  LOWORD(v14) = 1;
  LOWORD(v13) = 72;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD *, int, int, _QWORD))(WdfFunctions_01023
                                                                                                  + 1048))(
         WdfDriverGlobals,
         *a1,
         &GUID_D3COLD_SUPPORT_INTERFACE,
         v15,
         v13,
         v14,
         0LL);
  if ( v6 >= 0 )
  {
    if ( v15[5] )
    {
      v7 = ((__int64 (__fastcall *)(_QWORD, __int64, int *))v15[5])(v15[1], 1LL, &v17);
      if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_d(a1[9], v8, 4, 25, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v7);
      }
    }
    ((void (__fastcall *)(_QWORD))v15[3])(v15[1]);
    v9 = a1 + 58;
    if ( v17 > 1 )
    {
      *v9 = 0;
      Controller_UpdateIdleTimeout(a1, 10000);
      v3 = a1 + 58;
      if ( !*v9 )
      {
        memset(v16, 0, 0x48uLL);
        v11 = *a1;
        v16[1] = Controller_EvtPostPoFxRegisterDevice;
        v16[2] = Controller_EvtPrePoFxUnregisterDevice;
        LODWORD(v16[0]) = 72;
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 3400))(
                WdfDriverGlobals,
                v11,
                v16);
        v3 = a1 + 58;
        if ( v12 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          LOBYTE(v5) = 2;
          WPP_RECORDER_SF_d(a1[9], v5, 4, 27, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v12);
        }
      }
    }
    else
    {
      *v9 = 2;
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0,
        0,
        0x4000000LL,
        "Wake from Dx in S0 is missing (D3 Cold Interface)",
        0LL,
        0LL);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_dd(a1[9], v10, 4, 26, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v17, 1);
      v3 = a1 + 58;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(a1[9], v5, 4, 24, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v6);
    }
    v3 = a1 + 58;
    *((_DWORD *)a1 + 116) = 2;
  }
LABEL_25:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_L(a1[9], v5, 4, 28, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, *v3);
  }
}
