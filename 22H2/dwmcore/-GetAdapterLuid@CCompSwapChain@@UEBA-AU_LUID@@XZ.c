/*
 * XREFs of ?GetAdapterLuid@CCompSwapChain@@UEBA?AU_LUID@@XZ @ 0x18010855C
 * Callers:
 *     ?GetAdapterLuid@CCompSwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011FFE0 (-GetAdapterLuid@CCompSwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CCompSwapChain::GetAdapterLuid(CCompSwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 37);
  return (struct _LUID)a2;
}
