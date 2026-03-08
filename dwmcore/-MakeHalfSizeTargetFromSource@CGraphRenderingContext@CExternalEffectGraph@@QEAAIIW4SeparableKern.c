/*
 * XREFs of ?MakeHalfSizeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIW4SeparableKernelPass@@@Z @ 0x180033628
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6dafb9ec696576b7ca181ab96f810b3b__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800F7B60 (std--_Func_impl_no_alloc__lambda_6dafb9ec696576b7ca181ab96f810b3b__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18003584C (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

unsigned int __fastcall CExternalEffectGraph::CGraphRenderingContext::MakeHalfSizeTargetFromSource(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int128 *v3; // r8
  __int128 *v4; // rdx
  CExternalEffectGraph::CGraphRenderingContext *v5; // rax
  unsigned int v6; // r9d
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int128 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  float v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]

  v14 = 0;
  LODWORD(v11) = 0;
  if ( a3 == 1 )
  {
    v3 = &v10;
    v13 = 0.0;
    v4 = &v12;
    v12 = _xmm;
    *((float *)&v11 + 1) = FLOAT_0_25;
    v10 = *(_OWORD *)&_xmm;
  }
  else
  {
    v3 = &v12;
    HIDWORD(v11) = 0;
    v4 = &v10;
    v10 = _xmm;
    v13 = FLOAT_0_25;
    v12 = *(_OWORD *)&_xmm;
  }
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v8,
    (const struct D2D1::Matrix3x2F *)v4,
    (const struct D2D1::Matrix3x2F *)v3);
  v10 = v8;
  v11 = v9;
  return CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
           v5,
           v6,
           (const struct D2D1::Matrix3x2F *)&v10);
}
