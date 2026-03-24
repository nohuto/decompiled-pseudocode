/*
 * XREFs of ListTableEnd @ 0x1C018283C
 * Callers:
 *     RIMCmActiveContactsEnd @ 0x1C017FD1C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FD8C (RIMCmActiveContactsNext.c)
 *     ListTableIteratorNext @ 0x1C01828D8 (ListTableIteratorNext.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ListTableEnd(__int64 a1, __int64 a2)
{
  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 64);
  if ( !*(_DWORD *)(a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 65);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  return a1;
}
