/*
 * XREFs of ?GetPixelFormatInfo@CConversionSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x18029ECB0
 * Callers:
 *     ?GetPixelFormatInfo@CConversionSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011CE70 (-GetPixelFormatInfo@CConversionSwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CConversionSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v3 = *(_QWORD *)(a1 - 432);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 12LL));
    (**v4)(v4, a2);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 - 424);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 - 416);
  }
  return a2;
}
