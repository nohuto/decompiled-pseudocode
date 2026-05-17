/*
 * XREFs of IsHangulLV @ 0x1800FF4CC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080D5C (Normalization__NormalizeCharacter.c)
 *     CanComposeHangul @ 0x1800FF424 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1800FF498 (ComposeHangulLVT.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
