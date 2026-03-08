/*
 * XREFs of W32kCddIsNullBrush @ 0x1C00ECC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kCddIsNullBrush(__int64 a1)
{
  return *(_DWORD *)(a1 + 120) & 0x100;
}
