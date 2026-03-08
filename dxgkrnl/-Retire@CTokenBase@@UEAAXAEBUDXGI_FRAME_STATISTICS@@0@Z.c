/*
 * XREFs of ?Retire@CTokenBase@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x1C0019E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenBase::Retire(
        CTokenBase *this,
        const struct DXGI_FRAME_STATISTICS *a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  *((_DWORD *)this + 6) = 5;
}
