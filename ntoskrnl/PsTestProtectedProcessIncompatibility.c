/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x14070C774
 * Callers:
 *     PspThreadOpen @ 0x14070C5D0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x14070C690 (PspProcessOpen.c)
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14070E820 (DbgkCopyProcessDebugPort.c)
 *     DbgkOpenProcessDebugPort @ 0x140933D80 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140935750 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140935B70 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14070C7CC (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11

  if ( a2 == a3 )
    return 0;
  LOBYTE(a2) = *(_BYTE *)(a2 + 2170);
  LOBYTE(a3) = *(_BYTE *)(a3 + 2170);
  if ( !(unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) )
    return 0;
  if ( qword_140C37678 )
    return (unsigned __int8)qword_140C37678(v4, v3) == 0;
  return 1;
}
