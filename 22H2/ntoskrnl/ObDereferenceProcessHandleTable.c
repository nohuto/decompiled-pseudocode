/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x1407C6D70
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140558380 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 139);
}
