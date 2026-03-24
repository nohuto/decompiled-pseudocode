/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x1406079D8
 * Callers:
 *     PspThreadOpen @ 0x140607820 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1406078E0 (PspProcessOpen.c)
 *     DbgkCopyProcessDebugPort @ 0x140607E1C (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     DbgkOpenProcessDebugPort @ 0x140884438 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140885DD0 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x1408861A0 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x1408873C0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140607A2C (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // r10
  __int64 v5; // r11

  result = 0;
  if ( a2 != a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 2170);
    LOBYTE(a3) = *(_BYTE *)(a3 + 2170);
    if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) )
    {
      if ( !qword_140C1DBA0 || !(unsigned __int8)qword_140C1DBA0(v5, v4) )
        return 1;
    }
  }
  return result;
}
