/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x14066CFE4
 * Callers:
 *     PspThreadOpen @ 0x14066CE40 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x14066CF00 (PspProcessOpen.c)
 *     DbgkCopyProcessDebugPort @ 0x14066D440 (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     DbgkOpenProcessDebugPort @ 0x1409272A0 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140928C60 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140929080 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14066D038 (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  bool result; // al

  result = 0;
  if ( a2 != a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 2170);
    LOBYTE(a3) = *(_BYTE *)(a3 + 2170);
    if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) )
    {
      if ( !qword_140C1B960 || !(unsigned __int8)qword_140C1B960(v4, v3) )
        return 1;
    }
  }
  return result;
}
