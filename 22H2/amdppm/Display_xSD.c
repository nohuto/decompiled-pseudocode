/*
 * XREFs of Display_xSD @ 0x1C0006E8C
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C002A254 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002A4D4 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004A80 (WPP_RECORDER_SF_s.c)
 *     GetCoordinationType @ 0x1C0007170 (GetCoordinationType.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C0007440 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall Display_xSD(unsigned int *a1, const char *a2)
{
  unsigned int i; // edi
  __int64 CoordinationType; // rax
  __int64 v6; // r8
  int v7; // edx
  int v8; // [rsp+20h] [rbp-38h]

  if ( a1 && a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x6Du,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x6Eu,
            (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
            a2);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x6Fu,
              (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x70u,
              (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x71u,
            (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x72u,
              (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x73u,
                (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x74u,
                  (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  CoordinationType = GetCoordinationType(a1[5 * i + 4]);
                  WPP_RECORDER_SF_Ds(*(_QWORD *)(v6 + 64), v7, v6, 117, v8, v7, CoordinationType);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_D(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0x76u,
                      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0x77u,
                        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
