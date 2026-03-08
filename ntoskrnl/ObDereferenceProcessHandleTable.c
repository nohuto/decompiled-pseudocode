/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x1406EDFD0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140555EE0 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 139);
}
