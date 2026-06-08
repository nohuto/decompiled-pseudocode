/*
 * XREFs of Display_LPI @ 0x1C0006330
 * Callers:
 *     AcpiGetCoordinatedLpiStates @ 0x1C00270D8 (AcpiGetCoordinatedLpiStates.c)
 *     InitAcpiLpiStates @ 0x1C0035FE0 (InitAcpiLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_S @ 0x1C000491C (WPP_RECORDER_SF_S.c)
 *     DisplayGenAddr @ 0x1C0005900 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_DS @ 0x1C00072E8 (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_i @ 0x1C0007834 (WPP_RECORDER_SF_i.c)
 */

_UNKNOWN **__fastcall Display_LPI(__int64 a1, const wchar_t *a2, int a3, int a4)
{
  _UNKNOWN **result; // rax
  unsigned int i; // esi
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // r9d
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                5u,
                                2u,
                                0x9Cu,
                                (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x9Du,
                                  (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                                  a2);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    5u,
                                    2u,
                                    0x9Eu,
                                    (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                      5u,
                                      2u,
                                      0x9Fu,
                                      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                result = (_UNKNOWN **)WPP_RECORDER_SF_i(
                                        WPP_GLOBAL_Control->DeviceExtension,
                                        (_DWORD)a2,
                                        a3,
                                        160,
                                        v13,
                                        *(_QWORD *)(a1 + 8));
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                        5u,
                                        2u,
                                        0xA1u,
                                        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
              }
            }
          }
        }
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v8 = 80LL * i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DS(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4, v13, i, *(_QWORD *)(v8 + a1 + 96));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0xA3u,
              (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0xA4u,
                (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0xA5u,
                  (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0xA6u,
                    (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_D(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0xA7u,
                      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_D(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0xA8u,
                        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      WPP_RECORDER_SF_(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0xA9u,
                        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
                    }
                  }
                }
              }
            }
          }
        }
      }
      DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 48), "    ", a3, a4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xAAu,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 60), "    ", v9, v10);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xABu,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      result = (_UNKNOWN **)DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 72), "    ", v11, v12);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0xACu,
                                  (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      }
    }
  }
  return result;
}
