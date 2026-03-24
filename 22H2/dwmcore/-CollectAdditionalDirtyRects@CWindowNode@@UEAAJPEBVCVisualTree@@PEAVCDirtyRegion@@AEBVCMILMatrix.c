/*
 * XREFs of ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A0470
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A04E0 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C876C (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B1E44 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRects(
        __int64 a1,
        CDesktopTree *a2,
        __int64 a3,
        const struct CMILMatrix *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct CShape *v16; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-10h]

  v7 = CVisual::CollectAdditionalDirtyRects(a1, a2);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x163u, 0LL);
  }
  else if ( *(_BYTE *)(a1 + 914)
         && !*(_BYTE *)(a1 + 915)
         && *(_QWORD *)(a1 + 720)
         && (*(unsigned __int8 (__fastcall **)(CDesktopTree *))(*(_QWORD *)a2 + 200LL))(a2) )
  {
    v12 = *(_QWORD *)(a1 + 720);
    v16 = 0LL;
    LOBYTE(v11) = 1;
    v17 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, struct CShape **, __int64))(*(_QWORD *)v12 + 32LL))(v12, &v16, v11);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x16Fu, 0LL);
    }
    else if ( v16 )
    {
      v15 = *(_QWORD *)(a1 + 720);
      if ( v15 )
        v15 += *(int *)(*(_QWORD *)(v15 + 8) + 8LL) + 8LL;
      if ( CDesktopTree::AddNewComposeTopContent(a2, (struct IBitmapResource *)v15, v16, a4) >= 0 )
        *(_BYTE *)(a1 + 915) = 1;
    }
    CShapePtr::Release((CShapePtr *)&v16);
  }
  return v9;
}
