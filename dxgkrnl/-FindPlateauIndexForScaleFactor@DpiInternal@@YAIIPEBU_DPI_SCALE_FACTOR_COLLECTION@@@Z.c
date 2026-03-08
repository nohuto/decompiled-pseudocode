/*
 * XREFs of ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00019BC
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0001F78 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     DxgkUpdateGdiInfo @ 0x1C01695F0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::FindPlateauIndexForScaleFactor(
        DpiInternal *this,
        __int64 a2,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a2 + 8) != 1 )
  {
    do
    {
      if ( (unsigned int)this < *(_DWORD *)(*(_QWORD *)(a2 + 24) + 4 * result) )
        break;
      result = (unsigned int)(result + 1);
    }
    while ( (unsigned int)result < *(_DWORD *)(a2 + 8) - 1 );
  }
  return result;
}
