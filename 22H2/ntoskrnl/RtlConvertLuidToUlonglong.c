/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x1405965A0
 * Callers:
 *     SepLogTokenSidManagement @ 0x14091CEC4 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
