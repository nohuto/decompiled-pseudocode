/*
 * XREFs of DecPaintCount @ 0x1C00F5984
 * Callers:
 *     InternalInvalidate3 @ 0x1C0074764 (InternalInvalidate3.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F51F0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ClrFTrueVis @ 0x1C00F54A0 (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F55A0 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
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
    *(_WORD *)(*(_QWORD *)(v1 + 448) + 6LL) &= ~0x20u;
    result = *(_QWORD *)(v1 + 448);
    *(_WORD *)(result + 4) &= ~0x20u;
  }
  return result;
}
