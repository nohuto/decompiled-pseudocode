/*
 * XREFs of ?GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV?$shared_ptr@VCRegion@@@std@@PEAPEAVIDeviceTarget@@@Z @ 0x1802AEAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801F36EC (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AE848 (-EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AEDC0 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTarget(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rbx
  CDxHandleAdvancedDirectFlipBitmapRealization *v4; // rbp
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  v3 = 0LL;
  v4 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 400);
  if ( a2
    && (std::shared_ptr<CCursorState::ShapeData>::operator=((__int64 *)(a1 + 24), a2),
        v7 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveOffOverdraw(v4),
        v9 = v7,
        v7 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xA2u, 0LL);
  }
  else
  {
    v10 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRenderTarget(v4);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xA5u, 0LL);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 16);
      if ( v12 )
        v3 = *(int *)(*(_QWORD *)(v12 + 8) + 24LL) + v12 + 8;
      *a3 = v3;
      v13 = v3 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return v9;
}
