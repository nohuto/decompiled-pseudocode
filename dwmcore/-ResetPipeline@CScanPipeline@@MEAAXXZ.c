/*
 * XREFs of ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x1802B8F30
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802B8F80 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CScanPipeline::ResetPipeline(CScanPipeline *this)
{
  *((_DWORD *)this + 8) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 8, 0x30u);
  *((_DWORD *)this + 140) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 536, 8u);
  *((_DWORD *)this + 154) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 592, 8u);
}
