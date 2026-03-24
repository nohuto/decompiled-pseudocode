/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x140607578
 * Callers:
 *     PspThreadOpen @ 0x1406073C0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x140607480 (PspProcessOpen.c)
 *     DbgkCopyProcessDebugPort @ 0x1406079BC (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     DbgkOpenProcessDebugPort @ 0x1408843E8 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140885D80 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140886150 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406075CC (PspCheckForInvalidAccessByProtection.c)
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
      if ( !qword_140C1DB80 || !(unsigned __int8)qword_140C1DB80(v5, v4) )
        return 1;
    }
  }
  return result;
}
