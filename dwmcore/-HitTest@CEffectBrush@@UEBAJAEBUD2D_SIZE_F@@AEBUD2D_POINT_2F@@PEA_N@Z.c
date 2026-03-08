/*
 * XREFs of ?HitTest@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18012E634
 * Callers:
 *     ?HitTest@CEffectBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180119DB0 (-HitTest@CEffectBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800F6154 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::HitTest(
        CEffectBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  struct D2D_RECT_F v10; // [rsp+20h] [rbp-18h] BYREF

  *a4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 25) + 192LL))((char *)this - 200) )
  {
    width = a2->width;
    v10.left = 0.0;
    v10.top = 0.0;
    height = a2->height;
    v10.right = width;
    v10.bottom = height;
    *a4 = Contains(&v10, a3);
  }
  return 0LL;
}
