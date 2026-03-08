/*
 * XREFs of IsHangulLV @ 0x1405ADFF4
 * Callers:
 *     CanComposeHangul @ 0x1405ADF4C (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1405ADFC0 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x1409BE3B8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
