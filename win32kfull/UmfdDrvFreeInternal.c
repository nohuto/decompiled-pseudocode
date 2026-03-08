/*
 * XREFs of UmfdDrvFreeInternal @ 0x1C0307E40
 * Callers:
 *     UmfdDrvFree @ 0x1C00E3D10 (UmfdDrvFree.c)
 *     UmfdQueryFont @ 0x1C011EB60 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C0122480 (UmfdQueryFontTree.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C011E760 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
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
