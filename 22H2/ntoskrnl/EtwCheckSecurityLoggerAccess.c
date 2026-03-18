/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x1407FC82C
 * Callers:
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     EtwpCheckNotificationAccess @ 0x140782008 (EtwpCheckNotificationAccess.c)
 *     EtwpQueryTrace @ 0x1407F8FD4 (EtwpQueryTrace.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B828C (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(__int64 a1, char a2)
{
  if ( a2 )
    return RtlTestProtectedAccess(*(_BYTE *)(a1 + 2170), 0x31u) == 0 ? 0xC0000022 : 0;
  else
    return 0LL;
}
