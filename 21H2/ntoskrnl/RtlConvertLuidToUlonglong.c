/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x140596890
 * Callers:
 *     SepLogTokenSidManagement @ 0x14091CFD4 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
