/*
 * XREFs of ?HasSwapChainContent@CSurfaceBrush@@UEBA_NXZ @ 0x18024F530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::HasSwapChainContent(CSurfaceBrush *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 14) + 40LL))(
           *((_QWORD *)this + 14),
           this);
}
