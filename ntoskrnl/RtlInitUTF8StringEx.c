/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405A5240
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140388C60 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitUTF8StringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
