/*
 * XREFs of UmfdDrvFreeInternal @ 0x1C02DE200
 * Callers:
 *     UmfdQueryFont @ 0x1C00FDB70 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C00FDC20 (UmfdQueryFontTree.c)
 *     UmfdDrvFree @ 0x1C01220D0 (UmfdDrvFree.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C009A580 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00FDCD4 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdDrvFreeInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD v7[9]; // [rsp+20h] [rbp-48h] BYREF

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v7, 9);
  v7[5] = a1;
  v7[0] = &FreeRequest::`vftable';
  v7[6] = a2;
  return UmfdClientSendAndWaitForCompletion(a3, (__int64)v7);
}
