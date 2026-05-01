/*
 * XREFs of __tailMerge_gdi32_dll @ 0x1800940BE
 * Callers:
 *     __imp_load_GetStockObject @ 0x1800940B2 (__imp_load_GetStockObject.c)
 *     __imp_load_CreateCompatibleBitmap @ 0x18009413D (__imp_load_CreateCompatibleBitmap.c)
 *     __imp_load_DeleteObject @ 0x180094150 (__imp_load_DeleteObject.c)
 *     __imp_load_CombineRgn @ 0x180094162 (__imp_load_CombineRgn.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x180094174 (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_GetObjectW @ 0x180094186 (__imp_load_GetObjectW.c)
 *     __imp_load_CreateDIBSection @ 0x180094198 (__imp_load_CreateDIBSection.c)
 *     __imp_load_CreateCompatibleDC @ 0x1800941AA (__imp_load_CreateCompatibleDC.c)
 *     __imp_load_SelectObject @ 0x1800941BC (__imp_load_SelectObject.c)
 *     __imp_load_DeleteDC @ 0x1800941CE (__imp_load_DeleteDC.c)
 *     __imp_load_GetDIBits @ 0x1800941E0 (__imp_load_GetDIBits.c)
 *     __imp_load_SetDIBits @ 0x1800941F2 (__imp_load_SetDIBits.c)
 *     __imp_load_StretchDIBits @ 0x180094204 (__imp_load_StretchDIBits.c)
 *     __imp_load_GdiAlphaBlend @ 0x180094216 (__imp_load_GdiAlphaBlend.c)
 *     __imp_load_SetBkColor @ 0x180094228 (__imp_load_SetBkColor.c)
 *     __imp_load_BitBlt @ 0x18009423A (__imp_load_BitBlt.c)
 *     __imp_load_GetDeviceCaps @ 0x18009424C (__imp_load_GetDeviceCaps.c)
 *     __imp_load_SetStretchBltMode @ 0x18009525D (__imp_load_SetStretchBltMode.c)
 *     __imp_load_SetBkMode @ 0x18009526F (__imp_load_SetBkMode.c)
 *     __imp_load_StretchBlt @ 0x180095281 (__imp_load_StretchBlt.c)
 *     __imp_load_CreateSolidBrush @ 0x180095293 (__imp_load_CreateSolidBrush.c)
 *     __imp_load_GetCurrentObject @ 0x1800952A5 (__imp_load_GetCurrentObject.c)
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
