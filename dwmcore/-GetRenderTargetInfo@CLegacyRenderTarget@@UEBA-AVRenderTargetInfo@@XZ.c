/*
 * XREFs of ?GetRenderTargetInfo@CLegacyRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180105350
 * Callers:
 *     ?GetRenderTargetInfo@CLegacyRenderTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x180118530 (-GetRenderTargetInfo@CLegacyRenderTarget@@$4PPPPPPPM@A@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@CLegacyRenderTarget@@$4PPPPPPPM@BA@EBA?AVRenderTargetInfo@@XZ @ 0x180118550 (-GetRenderTargetInfo@CLegacyRenderTarget@@$4PPPPPPPM@BA@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 - 276);
  *(_OWORD *)a2 = *(_OWORD *)(a1 - 292);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
