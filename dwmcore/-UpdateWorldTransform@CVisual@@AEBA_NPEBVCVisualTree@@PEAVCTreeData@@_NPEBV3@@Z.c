/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18008A44C
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B7F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004C4D4 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180089670 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x180031670 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800318E0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18019B490 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

char __fastcall CVisual::UpdateWorldTransform(
        CVisual *this,
        CVisual **a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  __int64 v8; // rax
  const struct CMILMatrix *v9; // rsi
  __int64 v10; // r8
  char v11; // si
  CComposition *v13; // rbx
  int ManipulationManager; // eax
  float v15[20]; // [rsp+30h] [rbp-61h] BYREF
  _BYTE v16[64]; // [rsp+80h] [rbp-11h] BYREF
  int v17; // [rsp+C0h] [rbp+2Fh]
  bool v18; // [rsp+108h] [rbp+77h] BYREF

  v8 = *((_QWORD *)this + 31);
  v15[16] = 0.0;
  v17 = 0;
  v9 = (const struct CMILMatrix *)(((unsigned __int64)a5 + 288) & -(__int64)(a5 != 0LL));
  CVisual::CalcTransform(
    this,
    a2,
    v9,
    &v18,
    (struct CMILMatrix *)v15,
    (struct CMILMatrix *)((unsigned __int64)v16 & -(__int64)(v8 != 0)));
  if ( a4 || !v9 )
    LOBYTE(v10) = 1;
  else
    LOBYTE(v10) = v18 && !CMILMatrix::IsEqualTo<0>((float *)v9, v15);
  v11 = (*(__int64 (__fastcall **)(struct CTreeData *, float *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
          a3,
          v15,
          v10,
          (unsigned __int64)v16 & -(__int64)(*((_QWORD *)this + 31) != 0LL));
  if ( v11 && CVisual::GetInteractionInternal(this) && (*((_BYTE *)this + 101) & 0x40) != 0 )
  {
    a5 = 0LL;
    v13 = (CComposition *)*((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
    ManipulationManager = CComposition::GetManipulationManager(v13, &a5);
    if ( ManipulationManager >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(a5, this, (const struct CMILMatrix *)v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
  }
  return v11;
}
