/*
 * XREFs of ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18028A530
 * Callers:
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x180289D24 (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x18028AF38 (-ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18028A06C (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x18028B650 (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@.c)
 */

__int64 __fastcall CD3DDevice::GetD3D12DeviceNoRef(CD3DDevice *this, struct ID3D12Device **a2)
{
  int D3D12Resources; // ebx
  __int64 v5; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Device **v8; // [rsp+40h] [rbp+18h] BYREF

  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  if ( D3D12Resources < 0 )
  {
    v5 = 1518LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
      (const char *)(unsigned int)D3D12Resources);
    return (unsigned int)D3D12Resources;
  }
  D3D12Resources = CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(*((_QWORD *)this + 129), &v8);
  if ( D3D12Resources < 0 )
  {
    v5 = 1521LL;
    goto LABEL_3;
  }
  result = 0LL;
  *a2 = *v8;
  return result;
}
