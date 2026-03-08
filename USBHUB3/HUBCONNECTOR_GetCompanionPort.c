/*
 * XREFs of HUBCONNECTOR_GetCompanionPort @ 0x1C0082380
 * Callers:
 *     HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x1C0034144 (HUBMISC_TypeCCompanionHasIdenticalDeviceAttached.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C007B17C (HUBFDO_IoctlGetPortConnectorProperties.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBCONNECTOR_GetCompanionPort(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v5; // eax
  unsigned __int16 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // r15
  _QWORD *i; // rax
  _QWORD *v10; // rdi
  int v12; // ecx
  bool v13; // zf
  int v14; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  v3 = a2;
  if ( (*(_DWORD *)(a1 + 204) & 0x20) != 0 )
  {
    if ( a2 <= 1u )
    {
      v8 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_1C006A1E8)
                    + 40);
      for ( i = (_QWORD *)*v8; ; i = (_QWORD *)v10[10] )
      {
        v10 = i - 10;
        if ( v8 == i )
          goto LABEL_10;
        if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
          break;
      }
      if ( !v10 )
      {
LABEL_10:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 1432),
            2u,
            4u,
            0x16u,
            (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
        return v2;
      }
      v12 = *(_DWORD *)(a1 + 208);
      if ( v12 == 512 )
      {
        if ( !v3 )
          return v10[8];
        v13 = v3 == 1;
      }
      else
      {
        if ( v12 != 768 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v2;
          v14 = *(_DWORD *)(a1 + 208);
          v6 = 23;
          v7 = *(_QWORD *)(a1 + 1432);
          goto LABEL_5;
        }
        if ( !v3 )
          return v10[7];
        v2 = v10[8];
        v13 = a1 == v2;
      }
      if ( v13 )
        return v10[9];
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(_DWORD *)(a1 + 208);
      v6 = 21;
      v7 = *(_QWORD *)(a1 + 1432);
      v14 = v5;
LABEL_5:
      WPP_RECORDER_SF_d(v7, 2u, 6u, v6, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids, v14);
    }
  }
  return v2;
}
