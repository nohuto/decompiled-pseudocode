/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C003AE18
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039E68 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     IsShellProcess @ 0x1C003C598 (IsShellProcess.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C003DEB8 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  __int64 v2; // rcx

  if ( gptiCurrent && *(_QWORD *)(gptiCurrent + 424LL) && !(unsigned int)IsShellProcess() && *(_DWORD *)(v2 + 1024) )
  {
    if ( !*(_DWORD *)(v2 + 936) )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 956LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 988LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 988LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 988LL) &= ~4u;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 984LL) = 0;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 980LL) = 0;
    }
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
    ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 936LL);
  }
}
