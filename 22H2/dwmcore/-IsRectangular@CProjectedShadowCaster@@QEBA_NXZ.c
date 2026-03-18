/*
 * XREFs of ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x180219B74
 * Callers:
 *     ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x1801335A2 (-CanUseFastShadow@CProjectedShadow@@AEBA_NXZ.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x18024B2E8 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x180005BE4 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009460 (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CProjectedShadowCaster::IsRectangular(CProjectedShadowCaster *this)
{
  __int64 v1; // rdx
  CGeometry *v3; // rcx
  char result; // al
  struct CBrush *EffectiveMaskBrush; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 8);
  v3 = *(CGeometry **)(v1 + 248);
  if ( !v3
    || (v6 = 0LL, (result = CGeometry::TryGetAxisAlignedRectangle(v3, (const struct D2D_SIZE_F *)(v1 + 140), &v6)) != 0) )
  {
    EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this);
    return (*(__int64 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)EffectiveMaskBrush + 56LL))(
             EffectiveMaskBrush,
             22LL);
  }
  return result;
}
