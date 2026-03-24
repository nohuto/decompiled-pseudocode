/*
 * XREFs of SeQueryTokenTrustLink @ 0x1403566F8
 * Callers:
 *     PsRestoreImpersonation @ 0x140706540 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
