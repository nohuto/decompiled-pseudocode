/*
 * XREFs of ?GetAlphaDescriptor@CLinearTransferEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x180237170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearTransferEffect::GetAlphaDescriptor(__int64 a1)
{
  return (unsigned int)(*(_BYTE *)(a1 + 220) != 0) + 1;
}
