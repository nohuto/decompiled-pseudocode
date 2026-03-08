/*
 * XREFs of GreQueryFonts @ 0x1C027A760
 * Callers:
 *     NtGdiQueryFonts @ 0x1C02C6C20 (NtGdiQueryFonts.c)
 * Callees:
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C026D580 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall GreQueryFonts(struct _UNIVERSAL_FONT_ID *a1, unsigned int a2, union _LARGE_INTEGER *a3)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 20272LL);
  return PUBLIC_PFTOBJ::QueryFonts((PUBLIC_PFTOBJ *)v7, a1, a2, a3);
}
