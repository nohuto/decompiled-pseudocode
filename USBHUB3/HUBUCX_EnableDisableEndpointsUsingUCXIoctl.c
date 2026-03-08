/*
 * XREFs of HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C00268D8
 * Callers:
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C0023C60 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency @ 0x1C0023D50 (HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C0024490 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C00285D0 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00263DC (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

_UNKNOWN **__fastcall HUBUCX_EnableDisableEndpointsUsingUCXIoctl(__int64 *a1)
{
  int v2; // edx
  _UNKNOWN **result; // rax
  _QWORD **v4; // r8
  _QWORD *i; // rax
  __int64 j; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdi
  __int64 k; // rdx
  int v10; // r8d
  int v11; // [rsp+28h] [rbp-10h]

  if ( !*((_DWORD *)a1 + 32) )
  {
    if ( !*((_DWORD *)a1 + 28) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1[1] + 1432),
          4u,
          5u,
          0x18u,
          (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        a1[302],
        0LL);
      v2 = 4028;
      return (_UNKNOWN **)HUBSM_AddEvent((__int64)(a1 + 63), v2);
    }
    if ( (*((_DWORD *)a1 + 409) & 0x8000) != 0 )
    {
      v4 = (_QWORD **)(a1[6] + 16);
      for ( i = *v4; ; i = (_QWORD *)*i )
      {
        v7 = i - 1;
        if ( v4 == i )
          break;
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)v7 + 6); j = (unsigned int)(j + 1) )
        {
          if ( LODWORD(v7[9 * j + 6]) == 3 )
            LODWORD(v7[9 * j + 6]) = 6;
        }
      }
      *((_DWORD *)a1 + 391) = -2147481856;
      *((_DWORD *)a1 + 390) = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1[1] + 1432),
          4u,
          5u,
          0x19u,
          (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids);
      v2 = 4020;
      return (_UNKNOWN **)HUBSM_AddEvent((__int64)(a1 + 63), v2);
    }
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         a1[54],
         0LL);
  memset((void *)(v8 + 4), 0, 0x5CuLL);
  *(_DWORD *)v8 = 96;
  *(_QWORD *)(v8 + 8) = *(_QWORD *)(*a1 + 248);
  *(_QWORD *)(v8 + 16) = a1[3];
  if ( (*((_DWORD *)a1 + 409) & 0x8000) == 0 )
  {
    *(_DWORD *)(v8 + 24) = *((_DWORD *)a1 + 28);
    *(_QWORD *)(v8 + 32) = a1[13];
  }
  *(_DWORD *)(v8 + 40) = *((_DWORD *)a1 + 32);
  *(_QWORD *)(v8 + 48) = a1[15];
  *(_DWORD *)(v8 + 56) = *((_DWORD *)a1 + 36);
  *(_QWORD *)(v8 + 64) = a1[17];
  if ( a1[6] != -32 )
  {
    *(_BYTE *)(v8 + 80) = *(_BYTE *)(a1[6] + 37);
    if ( a1[8] )
    {
      for ( k = 0LL; k < 2; ++k )
        *(_BYTE *)(v8 + k + 81) = *(_BYTE *)(*(_QWORD *)(a1[10] + 32) + k + 2);
    }
  }
  *(_DWORD *)(v8 + 84) = *((_DWORD *)a1 + 37);
  *(_QWORD *)(v8 + 88) = a1[19];
  *((_DWORD *)a1 + 37) = 0;
  a1[19] = 0LL;
  result = (_UNKNOWN **)HUBUCX_SubmitUcxIoctl(a1, 0x491037u);
  v10 = (int)result;
  if ( (int)result < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v10;
      return (_UNKNOWN **)WPP_RECORDER_SF_d(
                            *(_QWORD *)(a1[1] + 1432),
                            2u,
                            5u,
                            0x1Au,
                            (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
                            v11);
    }
  }
  return result;
}
