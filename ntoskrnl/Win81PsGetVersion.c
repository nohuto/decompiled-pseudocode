/*
 * XREFs of Win81PsGetVersion @ 0x140974F80
 * Callers:
 *     <none>
 * Callees:
 *     PsGetVersion @ 0x1402FDA40 (PsGetVersion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 */

BOOLEAN __fastcall Win81PsGetVersion(ULONG *a1, ULONG *a2, ULONG *a3, UNICODE_STRING *a4)
{
  BOOLEAN Version; // bp

  Version = PsGetVersion(a1, a2, a3, 0LL);
  if ( a1 )
    *a1 = 6;
  if ( a2 )
    *a2 = 3;
  if ( a3 )
    *a3 = 9600;
  if ( a4 )
    RtlInitUnicodeString(a4, 0LL);
  return Version;
}
