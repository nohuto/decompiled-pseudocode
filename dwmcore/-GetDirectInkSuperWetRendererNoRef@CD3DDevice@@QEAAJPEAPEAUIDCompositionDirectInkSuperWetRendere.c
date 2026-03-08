/*
 * XREFs of ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x18028A718
 * Callers:
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x1801C8C90 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801F8740 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18028A06C (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x18028B650 (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@.c)
 */

__int64 __fastcall CD3DDevice::GetDirectInkSuperWetRendererNoRef(
        CD3DDevice *this,
        struct IDCompositionDirectInkSuperWetRenderer **a2)
{
  int D3D12Resources; // ebx
  __int64 v5; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  if ( D3D12Resources < 0 )
  {
    v5 = 1568LL;
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
    v5 = 1571LL;
    goto LABEL_3;
  }
  result = 0LL;
  *a2 = *(struct IDCompositionDirectInkSuperWetRenderer **)(v8 + 16);
  return result;
}
