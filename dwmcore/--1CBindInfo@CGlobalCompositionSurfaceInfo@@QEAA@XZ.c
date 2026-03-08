/*
 * XREFs of ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800BA034
 * Callers:
 *     ??_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z @ 0x1800BA120 (--_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7A28 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B7C18 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800FD598 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x1801303F0 (-UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CComposi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$00@@33335@Z @ 0x1802572F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByV.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::~CBindInfo(CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rcx

  if ( *((_QWORD *)this + 37) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry(this, 0LL, 0LL);
    if ( (unsigned int)dword_1803E0B40 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1803E0B40, 0x400000000000LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v8,
          &unk_18037E8D0);
    }
  }
  v2 = (void *)*((_QWORD *)this + 37);
  if ( v2 )
    operator delete(v2);
  CGlobalCompositionSurfaceInfo::CBindInfo::Reset(this, 0);
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((char *)this + 112);
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(
      v4,
      *((_QWORD *)this + 10));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 9),
      (*((_QWORD *)this + 11) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 8) - v5) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( v7 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v7);
}
