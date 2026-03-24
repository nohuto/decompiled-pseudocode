/*
 * XREFs of GetgpniFontsDirectoryAndScratch @ 0x1C0137080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetgpniFontsDirectoryAndScratch(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  wchar_t *result; // rax

  *a1 = &gpniFontsDirectory;
  *a2 = &gpniScratch;
  result = gpwszFontsDirectory;
  *a3 = gpwszFontsDirectory;
  return result;
}
