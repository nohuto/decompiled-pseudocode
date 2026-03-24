/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00FE024
 * Callers:
 *     UmfdDestroyFont @ 0x1C009CF20 (UmfdDestroyFont.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C009F528 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1C00FDCF0 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C00FDE30 (UmfdQueryFontFile.c)
 *     UmfdQueryFont @ 0x1C00FDEC0 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C00FDF70 (UmfdQueryFontTree.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00FE0F8 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0150B00 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02DEE40 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02DEEA0 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02DEF50 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02DF010 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02DF090 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
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
