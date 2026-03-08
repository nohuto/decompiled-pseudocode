/*
 * XREFs of ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180227050
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18005B0A0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x180226ED8 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 */

char __fastcall CDropShadow::IsDrawListCacheDirty(
        CDropShadow *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  struct CVisual *v9; // rax
  unsigned __int64 v10; // rdx

  v9 = (struct CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 3) + 32LL))((char *)a3 + 24);
  v10 = *(_QWORD *)CDropShadow::GetEffectiveShadowIntermediates(this, v9);
  if ( v10 && v10 <= *((_QWORD *)a2 + 4) )
    return CContent::IsDrawListCacheDirty(this, (__int64)a2, a3, a4, a5);
  else
    return 1;
}
