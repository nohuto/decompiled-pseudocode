/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C007EF30
 * Callers:
 *     UmfdQueryFontTree @ 0x1C007B900 (UmfdQueryFontTree.c)
 *     UmfdUnloadFontFileInternal @ 0x1C007C648 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryAdvanceWidths @ 0x1C007E0A0 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryTrueTypeTable @ 0x1C007EC10 (UmfdQueryTrueTypeTable.c)
 *     UmfdLoadFontFile @ 0x1C007ECF0 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C007EEA0 (UmfdQueryFontFile.c)
 *     UmfdDestroyFont @ 0x1C00B38B0 (UmfdDestroyFont.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00B87C4 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdDrvFreeInternal @ 0x1C0306060 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C03060C0 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C0306170 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C0306230 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C03062B0 (UmfdQueryGlyphAttrs.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0306350 (UmfdQueryTrueTypeOutline.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
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
