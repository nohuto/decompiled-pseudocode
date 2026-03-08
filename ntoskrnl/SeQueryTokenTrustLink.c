/*
 * XREFs of SeQueryTokenTrustLink @ 0x140245F40
 * Callers:
 *     PsRestoreImpersonation @ 0x1406D2D60 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
