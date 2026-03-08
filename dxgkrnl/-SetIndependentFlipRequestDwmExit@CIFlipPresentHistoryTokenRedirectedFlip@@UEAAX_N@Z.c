/*
 * XREFs of ?SetIndependentFlipRequestDwmExit@CIFlipPresentHistoryTokenRedirectedFlip@@UEAAX_N@Z @ 0x1C0019C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetIndependentFlipRequestDwmExit(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        unsigned __int8 a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0xFEFFFFFF | (a2 << 24);
}
