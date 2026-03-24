/*
 * XREFs of ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180195864
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ED25C (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9CA4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180195544 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::ScheduleScribblesForRenderTarget(
        struct ID3D12Device *a1,
        ULONG (__stdcall *a2)(ID3D12Device *This),
        int *a3,
        _BYTE *a4)
{
  struct ID3D12DeviceVtbl *lpVtbl; // rbx
  int *v6; // rsi
  struct ID3D12Device *v8; // r13
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 (__fastcall *v12)(ULONG (__stdcall *)(ID3D12Device *), CD3DDevice **); // rdi
  int v13; // eax
  HRESULT (__stdcall *QueryInterface)(ID3D12Device *, const IID *const, void **); // rcx
  HRESULT (__stdcall *v15)(ID3D12Device *, const IID *const, void **); // r14
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(HRESULT (__stdcall *)(ID3D12Device *, const IID *const, void **), __int64, __int64); // rsi
  __int64 v18; // rax
  int v19; // eax
  __int64 v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  bool v23; // [rsp+80h] [rbp+40h] BYREF
  int *v24; // [rsp+90h] [rbp+50h]
  CD3DDevice *v25; // [rsp+98h] [rbp+58h] BYREF

  v24 = a3;
  lpVtbl = a1[4].lpVtbl;
  v6 = a3;
  *a4 = 0;
  v8 = a1;
  while ( lpVtbl != v8[5].lpVtbl )
  {
    if ( lpVtbl->AddRef == a2 )
    {
      if ( !LOBYTE(lpVtbl->CreateGraphicsPipelineState) )
      {
        v9 = CSuperWetInkManager::RegisterStrokeOnHost(
               a1,
               (struct CSuperWetInkManager::VailSuperWetStroke *)lpVtbl,
               &v23);
        v10 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x265,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
            (const char *)(unsigned int)v9);
          return v10;
        }
      }
      v11 = *v6;
      v25 = 0LL;
      HIDWORD(lpVtbl->SetName) = v11;
      LODWORD(lpVtbl->GetNodeCount) = v6[1];
      HIDWORD(lpVtbl->GetNodeCount) = v6[2];
      LODWORD(lpVtbl->CreateCommandQueue) = v6[3];
      v12 = *(__int64 (__fastcall **)(ULONG (__stdcall *)(ID3D12Device *), CD3DDevice **))(*(_QWORD *)a2 + 8LL);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v25);
      v13 = v12(a2, &v25);
      v10 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x270,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
          (const char *)(unsigned int)v13);
LABEL_18:
        if ( v25 )
          CD3DDevice::Release(v25);
        return v10;
      }
      QueryInterface = lpVtbl->QueryInterface;
      v21[0] = 0LL;
      if ( (*(int (__fastcall **)(HRESULT (__stdcall *)(ID3D12Device *, const IID *const, void **), CD3DDevice *, HRESULT (__stdcall **)(ID3D12Device *, const GUID *const, UINT *, void *), __int64 *))(*(_QWORD *)QueryInterface + 16LL))(
             QueryInterface,
             v25,
             &lpVtbl->GetPrivateData,
             v21) >= 0 )
      {
        v15 = lpVtbl->QueryInterface;
        v16 = v21[0];
        v17 = *(__int64 (__fastcall **)(HRESULT (__stdcall *)(ID3D12Device *, const IID *const, void **), __int64, __int64))(*(_QWORD *)lpVtbl->QueryInterface + 24LL);
        v18 = (*(__int64 (__fastcall **)(ULONG (__stdcall *)(ID3D12Device *)))(*(_QWORD *)lpVtbl->AddRef + 16LL))(lpVtbl->AddRef);
        v19 = v17(v15, v18, v16);
        v10 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x27E,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v21);
          goto LABEL_18;
        }
        *a4 = 1;
        lpVtbl = (struct ID3D12DeviceVtbl *)((char *)lpVtbl + 88);
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v21);
        a1 = (struct ID3D12Device *)v25;
        v6 = v24;
        if ( v25 )
LABEL_10:
          CD3DDevice::Release((CD3DDevice *)a1);
      }
      else
      {
        lpVtbl = (struct ID3D12DeviceVtbl *)((char *)lpVtbl + 88);
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v21);
        a1 = (struct ID3D12Device *)v25;
        if ( v25 )
          goto LABEL_10;
      }
    }
    else
    {
      lpVtbl = (struct ID3D12DeviceVtbl *)((char *)lpVtbl + 88);
    }
  }
  return 0LL;
}
