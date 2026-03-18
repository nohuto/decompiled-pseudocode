/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405E4040
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403C7DA0 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitUTF8StringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
