/*
 * XREFs of ??1CLegacySwapChain@@MEAA@XZ @ 0x1800C7F18
 * Callers:
 *     ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x1800C67C0 (--_GCLegacySwapChain@@MEAAPEAXI@Z.c)
 *     ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x18029C91C (--_ECLegacyStereoSwapChain@@UEAAPEAXI@Z.c)
 *     ??1CConversionSwapChain@@UEAA@XZ @ 0x18029D424 (--1CConversionSwapChain@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x1800C6BD4 (-AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@0@@Z @ 0x1800ED590 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLegacySwapChain::~CLegacySwapChain(CLegacySwapChain *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx
  CD3DDevice *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rcx

  v2 = (char *)this + 216;
  *(_QWORD *)this = &CLegacySwapChain::`vftable'{for `IOverlaySwapChain'};
  *((_QWORD *)this + 2) = &CLegacySwapChain::`vftable'{for `CMILCOMBaseWeakRef'};
  *((_QWORD *)this + 5) = &CLegacySwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 27) = &CLegacySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CLegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CLegacySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 16LL) + 8) = &CLegacySwapChain::`vftable'{for `ILegacySwapChain'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 360;
  v4 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 376;
  v5 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v5 + 4) = v5 - 400;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 16LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL)
                                                                         - 424;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 44);
  *((_QWORD *)this + 44) = 0LL;
  if ( v6 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v6);
  v7 = (CD3DDevice *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    CD3DDevice::AdvanceUnpin(v7, *(struct _LUID *)((char *)this + 116), *((unsigned int *)this + 28), 1u);
    *(_BYTE *)(*((_QWORD *)this + 10) + 1508LL) = 1;
  }
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    v9 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 48LL))(v9, v2);
  }
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 44);
  if ( v10 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v10);
  v11 = *((_QWORD *)this + 31);
  if ( v11 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CSwapChainBuffer>>>(v11, *((_QWORD *)this + 32));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 31),
      (*((_QWORD *)this + 33) - *((_QWORD *)this + 31)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 30);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 29);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 28);
  COverlaySwapChainBase::~COverlaySwapChainBase(this);
}
