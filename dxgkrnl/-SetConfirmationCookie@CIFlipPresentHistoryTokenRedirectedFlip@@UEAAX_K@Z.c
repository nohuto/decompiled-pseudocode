/*
 * XREFs of ?SetConfirmationCookie@CIFlipPresentHistoryTokenRedirectedFlip@@UEAAX_K@Z @ 0x1C0019B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetConfirmationCookie(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        __int64 a2)
{
  *(_QWORD *)(*((_QWORD *)this + 1) + 64LL) = a2;
}
