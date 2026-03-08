/*
 * XREFs of ??1CDDisplaySwapChain@@MEAA@XZ @ 0x180285070
 * Callers:
 *     ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x180285544 (--_GCDDisplaySwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x1800C6BD4 (-AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EF9A8 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FF340 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@QEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180284A6C (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180284AF4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@.c)
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180284B38 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180284D7C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$defau.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x1802853FC (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x180285484 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 */

void __fastcall CDDisplaySwapChain::~CDDisplaySwapChain(CDDisplaySwapChain *this)
{
  unsigned __int64 v2; // r8
  char *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *i; // rcx
  CD3DDevice *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  void *v12; // rdx
  wil::details *v13; // rcx
  void ***v14; // rcx
  DDisplayPrimaryBufferResources *v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rcx

  v2 = (unsigned __int64)this + 224;
  v3 = (char *)this + 216;
  *(_QWORD *)this = &CDDisplaySwapChain::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 2) = &CDDisplaySwapChain::`vftable'{for `CMILCOMBaseWeakRef'};
  *((_QWORD *)this + 5) = &CDDisplaySwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 27) = &CDDisplaySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 28) = &CDDisplaySwapChain::`vftable'{for `IDDisplayEventListener'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CDDisplaySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CDDisplaySwapChain::`vftable'{for `IDeviceResource'};
  v4 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 536;
  v5 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v5 + 4) = v5 - 552;
  v6 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v6 + 4) = v6 - 576;
  for ( i = (_QWORD *)*((_QWORD *)&xmmword_1803E32C0 + 1);
        i != (_QWORD *)xmmword_1803E32D0 && *i != (v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
        ++i )
  {
    ;
  }
  memmove_0(i, i + 1, xmmword_1803E32D0 - (_QWORD)(i + 1));
  *(_QWORD *)&xmmword_1803E32D0 = xmmword_1803E32D0 - 8;
  v8 = (CD3DDevice *)*((_QWORD *)this + 10);
  if ( v8 )
    CD3DDevice::AdvanceUnpin(v8, *(struct _LUID *)((char *)this + 88), *((unsigned int *)this + 98), 1u);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 104LL))(
    *((_QWORD *)this + 43),
    *((unsigned int *)this + 98));
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(*((__int64 **)this + 29), *((__int64 **)this + 30));
  *((_QWORD *)this + 30) = *((_QWORD *)this + 29);
  std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Free_non_head<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
    v9,
    *((_QWORD ***)this + 32));
  **((_QWORD **)this + 32) = *((_QWORD *)this + 32);
  *(_QWORD *)(*((_QWORD *)this + 32) + 8LL) = *((_QWORD *)this + 32);
  *((_QWORD *)this + 33) = 0LL;
  v10 = *((_QWORD *)this + 16);
  if ( v10 )
  {
    v11 = v10 + 8 + *(int *)(*(_QWORD *)(v10 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 48LL))(v11, v3);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 66);
  std::vector<unsigned char>::_Tidy((__int64)this + 504);
  v13 = (wil::details *)*((_QWORD *)this + 60);
  if ( v13 )
    wil::details::CloseHandle(v13, v12);
  v14 = (void ***)*((_QWORD *)this + 57);
  if ( v14 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CRegion>>>(v14, *((void ****)this + 58));
    std::_Deallocate<16,0>(
      *((void **)this + 57),
      (*((_QWORD *)this + 59) - *((_QWORD *)this + 57)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
  }
  v15 = (DDisplayPrimaryBufferResources *)*((_QWORD *)this + 50);
  if ( v15 )
  {
    std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
      v15,
      *((DDisplayPrimaryBufferResources **)this + 51));
    std::_Deallocate<16,0>(
      *((void **)this + 50),
      (*((_QWORD *)this + 52) - *((_QWORD *)this + 50)) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
    *((_QWORD *)this + 52) = 0LL;
  }
  DDisplayTargetResources::~DDisplayTargetResources((CDDisplaySwapChain *)((char *)this + 312));
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((CDDisplaySwapChain *)((char *)this + 280));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 34);
  std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Free_non_head<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
    v16,
    *((_QWORD ***)this + 32));
  std::_Deallocate<16,0>(*((void **)this + 32), 0x18uLL);
  v17 = (__int64 *)*((_QWORD *)this + 29);
  if ( v17 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(v17, *((__int64 **)this + 30));
    std::_Deallocate<16,0>(*((void **)this + 29), 8 * ((__int64)(*((_QWORD *)this + 31) - *((_QWORD *)this + 29)) >> 3));
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
  }
  COverlaySwapChainBase::~COverlaySwapChainBase(this);
}
