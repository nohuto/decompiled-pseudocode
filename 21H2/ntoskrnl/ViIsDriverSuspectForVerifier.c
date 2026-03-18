/*
 * XREFs of ViIsDriverSuspectForVerifier @ 0x140A821E0
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405FDEC0 (VfIsVerificationEnabledForImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x140A816C0 (MmIsDriverSuspectForVerifier.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140A93724 (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140A93A60 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  const UNICODE_STRING *v3; // rdi

  v1 = VfSuspectDriversList;
  result = 0LL;
  if ( (__int64 *)VfSuspectDriversList != &VfSuspectDriversList )
  {
    v3 = (const UNICODE_STRING *)(a1 + 88);
    do
    {
      result = RtlEqualUnicodeString((PCUNICODE_STRING)(v1 + 24), v3, 1u);
      if ( (_BYTE)result )
        break;
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &VfSuspectDriversList );
  }
  return result;
}
