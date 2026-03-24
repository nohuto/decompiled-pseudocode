/*
 * XREFs of ?GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV?$shared_ptr@VCRegion@@@std@@PEAPEAVIDeviceTarget@@@Z @ 0x180263AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180183ADC (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180263878 (-EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180263D24 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
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
  v4 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 368);
  if ( a2
    && (std::shared_ptr<ManipulationThreadTelemetryData>::operator=((_QWORD *)(a1 + 24), a2),
        v7 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveOffOverdraw(v4),
        v9 = v7,
        v7 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC4u, 0LL);
  }
  else
  {
    v10 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRenderTarget(v4);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC7u, 0LL);
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
