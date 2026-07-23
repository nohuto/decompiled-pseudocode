/*
 * XREFs of PsReferenceImpersonationToken @ 0x1405F8AC0
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceImpersonationTokenEx @ 0x14064B780 (PsReferenceImpersonationTokenEx.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return (PACCESS_TOKEN)PsReferenceImpersonationTokenEx(
                          (_DWORD)Thread,
                          1,
                          (_DWORD)CopyOnOpen,
                          (_DWORD)EffectiveOnly,
                          (__int64)ImpersonationLevel,
                          0LL);
}
