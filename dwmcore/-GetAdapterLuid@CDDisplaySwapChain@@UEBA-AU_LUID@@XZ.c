/*
 * XREFs of ?GetAdapterLuid@CDDisplaySwapChain@@UEBA?AU_LUID@@XZ @ 0x1801076BC
 * Callers:
 *     ?GetAdapterLuid@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011AA70 (-GetAdapterLuid@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDDisplaySwapChain::GetAdapterLuid(CDDisplaySwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 62);
  return (struct _LUID)a2;
}
