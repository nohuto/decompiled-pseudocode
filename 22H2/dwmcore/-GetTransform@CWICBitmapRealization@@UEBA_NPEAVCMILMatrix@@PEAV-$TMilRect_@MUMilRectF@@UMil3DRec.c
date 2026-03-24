/*
 * XREFs of ?GetTransform@CWICBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2E80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CWICBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800D2F10 (-GetSize@CWICBitmapRealization@@UEBA-AUD2D_SIZE_U@@XZ.c)
 */

char __fastcall CWICBitmapRealization::GetTransform(CWICBitmapRealization *a1, __int64 a2, __int64 a3)
{
  int v5; // [rsp+38h] [rbp+10h]
  int v6; // [rsp+3Ch] [rbp+14h]

  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_WORD *)(a2 + 64) = 32085;
  if ( a3 )
  {
    CWICBitmapRealization::GetSize(a1);
    *(_QWORD *)a3 = 0LL;
    *(float *)(a3 + 8) = (float)v5;
    *(float *)(a3 + 12) = (float)v6;
  }
  return 0;
}
