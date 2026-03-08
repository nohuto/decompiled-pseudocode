/*
 * XREFs of HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C0026708
 * Callers:
 *     HUBDSM_NotifyingDeviceResetToUCXAfterReset2 @ 0x1C0020C80 (HUBDSM_NotifyingDeviceResetToUCXAfterReset2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00263DC (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_NotifyDeviceResetUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 *v5; // rbx
  __int64 *i; // rax
  __int64 *v7; // rdx
  __int64 j; // r8
  __int64 result; // rax
  __int64 v10; // rax
  __int64 k; // rdx
  __int64 v12; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 && *(_DWORD *)(a1 + 96) )
  {
    v3 = *(_QWORD *)(a1 + 120);
    v5 = (__int64 *)(v1 + 16);
    for ( i = *(__int64 **)(v1 + 16); ; i = (__int64 *)*i )
    {
      v7 = i - 1;
      if ( v5 == i )
        break;
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)v7 + 6); j = (unsigned int)(j + 1) )
      {
        if ( LODWORD(v7[9 * j + 6]) == 4 )
        {
          if ( !v3 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                2u,
                5u,
                0x16u,
                (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids);
            result = 3221225485LL;
LABEL_16:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              result = WPP_RECORDER_SF_d(
                         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                         2u,
                         5u,
                         0x17u,
                         (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
                         result);
            if ( v1 )
            {
              for ( result = *v5; ; result = *(_QWORD *)result )
              {
                v12 = result - 8;
                if ( v5 == (__int64 *)result )
                  break;
                for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v12 + 24); k = (unsigned int)(k + 1) )
                {
                  if ( *(_DWORD *)(v12 + 72 * k + 48) == 5 )
                    *(_DWORD *)(v12 + 72 * k + 48) = 4;
                }
              }
            }
            return result;
          }
          LODWORD(v7[9 * j + 6]) = 5;
          *(_QWORD *)(v3 + 8 * v2) = v7[9 * j + 5];
          v2 = (unsigned int)(v2 + 1);
        }
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 432),
          0LL);
  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)(v10 + 16) = 0LL;
  *(_OWORD *)(v10 + 32) = 0LL;
  *(_DWORD *)v10 = 48;
  *(_QWORD *)(v10 + 8) = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 248LL);
  *(_QWORD *)(v10 + 16) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v10 + 24) = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(v10 + 40) = v3;
  *(_DWORD *)(v10 + 32) = v2;
  result = HUBUCX_SubmitUcxIoctl((__int64 *)a1, 0x49101Bu);
  if ( (int)result < 0 )
  {
    v5 = (__int64 *)(v1 + 16);
    goto LABEL_16;
  }
  return result;
}
