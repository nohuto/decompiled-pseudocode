/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18006B1A0
 * Callers:
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800137D0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18006A344 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18006AFA0 (-IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEB.c)
 *     ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1801E3BB0 (-IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_S.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800680DC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18006A410 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18006AD5C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007AA60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18008D110 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800BA28C (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800C1EDC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C876C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C8D60 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?IsCloseRealMatrixEpsilon@@YA_NMM@Z @ 0x1800EF770 (-IsCloseRealMatrixEpsilon@@YA_NMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  int v7; // edi
  CVisual *v8; // rdi
  struct _LIST_ENTRY *v9; // rsi
  struct _LIST_ENTRY *v10; // r15
  struct _LIST_ENTRY *v11; // r12
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CVisual *v15; // rsi
  struct _LIST_ENTRY *v16; // rdi
  struct _LIST_ENTRY *v17; // r15
  struct _LIST_ENTRY *v18; // rax
  struct _LIST_ENTRY *v19; // rcx
  int v20; // eax
  int v21; // esi
  struct _LIST_ENTRY *Blink; // r12
  int v23; // r9d
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r10
  unsigned int v27; // edi
  __int64 v28; // r15
  CShape **v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  int v36; // xmm1_4
  int v37; // xmm0_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  const struct D2D_MATRIX_3X2_F *v41; // r8
  _QWORD v42[2]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v43; // [rsp+40h] [rbp-51h] BYREF
  char v44; // [rsp+48h] [rbp-49h]
  char v45; // [rsp+50h] [rbp-41h]
  int v46; // [rsp+70h] [rbp-21h]
  __int128 v47; // [rsp+80h] [rbp-11h] BYREF
  _DWORD v48[6]; // [rsp+90h] [rbp-1h] BYREF

  if ( !*((_QWORD *)a2 + 3) )
    return 1;
  v7 = *((_DWORD *)a2 + 22);
  if ( (v7 & 6) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1129LL) != ((*((_DWORD *)a2 + 22) & 4) != 0) )
    return 1;
  if ( *((_DWORD *)a2 + 24) != (*((_DWORD *)a3 + 69) != 0) )
    return 1;
  if ( (v7 & 0x60) != 0 )
  {
    v46 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 408), (struct CMILMatrix *)v42);
    v7 = *((_DWORD *)a2 + 22);
    if ( (v7 & 0x20) != 0 && !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v42) )
      return 1;
    if ( (v7 & 0x40) != 0 )
    {
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v42, (float *)&v47, (float *)&v47 + 1);
      if ( !IsCloseRealMatrixEpsilon(*(float *)&v47, *((float *)a2 + 14))
        || !IsCloseRealMatrixEpsilon(*((float *)&v47 + 1), *((float *)a2 + 15)) )
      {
        return 1;
      }
    }
  }
  if ( *((_DWORD *)a2 + 4) == 2
    && (*((_DWORD *)a3 + 70) == 4
     || (v7 & 0x200) != 0 && (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a3 + 68)) == 3) )
  {
    return 1;
  }
  if ( (*((_BYTE *)a2 + 92) & 0x10) == 0 )
    return 0;
  v8 = 0LL;
  if ( *((_BYTE *)a3 + 5920) )
  {
    if ( *((_BYTE *)a3 + 5921) )
      v8 = (CVisual *)*((_QWORD *)a3 + 413);
    else
      v8 = *(CVisual **)(*((_QWORD *)a3 + 741) + 56LL);
  }
  v9 = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 741);
  v10 = 0LL;
  v11 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *))v9->Flink[12].Blink)(
         v9,
         a2,
         a3,
         a4) )
  {
    v10 = (struct _LIST_ENTRY *)((char *)v8 + 320);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v8);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != v9 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_28;
        }
        v10 = Flink - 18;
      }
    }
  }
