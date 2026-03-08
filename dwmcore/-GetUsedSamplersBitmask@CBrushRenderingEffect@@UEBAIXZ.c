/*
 * XREFs of ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x1801086D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingEffect::GetUsedSamplersBitmask(CBrushRenderingEffect *this)
{
  return (unsigned int)((1 << *(_DWORD *)(*((_QWORD *)this + 2) + 76LL)) - 1);
}
