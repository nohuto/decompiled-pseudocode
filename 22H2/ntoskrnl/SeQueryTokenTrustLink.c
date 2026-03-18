/*
 * XREFs of SeQueryTokenTrustLink @ 0x140297B50
 * Callers:
 *     PsRestoreImpersonation @ 0x14071E5A0 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
