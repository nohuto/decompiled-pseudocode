/*
 * XREFs of ?EndDraw@CD2DContext@@AEAAJXZ @ 0x1800906C4
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008D178 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x180284470 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x18010033C (-Optimize@-$ShrinkableArray@PEAVCBatchCommand@@U-$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCDrawListEntryBatch@@U?$RefCountLifetime@PEAVCDrawListEntryBatch@@@@@@QEAAXXZ @ 0x180101C18 (-Optimize@-$ShrinkableArray@PEAVCDrawListEntryBatch@@U-$RefCountLifetime@PEAVCDrawListEntryBatch.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CD2DContext::EndDraw(CD2DContext *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // esi
  __int64 v6; // rax

  if ( *((_BYTE *)this + 437) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        17LL,
        0LL);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 25) + 392LL))(
           *((_QWORD *)this + 25),
           0LL,
           0LL);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x6FAu, 0LL);
    *(_WORD *)((char *)this + 437) = 0;
    if ( !*((_DWORD *)this + 41) )
    {
      *((_DWORD *)this + 41) = 512;
      ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize((char *)this + 8);
      ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize((char *)this + 48);
      ShrinkableArray<CDrawListEntryBatch *,RefCountLifetime<CDrawListEntryBatch *>>::Optimize((char *)this + 88);
    }
    --*((_DWORD *)this + 41);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        17LL,
        0LL);
  }
  else
  {
    v6 = (__int64)this + 1072;
    if ( !this )
      v6 = 1088LL;
    v4 = *(_DWORD *)v6;
    if ( *(int *)v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x440u, 0LL, 0, v4, 0x707u, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v4, 0);
}
