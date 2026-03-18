/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405A76D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140374CD0 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitUTF8StringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
