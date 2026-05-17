/*
 * XREFs of iswdigit @ 0x1800901F0
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x18001BE90 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
