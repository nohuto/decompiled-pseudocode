/*
 * XREFs of IsHangulLV @ 0x1405B04A4
 * Callers:
 *     CanComposeHangul @ 0x1405B03FC (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1405B0470 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x1409C13E8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
