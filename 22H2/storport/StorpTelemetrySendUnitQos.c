/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1C0057B8C
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000CA50 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer @ 0x1C005178C (McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0054E50 (StorpTelemetryLogUnitQosDataMeasures.c)
 */

__int64 __fastcall StorpTelemetrySendUnitQos(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  char v8; // [rsp+B8h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 5476);
  else
    LOBYTE(v3) = 0;
  v4 = *(_QWORD *)(a1 + 3256);
  v5 = v4 / 0x989680;
  if ( v4 >= 0x98968000 )
    LOBYTE(v5) = -1;
  v8 = v5;
  if ( *(_QWORD *)(a1 + 2120) || *(_QWORD *)(a1 + 2128) || *(_DWORD *)(a1 + 2136) || (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || g_StorpTraceLoggingCriticalEventEnabled)
      && g_StorpTraceLoggingCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( *(_BYTE *)(a1 + 1996) )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
    }
    StorpTelemetryLogUnitQosDataMeasures(a1);
    if ( (byte_1C0069844 & 1) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer(
        a1 + 186,
        a1 + 169,
        a1 + 160,
        *(const wchar_t **)(v6 + 4864),
        *(_DWORD *)(v6 + 56),
        v6 + 5192,
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        *(_QWORD *)(a1 + 2104),
        *(_QWORD *)(a1 + 2112),
        v8,
        *(_QWORD *)(a1 + 2128),
        *(_QWORD *)(a1 + 2120),
        *(_DWORD *)(a1 + 2136),
        *(_DWORD *)(a1 + 2140),
        v3);
    }
  }
  *(_QWORD *)(a1 + 2104) = 0LL;
  *(_QWORD *)(a1 + 2112) = 0LL;
  *(_QWORD *)(a1 + 2120) = 0LL;
  *(_QWORD *)(a1 + 2128) = 0LL;
  *(_DWORD *)(a1 + 2140) = 0;
  return 0LL;
}
