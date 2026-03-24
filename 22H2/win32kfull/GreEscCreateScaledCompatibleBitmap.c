/*
 * XREFs of GreEscCreateScaledCompatibleBitmap @ 0x1C029E6B8
 * Callers:
 *     GreScalingDispatchEscape @ 0x1C029EB20 (GreScalingDispatchEscape.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 */

__int16 __fastcall GreEscCreateScaledCompatibleBitmap(__int64 a1)
{
  __int64 v2; // rcx
  __int64 CompatibleBitmapInternal; // rax

  v2 = 0LL;
  LOWORD(CompatibleBitmapInternal) = *(_WORD *)(a1 + 24) - 96;
  if ( (unsigned __int16)CompatibleBitmapInternal <= 0x180u )
  {
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                 *(HDC *)(a1 + 8),
                                 *(_DWORD *)(a1 + 16),
                                 *(_DWORD *)(a1 + 20),
                                 0,
                                 0LL,
                                 (unsigned __int16 *)(a1 + 24));
    v2 = CompatibleBitmapInternal;
  }
  *(_QWORD *)(a1 + 8) = v2;
  return CompatibleBitmapInternal;
}
