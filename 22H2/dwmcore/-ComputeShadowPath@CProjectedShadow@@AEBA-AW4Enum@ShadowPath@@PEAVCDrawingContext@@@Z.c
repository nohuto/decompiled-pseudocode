/*
 * XREFs of ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x18000C700
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180009560 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x180006258 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x18000C7C8 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x18000C824 (-CanUseFastShadow@CProjectedShadow@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::ComputeShadowPath(__int64 a1, __int64 a2)
{
  int v4; // ebx
  float v6; // xmm1_4
  __int64 v7; // rcx
  double BlurForBoundary; // xmm0_8
  __int64 v9; // rax
  __int64 v10; // rcx
  double v11; // xmm0_8
  double v12; // xmm0_8

  v4 = 0;
  if ( CProjectedShadow::CanUseFastShadow((CProjectedShadow *)a1) )
    return 1LL;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 64) + 88LL) + 232LL))(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 88LL)) != 1
    || !CProjectedShadow::IsShadowAxisAlignedRectToReceiver((CProjectedShadow *)a1) )
  {
    return 0LL;
  }
  v6 = *(float *)(a1 + 88);
  BlurForBoundary = CProjectedShadow::GetBlurForBoundary(a1, 3LL);
  if ( v6 >= *(float *)&BlurForBoundary )
    return 5LL;
  v9 = *(_QWORD *)(a2 + 40);
  if ( *(int *)(v9 + 624) < 37632 || *(_BYTE *)(v9 + 1433) )
    return 0LL;
  v11 = CProjectedShadow::GetBlurForBoundary(v7, 2LL);
  if ( v6 >= *(float *)&v11 )
    return 4LL;
  v12 = CProjectedShadow::GetBlurForBoundary(v10, 1LL);
  LOBYTE(v4) = v6 >= *(float *)&v12;
  return (unsigned int)(v4 + 2);
}
