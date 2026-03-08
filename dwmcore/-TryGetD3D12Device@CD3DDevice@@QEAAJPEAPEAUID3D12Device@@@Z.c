/*
 * XREFs of ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18028B0C8
 * Callers:
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x1801C876C (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x1801C8C90 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18028A06C (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x18028B650 (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@.c)
 */

__int64 __fastcall CD3DDevice::TryGetD3D12Device(CD3DDevice *this, struct ID3D12Device **a2)
{
  int D3D12Resources; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  struct ID3D12Device *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Device *v11; // [rsp+40h] [rbp+18h] BYREF
  struct ID3D12Device **v12; // [rsp+48h] [rbp+20h] BYREF

  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  v5 = D3D12Resources;
  if ( D3D12Resources >= 0 )
  {
    v6 = *((_QWORD *)this + 129);
    v11 = 0LL;
    if ( *(_BYTE *)(v6 + 100) )
    {
      v7 = CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(*((_QWORD *)this + 129), &v12);
      v5 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x604,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
          (const char *)(unsigned int)v7);
LABEL_10:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
        return v5;
      }
      v8 = *v12;
      if ( *v12 )
        ((void (__fastcall *)(struct ID3D12Device *))v8->lpVtbl->AddRef)(*v12);
    }
    else
    {
      v8 = v11;
    }
    v11 = 0LL;
    *a2 = v8;
    v5 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5FB,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
    (const char *)(unsigned int)D3D12Resources);
  return v5;
}
