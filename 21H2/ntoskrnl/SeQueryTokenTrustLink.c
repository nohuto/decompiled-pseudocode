/*
 * XREFs of SeQueryTokenTrustLink @ 0x140361448
 * Callers:
 *     PsRestoreImpersonation @ 0x14071D920 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
