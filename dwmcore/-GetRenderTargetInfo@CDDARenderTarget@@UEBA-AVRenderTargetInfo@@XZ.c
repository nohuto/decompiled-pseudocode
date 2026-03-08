/*
 * XREFs of ?GetRenderTargetInfo@CDDARenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180106170
 * Callers:
 *     ?GetRenderTargetInfo@CDDARenderTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x1801197F0 (-GetRenderTargetInfo@CDDARenderTarget@@$4PPPPPPPM@A@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDARenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 - 1944);
  *(_OWORD *)a2 = *(_OWORD *)(a1 - 1960);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
