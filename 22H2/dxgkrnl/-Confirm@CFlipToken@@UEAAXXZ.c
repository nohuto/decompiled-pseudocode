/*
 * XREFs of ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C00795F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C007961C (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C007A2C4 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 */

void __fastcall CFlipToken::Confirm(CFlipToken *this)
{
  *((_DWORD *)this + 6) = 4;
  CFlipToken::TraceStateChanged(this);
  CFlipToken::ConfirmIndependentFlipEntry(this);
}
