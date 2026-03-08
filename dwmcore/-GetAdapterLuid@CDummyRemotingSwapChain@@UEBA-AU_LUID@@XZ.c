/*
 * XREFs of ?GetAdapterLuid@CDummyRemotingSwapChain@@UEBA?AU_LUID@@XZ @ 0x18010784C
 * Callers:
 *     ?GetAdapterLuid@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011B390 (-GetAdapterLuid@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDummyRemotingSwapChain::GetAdapterLuid(CDummyRemotingSwapChain *this, _QWORD *a2)
{
  struct _LUID result; // rax

  result = (struct _LUID)a2;
  *a2 = *(_QWORD *)(*((_QWORD *)this - 27) + 896LL);
  return result;
}
