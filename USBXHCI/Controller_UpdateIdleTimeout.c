/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x1C006E734
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0013830 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006E388 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006EC7C (Controller_ConfigureS0IdleSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00180C4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 */

void __fastcall Controller_UpdateIdleTimeout(__int64 *a1, int a2)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  _DWORD v7[10]; // [rsp+40h] [rbp-38h] BYREF

  if ( !*((_DWORD *)a1 + 116) )
  {
    v7[3] = a2;
    v4 = *a1;
    v7[0] = 36;
    v7[5] = 2;
    v7[6] = 2;
    v7[8] = 2;
    v7[1] = 2;
    v7[2] = 5;
    v7[4] = 2;
    v7[7] = 2;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01023 + 368))(
           WdfDriverGlobals,
           v4,
           v7);
    if ( v5 >= 0 )
    {
      *((_DWORD *)a1 + 144) = a2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_D(a1[9], v6, 4, 32, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, a2);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(a1[9], v6, 4, 31, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v5);
      }
      Controller_HwVerifierBreakIfEnabled(a1, 0, 0, 0x4000000LL, "Wake from Dx in S0 is missing (WDF)", 0LL, 0LL);
      *((_DWORD *)a1 + 116) = 2;
    }
  }
}
