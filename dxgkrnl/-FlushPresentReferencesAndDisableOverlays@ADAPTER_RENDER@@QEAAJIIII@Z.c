/*
 * XREFs of ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0176558
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0166EB8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01732D0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01738D4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C7400 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0040104 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0176614 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        ADAPTER_RENDER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  _QWORD *v5; // rbx
  int v6; // eax
  unsigned int v8; // r14d
  ADAPTER_DISPLAY *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]

  v5 = (_QWORD *)((char *)this + 16);
  v6 = *((_DWORD *)this + 189);
  v8 = a3;
  if ( (v6 & a5) != 0 )
    WdLogSingleEntry5(0LL, 275LL, 39LL, *v5, a5 & v6, 0LL);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v14) = v8;
    LODWORD(v13) = a2;
    McTemplateK0pqtqq_EtwWriteTransfer(
      (__int64)this,
      &FlushPresentReferencesAndDisableOverlays,
      a3,
      *v5,
      v13,
      v14,
      a4,
      a5);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL)
                                                                       + 992LL))(
    *((_QWORD *)this + 93),
    a2,
    v8,
    a4,
    a5);
  *((_DWORD *)this + 189) |= a5;
  if ( a4 )
  {
    v12 = *(ADAPTER_DISPLAY **)(*v5 + 2920LL);
    if ( v12 )
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(v12, a4);
  }
  return 0LL;
}
