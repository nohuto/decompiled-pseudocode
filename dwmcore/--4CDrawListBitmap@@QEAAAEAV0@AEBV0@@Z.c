/*
 * XREFs of ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800942A0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18002E744 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18009280C (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x180094040 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801F7758 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x1801FC9E0 (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall CDrawListBitmap::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = *a1;
  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
  {
    v6 = *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + v4 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  if ( v2 )
  {
    v11 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v7 = a2[1];
  v8 = a1[1];
  a1[1] = v7;
  if ( v7 )
  {
    v9 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  if ( v8 )
  {
    v12 = v8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  return a1;
}
