/*
 * XREFs of ListTableEnd @ 0x1C00F1C32
 * Callers:
 *     RIMCmActiveContactsEnd @ 0x1C00F1A04 (RIMCmActiveContactsEnd.c)
 *     ListTableIteratorNext @ 0x1C00F1CCE (ListTableIteratorNext.c)
 *     RIMCmActiveContactsNext @ 0x1C01DE0AC (RIMCmActiveContactsNext.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ListTableEnd(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 64);
  if ( !*(_DWORD *)(a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 65);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  return a1;
}
