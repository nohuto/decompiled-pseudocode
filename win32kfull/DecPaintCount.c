/*
 * XREFs of DecPaintCount @ 0x1C00FE604
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     InternalInvalidate3 @ 0x1C0054B50 (InternalInvalidate3.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00FE114 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ClrFTrueVis @ 0x1C00FED00 (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0102024 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 600))-- == 1 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 448) + 8LL), 0xFFFFFFDF);
    result = *(_QWORD *)(v1 + 448);
    _InterlockedAnd((volatile signed __int32 *)(result + 4), 0xFFFFFFDF);
  }
  return result;
}
