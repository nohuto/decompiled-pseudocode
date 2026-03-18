/*
 * XREFs of SeSetSecurityAttributesToken @ 0x1409C6300
 * Callers:
 *     <none>
 * Callees:
 *     SepInternalSetSecurityAttributesToken @ 0x1405F3E6C (SepInternalSetSecurityAttributesToken.c)
 */

__int64 __fastcall SeSetSecurityAttributesToken(void *a1, KPROCESSOR_MODE a2, int *a3, __int64 a4)
{
  return SepInternalSetSecurityAttributesToken(a1, a2, 0, a3, a4);
}
