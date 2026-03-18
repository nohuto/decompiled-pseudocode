/*
 * XREFs of ?GetPixelFormatInfo@CLegacyRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008BA10
 * Callers:
 *     ?GetClearMode@CLegacyRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x18008B980 (-GetClearMode@CLegacyRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 *     ?GetPixelFormatInfo@CLegacyRenderTarget@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011C600 (-GetPixelFormatInfo@CLegacyRenderTarget@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CLegacyRenderTarget@@$4PPPPPPPM@BA@EBA?AUPixelFormatInfo@@XZ @ 0x18011C620 (-GetPixelFormatInfo@CLegacyRenderTarget@@$4PPPPPPPM@BA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v3 = *(_QWORD *)(a1 - 18544);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL));
    (**v4)(v4, a2);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 - 18616);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 - 18608);
  }
  return a2;
}
