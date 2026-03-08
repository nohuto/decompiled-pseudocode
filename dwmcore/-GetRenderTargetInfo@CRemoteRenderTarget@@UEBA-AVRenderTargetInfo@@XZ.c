/*
 * XREFs of ?GetRenderTargetInfo@CRemoteRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180105374
 * Callers:
 *     ?GetRenderTargetInfo@CRemoteRenderTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x1801185D0 (-GetRenderTargetInfo@CRemoteRenderTarget@@$4PPPPPPPM@A@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 - 140);
  *(_OWORD *)a2 = *(_OWORD *)(a1 - 156);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
