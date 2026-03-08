/*
 * XREFs of ?GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18024F270
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18007FE50 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupRenderStrategy::GetTextureMemoryLayoutData(
        __int64 a1,
        CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        __int64 *a4)
{
  __int64 v4; // rax
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  void *v15; // r8
  int v16; // r9d
  __int64 v17; // xmm1_8
  __int64 v18; // r8
  void *v19; // rax
  __int64 v20; // rcx
  __int128 v22; // [rsp+30h] [rbp-29h] BYREF
  __int64 v23; // [rsp+40h] [rbp-19h]
  __int128 v24; // [rsp+48h] [rbp-11h] BYREF
  __int64 v25; // [rsp+58h] [rbp-1h]
  _BYTE v26[40]; // [rsp+60h] [rbp+7h] BYREF

  v4 = *a4;
  v23 = 0LL;
  a4[1] = v4;
  v7 = *((_QWORD *)a2 + 13);
  v22 = 0LL;
  v8 = CSurfaceBrush::ComputeLayout(a2, a3, (struct CContent::LayoutData *)v26, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x59Fu, 0LL);
    goto LABEL_10;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)v7 + 272LL))(
          v7,
          a3,
          &v22);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x5A0u, 0LL);
LABEL_10:
    v15 = (void *)v22;
    goto LABEL_11;
  }
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *((_QWORD *)&v22 + 1);
    v15 = (void *)v22;
    if ( (unsigned int)v13 >= 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)&v22 + 1) - v22) >> 3) )
      break;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v24,
      (const struct D2D1::Matrix3x2F *)v26,
      (const struct D2D1::Matrix3x2F *)(v22 + 40 * v13));
    v13 = (unsigned int)(v16 + 1);
    v17 = v25;
    *(_OWORD *)v18 = v24;
    *(_QWORD *)(v18 + 16) = v17;
  }
  if ( a4 != (__int64 *)&v22 )
  {
    v20 = a4[2];
    *(_QWORD *)&v22 = *a4;
    v19 = (void *)v22;
    *a4 = (__int64)v15;
    v15 = v19;
    *((_QWORD *)&v22 + 1) = a4[1];
    a4[2] = v23;
    a4[1] = v14;
    v23 = v20;
  }
LABEL_11:
  if ( v15 )
    std::_Deallocate<16,0>(v15, 8 * ((v23 - (__int64)v15) >> 3));
  return v10;
}
