/*
 * XREFs of ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800F427C
 * Callers:
 *     ?GetSize@CAtlasBitmapResource@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800F4250 (-GetSize@CAtlasBitmapResource@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetTransform@CAtlasBitmapResource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180267990 (-GetTransform@CAtlasBitmapResource@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CAtlasTexture::GetSize(CAtlasTexture *this, __int64 a2)
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = (void (__fastcall ***)(_QWORD))(*((_QWORD *)this + 1)
                                     + 8LL
                                     + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 16LL));
  (**v3)(v3);
  return (struct D2D_SIZE_U)a2;
}
