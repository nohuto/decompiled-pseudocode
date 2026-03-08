/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800CA25C
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x18008BD94 (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800C9168 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C9844 (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012A09C (McTemplateU0xq_EventWriteTransfer.c)
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1801D84B4 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  CDirectFlipInfo *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 1396);
  if ( v2 )
  {
    v3 = 1;
    if ( *(_DWORD *)(v2 + 52) != 1 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v2 + 16) + 408LL))(*(_QWORD *)(v2 + 16), 1LL, 0LL);
    v4 = (CDirectFlipInfo *)*((_QWORD *)this + 1396);
    if ( v4 )
      CDirectFlipInfo::`scalar deleting destructor'(v4, v3);
    *((_QWORD *)this + 1396) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v5 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)this
                                                     + 8LL
                                                     + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 12LL));
      v6 = (**v5)(v5, v8);
      McTemplateU0xq_EventWriteTransfer(v7, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *(unsigned int *)(v6 + 8), 0LL);
    }
  }
}
