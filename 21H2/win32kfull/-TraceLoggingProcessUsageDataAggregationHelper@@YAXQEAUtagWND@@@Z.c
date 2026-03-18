/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00FD77C
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     IsShellProcess @ 0x1C007B10C (IsShellProcess.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00FD850 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
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
      if ( !(unsigned int)IsShellProcess(v2) && *(_DWORD *)(v3 + 1024) )
      {
        if ( !*(_DWORD *)(v3 + 936) )
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
  }
}
