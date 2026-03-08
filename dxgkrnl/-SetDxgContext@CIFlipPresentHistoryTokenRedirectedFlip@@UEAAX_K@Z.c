/*
 * XREFs of ?SetDxgContext@CIFlipPresentHistoryTokenRedirectedFlip@@UEAAX_K@Z @ 0x1C0019B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetDxgContext(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        __int64 a2)
{
  *(_QWORD *)(*((_QWORD *)this + 1) + 16LL) = a2;
}
