/*
 * XREFs of ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C02728BC
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00BE69C (W32kEtwEnableCallback.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D44A0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C00871BC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00B03A4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00B0564 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C02729F0 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C02734F8 (-CitpResetTracking@@YAJXZ.c)
 */

void __fastcall CitEtwEnableCallback(const struct _GUID *a1, int a2, __int64 a3)
{
  int v3; // ecx
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int128 v6; // [rsp+30h] [rbp-28h]

  if ( (_BYTE)g_CompatImpact && !byte_1C02D4D81 && a2 == 2 && a3 == 2048 && a1 )
  {
    v6 = (__int128)*a1;
    LODWORD(v6) = 0;
    v3 = (unsigned __int16)WORD2(*(_QWORD *)&a1->Data1);
    WORD2(v6) = 0;
    v4 = v6 - *(_QWORD *)&CitControlGuid.Data1;
    if ( (_QWORD)v6 == *(_QWORD *)&CitControlGuid.Data1 )
      v4 = *((_QWORD *)&v6 + 1) - *(_QWORD *)CitControlGuid.Data4;
    if ( !v4 && xmmword_1C02D4DA0 )
    {
      v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      switch ( v3 )
      {
        case 1:
          CitpContextFlush(xmmword_1C02D4DA0, v5);
          break;
        case 2:
          CitpSetForegroundProcess(xmmword_1C02D4DA0, v5, 0LL, 0LL, 0LL);
          CitpContextReinitialize(xmmword_1C02D4DA0, v5);
          break;
        case 12:
          CitpResetTracking();
          break;
        case 13:
          CitpInteractionSummariesFlush(xmmword_1C02D4DA0, 0);
          break;
      }
    }
  }
}
