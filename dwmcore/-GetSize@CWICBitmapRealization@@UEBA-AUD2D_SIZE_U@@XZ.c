/*
 * XREFs of ?GetSize@CWICBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800F6EC0
 * Callers:
 *     ?GetTransform@CWICBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F8210 (-GetTransform@CWICBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CWICBitmapRealization::GetSize(CWICBitmapRealization *this, _DWORD *a2)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this - 7);
  if ( v2 )
  {
    (**v2)(v2);
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
  }
  return (struct D2D_SIZE_U)a2;
}
