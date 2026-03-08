/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C011E760
 * Callers:
 *     UmfdDestroyFont @ 0x1C00EB960 (UmfdDestroyFont.c)
 *     UmfdLoadFontFile @ 0x1C011D7E0 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C011D990 (UmfdQueryFontFile.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C011E69C (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdQueryTrueTypeTable @ 0x1C01204D0 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryAdvanceWidths @ 0x1C0121100 (UmfdQueryAdvanceWidths.c)
 *     UmfdUnloadFontFileInternal @ 0x1C0121FD8 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryFontTree @ 0x1C0122480 (UmfdQueryFontTree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0125098 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdDrvFreeInternal @ 0x1C0307E40 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C0307EA0 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C0307F50 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C0308010 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C0308090 (UmfdQueryGlyphAttrs.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0308130 (UmfdQueryTrueTypeOutline.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
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
