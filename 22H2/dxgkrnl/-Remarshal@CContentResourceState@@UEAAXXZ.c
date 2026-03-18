/*
 * XREFs of ?Remarshal@CContentResourceState@@UEAAXXZ @ 0x1C0087C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Remarshal@CFlipResourceState@@UEAAXXZ @ 0x1C0085C40 (-Remarshal@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::Remarshal(CContentResourceState *this)
{
  *((_BYTE *)this + 64) |= 1u;
  CFlipResourceState::Remarshal(this);
}
