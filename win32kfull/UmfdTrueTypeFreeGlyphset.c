/*
 * XREFs of UmfdTrueTypeFreeGlyphset @ 0x1C0125098
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0122194 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C011E760 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C012511C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall UmfdTrueTypeFreeGlyphset(__int64 a1, int a2, void *a3)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+50h] [rbp-18h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v6, 15);
  v6[5] = a1;
  v6[0] = &TrueTypeFreeGlyphsetRequest::`vftable';
  v7 = a2;
  UmfdClientSendAndWaitForCompletion(0LL, (__int64)v6);
  UmfdAllocation::ReleaseKernelmodeAllocation(a3);
}
