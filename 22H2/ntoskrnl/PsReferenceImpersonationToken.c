/*
 * XREFs of PsReferenceImpersonationToken @ 0x14067DD20
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceImpersonationTokenEx @ 0x1406CF720 (PsReferenceImpersonationTokenEx.c)
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
