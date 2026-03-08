/*
 * XREFs of PopRundownThermalRequests @ 0x1409803F0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalRequest @ 0x14085CD54 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14085D84C (PopDiagTraceCoolingExtension.c)
 */

void PopRundownThermalRequests()
{
  __int64 i; // rbx
  __int64 j; // rdi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      PopDiagTraceCoolingExtension(i, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 18) )
          PopDiagTraceThermalRequest(j, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock(i + 32);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
