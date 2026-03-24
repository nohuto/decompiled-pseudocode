/*
 * XREFs of ?GetAdapterLuid@CDDisplaySwapChain@@UEBA?AU_LUID@@XZ @ 0x1800E3240
 * Callers:
 *     ?GetAdapterLuid@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1800F68C0 (-GetAdapterLuid@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDDisplaySwapChain::GetAdapterLuid(CDDisplaySwapChain *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this - 212);
  return (struct _LUID)a2;
}
