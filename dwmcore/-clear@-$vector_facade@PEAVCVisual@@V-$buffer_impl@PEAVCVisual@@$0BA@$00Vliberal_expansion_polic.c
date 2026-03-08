/*
 * XREFs of ?clear@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C6530
 * Callers:
 *     ?EnsureClientInfo@CDesktopTree@@MEAAXXZ @ 0x1800C63C0 (-EnsureClientInfo@CDesktopTree@@MEAAXXZ.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18020C844 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (__int64)(a1[1] - *a1) >> 3;
  if ( result )
  {
    result *= 8LL;
    a1[1] -= result;
  }
  return result;
}
