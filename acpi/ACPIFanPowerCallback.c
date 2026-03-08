/*
 * XREFs of ACPIFanPowerCallback @ 0x1C0027860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     AcpiDiagTraceFanEvent @ 0x1C0008320 (AcpiDiagTraceFanEvent.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIFanLoop @ 0x1C002759C (ACPIFanLoop.c)
 */

void __fastcall ACPIFanPowerCallback(__int64 a1, __int64 a2, int a3)
{
  char v4; // r10
  const char *v5; // rax
  const char *v6; // rdx
  __int64 v7; // rcx
  bool v8; // al
  __int16 v9; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v10[32]; // [rsp+58h] [rbp-40h] BYREF
  __int16 *v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+80h] [rbp-18h]
  int v13; // [rsp+84h] [rbp-14h]

  if ( a3 < 0 )
  {
    v4 = 0;
    v5 = (const char *)&unk_1C00622D0;
    v6 = (const char *)&unk_1C00622D0;
    if ( a1 )
    {
      v4 = a1;
      v7 = *(_QWORD *)(a1 + 8);
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v5 = *(const char **)(a1 + 608);
        if ( (v7 & 0x400000000000LL) != 0 )
          v6 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        0xDu,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        a3,
        v4,
        v5,
        v6);
  }
  v12 = 2;
  v8 = *(_DWORD *)(a1 + 384) == 1;
  v13 = 0;
  v9 = v8;
  v11 = &v9;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_POWER_STATE_CHANGE, 3u, (__int64)v10);
  ACPIFanLoop(a1, 2, 0);
}
