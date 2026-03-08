/*
 * XREFs of ?GetPixelFormatInfo@CSecondarySysmemBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18010832C
 * Callers:
 *     ?GetPixelFormatInfo@CSecondarySysmemBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011FDB0 (-GetPixelFormatInfo@CSecondarySysmemBitmap@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 44);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 52);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
