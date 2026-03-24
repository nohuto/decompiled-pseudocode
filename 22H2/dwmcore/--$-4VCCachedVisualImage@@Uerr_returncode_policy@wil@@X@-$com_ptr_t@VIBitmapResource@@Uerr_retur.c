/*
 * XREFs of ??$?4VCCachedVisualImage@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801EDFF8
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800565B0 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=<CCachedVisualImage,wil::err_returncode_policy,void>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = *a2;
  v3 = 0LL;
  if ( v2 )
    v3 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56;
  return wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(a1, v3);
}
