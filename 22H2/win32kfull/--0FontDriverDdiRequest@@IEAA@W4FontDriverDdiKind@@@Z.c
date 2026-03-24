/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00FDCD4
 * Callers:
 *     UmfdDestroyFont @ 0x1C009CE90 (UmfdDestroyFont.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C009F498 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1C00FD9A0 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C00FDAE0 (UmfdQueryFontFile.c)
 *     UmfdQueryFont @ 0x1C00FDB70 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C00FDC20 (UmfdQueryFontTree.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00FDDA8 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0150540 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02DE200 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02DE260 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02DE310 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02DE3D0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02DE450 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
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
