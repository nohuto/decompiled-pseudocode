/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x140748A78
 * Callers:
 *     EtwpCheckNotificationAccess @ 0x140690CB0 (EtwpCheckNotificationAccess.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     EtwpQueryTrace @ 0x1407456E0 (EtwpQueryTrace.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x14070C7FC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(__int64 a1, char a2)
{
  if ( a2 )
    return RtlTestProtectedAccess(*(_BYTE *)(a1 + 2170), 0x31u) == 0 ? 0xC0000022 : 0;
  else
    return 0LL;
}
