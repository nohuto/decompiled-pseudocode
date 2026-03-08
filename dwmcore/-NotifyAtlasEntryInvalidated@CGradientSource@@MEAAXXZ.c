/*
 * XREFs of ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ @ 0x18024A23C
 * Callers:
 *     ?NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXXZ @ 0x18024A190 (-NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CGradientSource::NotifyAtlasEntryInvalidated(CGradientSource *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 16);
  if ( *v1 )
  {
    *(_QWORD *)(*v1 + 48) = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v1);
  }
}
