/*
 * XREFs of ?GetRenderTargetInfo@CHolographicInteropTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180107DCC
 * Callers:
 *     ?GetRenderTargetInfo@CHolographicInteropTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x18011D5F0 (-GetRenderTargetInfo@CHolographicInteropTarget@@$4PPPPPPPM@A@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 144);
  *(_DWORD *)(a2 + 8) = DisplayId::None;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_BYTE *)(a2 + 20) = 0;
  return a2;
}
