/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C001B9B8
 * Callers:
 *     UmfdTrueTypeFreeGlyphset @ 0x1C000B5EC (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdDestroyFont @ 0x1C0018410 (UmfdDestroyFont.c)
 *     UmfdQueryTrueTypeTable @ 0x1C0018730 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C001B8F4 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdLoadFontFile @ 0x1C00E9FA0 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00EA118 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryFont @ 0x1C0105750 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C0106F80 (UmfdQueryFontTree.c)
 *     UmfdQueryFontFile @ 0x1C0109C60 (UmfdQueryFontFile.c)
 *     UmfdDrvFreeInternal @ 0x1C010AD68 (UmfdDrvFreeInternal.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C013ED90 (UmfdQueryTrueTypeOutline.c)
 *     UmfdEscape @ 0x1C02DBCB0 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02DBD60 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02DBE20 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02DBEA0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall FontDriverDdiRequest::FontDriverDdiRequest(__int64 a1, int a2)
{
  __int128 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &FontDriverDdiRequest::`vftable';
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_BYTE *)(a1 + 32) = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    *(_QWORD *)(a1 + 24) = ThreadInformation;
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}
