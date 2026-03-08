/*
 * XREFs of ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000A320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x18004C2C4 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004C4D4 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800DFF64 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801306F8 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

char __fastcall CCompositionSpotLight::IsValid(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  CVisual *v4; // rax
  CVisual *v5; // rdi
  CVisual *v6; // rcx
  CVisual *v7; // rdx
  char v8; // bl
  struct CTreeData *TreeData; // rax
  unsigned int v10; // ecx
  CTreeData *v11; // rsi
  const struct Windows::Foundation::Numerics::float4x4 *v12; // rdx
  float v13; // xmm0_4
  _BYTE v15[64]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+70h] [rbp-18h]
  bool v17; // [rsp+90h] [rbp+8h] BYREF

  v4 = (CVisual *)(*(__int64 (__fastcall **)(CCompositionSpotLight *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)this + 200LL))(
                    this,
                    a2,
                    a3);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4;
    v7 = v4;
    v8 = 1;
    while ( (*((_BYTE *)v6 + 103) & 1) != 0 && (*((_BYTE *)v6 + 102) & 2) == 0 )
    {
      if ( v6 == *((CVisual **)a2 + 8) )
      {
        v16 = 0;
        TreeData = CVisual::FindTreeData(v4, a2);
        v11 = TreeData;
        if ( !TreeData )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003292412, 0x6ADu, 0LL);
          return 0;
        }
        v17 = 0;
        CVisual::EnsureWorldTransform(v5, a2, TreeData);
        CTreeData::GetWorldTransform(v11, (struct CMILMatrix *)v15, &v17, 0LL);
        v13 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v15, v12);
        if ( !CMILMatrix::IsInvertibleDeterminant(v13) )
          return 0;
        return v8;
      }
      if ( !v7
        || (v7 = (CVisual *)*((_QWORD *)v7 + 11)) == 0LL
        || v6 != v7 && (v7 = (CVisual *)*((_QWORD *)v7 + 11), v6 != v7) )
      {
        v6 = (CVisual *)*((_QWORD *)v6 + 11);
        if ( v6 )
          continue;
      }
      return 0;
    }
  }
  return 0;
}
