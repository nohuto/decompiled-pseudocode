/*
 * XREFs of ?Discard@CFlipContentToken@@UEAAXXZ @ 0x1C0089260
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C0089374 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

void __fastcall CFlipContentToken::Discard(CFlipContentToken *this)
{
  CFlipContentToken::SetFlipManagerObjectPreReferenced(this, 0LL);
  *((_DWORD *)this + 6) = 6;
}
