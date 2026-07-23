/*
 * XREFs of RtlContinue @ 0x14058FBC8
 * Callers:
 *     <none>
 * Callees:
 *     NtContinueEx @ 0x1403FE810 (NtContinueEx.c)
 */

NTSTATUS __fastcall RtlContinue(_CONTEXT *a1, void *a2)
{
  return NtContinueEx(a1, a2);
}
