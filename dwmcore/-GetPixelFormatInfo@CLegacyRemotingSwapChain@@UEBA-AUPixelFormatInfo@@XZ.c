/*
 * XREFs of ?GetPixelFormatInfo@CLegacyRemotingSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802A01A0
 * Callers:
 *     ?GetPixelFormatInfo@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011D490 (-GetPixelFormatInfo@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CLegacyRemotingSwapChain::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = *(_QWORD *)(a1 - 168);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, _DWORD *))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 12LL));
    (**v4)(v4, a2);
  }
  else
  {
    a2[2] = 0;
    *a2 = 87;
    a2[1] = 3;
  }
  return a2;
}