LABEL_28:
  if ( v11 >= v10[16].Blink )
  {
    if ( !*((_BYTE *)a2 + 101) )
      return 0;
  }
  else if ( *((_BYTE *)a2 + 100) )
  {
    return 1;
  }
  if ( !*(_BYTE *)(84LL * (unsigned int)(*((_DWORD *)a3 + 240) - 1) + *((_QWORD *)a3 + 117) + 80) )
    return 0;
  v15 = 0LL;
  if ( *((_BYTE *)a3 + 5920) )
  {
    if ( *((_BYTE *)a3 + 5921) )
      v15 = (CVisual *)*((_QWORD *)a3 + 413);
    else
      v15 = *(CVisual **)(*((_QWORD *)a3 + 741) + 56LL);
  }
  v16 = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 741);
  v17 = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v16->Flink[12].Blink)(v16) )
  {
    v17 = (struct _LIST_ENTRY *)((char *)v15 + 320);
  }
  else
  {
    v18 = CVisual::GetTreeDataListHead(v15);
    if ( v18 )
    {
      v19 = v18->Flink;
      if ( v18->Flink != v18 )
      {
        while ( v19[2].Flink != v16 )
        {
          v19 = v19->Flink;
          if ( v19 == v18 )
            goto LABEL_45;
        }
        v17 = v19 - 18;
      }
    }
  }
LABEL_45:
  v20 = *((_DWORD *)a3 + 240);
  v21 = 0;
  Blink = v17[13].Blink;
  if ( !v20 || (v23 = *(_DWORD *)(84LL * (unsigned int)(v20 - 1) + *((_QWORD *)a3 + 117) + 4)) == 0 )
  {
    v33 = 0LL;
    goto LABEL_62;
  }
  v24 = *((_QWORD *)a3 + 226);
  v25 = v24;
  if ( *(_QWORD *)(136LL * (unsigned int)(*((_DWORD *)a3 + 458) - 1) + v24 + 88)
    || (v26 = 0LL, v27 = *((_DWORD *)a3 + 458) - v23, v27 >= *((_DWORD *)a3 + 458)) )
  {
LABEL_56:
    v32 = 136LL * (unsigned int)(*((_DWORD *)a3 + 458) - 1);
    v33 = *(_QWORD *)(v32 + v25 + 88);
    goto LABEL_57;
  }
  while ( 1 )
  {
    v28 = 136LL * v27;
    v29 = (CShape **)(v28 + v24);
    if ( *(_QWORD *)(v28 + v24 + 88) )
      goto LABEL_55;
    if ( v26 )
      break;
    v30 = CShapePtr::CopyShape(v29, (const struct CMILMatrix *)(v29 + 2), (struct CShape **)(v28 + v24 + 88));
    v21 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xC4u, 0LL);
      goto LABEL_53;
    }
LABEL_55:
    v25 = *((_QWORD *)a3 + 226);
    ++v27;
    v24 = v25;
    v26 = *(_QWORD *)(v25 + v28 + 88);
    if ( v27 >= *((_DWORD *)a3 + 458) )
      goto LABEL_56;
  }
  v34 = CShape::Combine(v26, v25, (__int64)*v29, (__int64)(v29 + 2), 1, (_QWORD *)(v28 + v24 + 88));
  v21 = v34;
  if ( v34 >= 0 )
    goto LABEL_55;
  MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xCEu, 0LL);
LABEL_53:
  v33 = v47;
LABEL_57:
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v21, 0x220u, 0LL);
    return 0;
  }
LABEL_62:
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  v42[0] = v33;
  v42[1] = Blink;
  if ( v33 )
  {
    if ( a5 )
    {
      v36 = *((_DWORD *)a5 + 1);
      v48[0] = *(_DWORD *)a5;
      v37 = *((_DWORD *)a5 + 4);
      v48[1] = v36;
      v38 = *((_DWORD *)a5 + 5);
      v48[2] = v37;
      v39 = *((_DWORD *)a5 + 12);
      v48[3] = v38;
      v40 = *((_DWORD *)a5 + 13);
      v48[4] = v39;
      v48[5] = v40;
    }
    v41 = (const struct D2D_MATRIX_3X2_F *)v48;
    if ( !a5 )
      v41 = 0LL;
    v47 = *(_OWORD *)((char *)a2 + 40);
    if ( !CCpuClip::FullyContains((__int64)v42, (__int64)&v47, v41) )
    {
      CShapePtr::Release((CShapePtr *)&v43);
      return 1;
    }
  }
  return 0;
}
