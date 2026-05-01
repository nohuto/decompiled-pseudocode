/*
 * XREFs of __tailMerge_gdi32_dll @ 0x18009409E
 * Callers:
 *     __imp_load_GetStockObject @ 0x180094092 (__imp_load_GetStockObject.c)
 *     __imp_load_CreateCompatibleBitmap @ 0x18009411D (__imp_load_CreateCompatibleBitmap.c)
 *     __imp_load_DeleteObject @ 0x180094130 (__imp_load_DeleteObject.c)
 *     __imp_load_CombineRgn @ 0x180094142 (__imp_load_CombineRgn.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x180094154 (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_GetObjectW @ 0x180094166 (__imp_load_GetObjectW.c)
 *     __imp_load_CreateDIBSection @ 0x180094178 (__imp_load_CreateDIBSection.c)
 *     __imp_load_CreateCompatibleDC @ 0x18009418A (__imp_load_CreateCompatibleDC.c)
 *     __imp_load_SelectObject @ 0x18009419C (__imp_load_SelectObject.c)
 *     __imp_load_DeleteDC @ 0x1800941AE (__imp_load_DeleteDC.c)
 *     __imp_load_GetDIBits @ 0x1800941C0 (__imp_load_GetDIBits.c)
 *     __imp_load_SetDIBits @ 0x1800941D2 (__imp_load_SetDIBits.c)
 *     __imp_load_StretchDIBits @ 0x1800941E4 (__imp_load_StretchDIBits.c)
 *     __imp_load_GdiAlphaBlend @ 0x1800941F6 (__imp_load_GdiAlphaBlend.c)
 *     __imp_load_SetBkColor @ 0x180094208 (__imp_load_SetBkColor.c)
 *     __imp_load_BitBlt @ 0x18009421A (__imp_load_BitBlt.c)
 *     __imp_load_GetDeviceCaps @ 0x18009422C (__imp_load_GetDeviceCaps.c)
 *     __imp_load_SetStretchBltMode @ 0x18009523D (__imp_load_SetStretchBltMode.c)
 *     __imp_load_SetBkMode @ 0x18009524F (__imp_load_SetBkMode.c)
 *     __imp_load_StretchBlt @ 0x180095261 (__imp_load_StretchBlt.c)
 *     __imp_load_CreateSolidBrush @ 0x180095273 (__imp_load_CreateSolidBrush.c)
 *     __imp_load_GetCurrentObject @ 0x180095285 (__imp_load_GetCurrentObject.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008B610 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_gdi32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_GDI32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
