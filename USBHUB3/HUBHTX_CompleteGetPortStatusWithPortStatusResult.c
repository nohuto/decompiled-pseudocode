/*
 * XREFs of HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C000641C
 * Callers:
 *     HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer @ 0x1C00087A0 (HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_CompleteGetPortStatusWithPortStatusResult(__int64 *a1)
{
  __int64 v1; // rdx
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v10 = 0LL;
  v1 = a1[316];
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v3 = *(_DWORD *)(a1[323] + 184);
  v4 = *(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(
                                 WdfDriverGlobals,
                                 v1)
                             + 184)
                 + 24LL);
  if ( v4 == 2228240 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2144))(
           WdfDriverGlobals,
           a1[316],
           &v10);
    if ( v5 >= 0 )
    {
      *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v10,
                   0LL)
               + 4) = v3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
        WdfDriverGlobals,
        a1[316],
        8LL);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(a1[315], 2u, 3u, 0x72u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v5);
    }
  }
  else if ( v4 == 2228243 )
  {
    v6 = a1[316];
    LOWORD(v11) = 40;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      v6,
      &v11);
    v7 = (_DWORD *)*((_QWORD *)&v11 + 1);
    v5 = 0;
    v8 = v12;
    if ( (v3 & 1) != 0 )
      **((_DWORD **)&v11 + 1) |= 2u;
    else
      v5 = -1073741810;
    if ( (v3 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v8 + 32) & 0x2000) != 0 )
        _InterlockedAnd((volatile signed __int32 *)(v8 + 32), 0xFFFFDFFF);
      else
        *v7 |= 1u;
    }
    if ( (v3 & 0x10000) != 0 )
      v5 = -1073741810;
  }
  else
  {
    v5 = -1073741630;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a1[316],
           (unsigned int)v5);
}
