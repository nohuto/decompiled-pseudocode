/*
 * XREFs of ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18028A06C
 * Callers:
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x180289D24 (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 *     ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18028A530 (-GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x18028A718 (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18028A798 (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18028B0C8 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180283E90 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x180288B2C (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_88358cf897930614284adb3422b4c545___.c)
 *     ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x180288ED0 (--1-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDevice::EnsureBeginCreateD3D12Resources(CD3DDevice *this)
{
  void **v1; // rsi
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int DirectInkFactory; // eax
  int started; // edi
  void *v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v12; // [rsp+28h] [rbp-28h] BYREF
  void **v13; // [rsp+30h] [rbp-20h]
  PTP_WORK *v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IDCompositionDirectInkFactoryPartner *v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+28h] BYREF

  v1 = (void **)((char *)this + 1032);
  if ( !*((_QWORD *)this + 129) )
  {
    v3 = (__int64 *)*((_QWORD *)this + 67);
    v4 = *v3;
    v18 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 56))(v3, &v18);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD06,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)v5);
LABEL_15:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      return v6;
    }
    v17 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory((CD3DDevice *)((char *)this + 16), &v17);
    v6 = DirectInkFactory;
    if ( DirectInkFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD09,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)DirectInkFactory);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      goto LABEL_15;
    }
    v11 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v12 = v17;
    if ( v17 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v17 + 8LL))(v17);
    v14 = 0LL;
    v13 = v1;
    v15 = 1;
    started = CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___(
                (__int64)&v11,
                &v14);
    if ( v15 )
    {
      v9 = *v13;
      *v13 = v14;
      if ( v9 )
      {
        CAsyncTask<CD3DDevice::D3D12Resources>::~CAsyncTask<CD3DDevice::D3D12Resources>((__int64)v9);
        operator delete(v9);
      }
    }
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD14,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
        (const char *)(unsigned int)started);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      v6 = started;
      goto LABEL_15;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  }
  return 0LL;
}
