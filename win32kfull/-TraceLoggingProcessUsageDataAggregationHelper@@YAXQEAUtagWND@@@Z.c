/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C009C1A4
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C009940C (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     IsShellProcess @ 0x1C009C278 (IsShellProcess.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( gptiCurrent )
  {
    v2 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( v2 )
    {
      if ( !(unsigned int)IsShellProcess(v2) && *(_DWORD *)(v3 + 1008) )
      {
        if ( !*(_DWORD *)(v3 + 920) )
        {
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 940LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 972LL) &= ~1u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 972LL) &= ~2u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 972LL) &= ~4u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 968LL) = 0;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 964LL) = 0;
        }
        TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
        ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 920LL);
      }
    }
  }
}
