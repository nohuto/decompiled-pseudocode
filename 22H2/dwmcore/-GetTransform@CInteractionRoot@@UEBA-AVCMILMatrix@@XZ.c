/*
 * XREFs of ?GetTransform@CInteractionRoot@@UEBA?AVCMILMatrix@@XZ @ 0x18012D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DBE0 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CInteractionRoot::GetTransform(__int64 a1, CMILMatrix *a2)
{
  __int64 v2; // rdx

  CMILMatrix::SetToIdentity(a2);
  return v2;
}
