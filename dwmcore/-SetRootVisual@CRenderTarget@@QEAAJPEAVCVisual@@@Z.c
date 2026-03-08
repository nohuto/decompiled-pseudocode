/*
 * XREFs of ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801E3CBC
 * Callers:
 *     ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x1801E3C40 (-ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801EC0A4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18021D198 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETROOT@@@Z @ 0x18021D384 (-ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SET.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18021D54C (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x180252A70 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C6DFC (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRenderTarget::SetRootVisual(CRenderTarget *this, struct CVisual *a2)
{
  struct CVisualTree *v4; // rdx
  int VisualTree; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CVisualTree *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)&v9);
  VisualTree = CVisual::GetVisualTree(a2, &v9);
  v6 = VisualTree;
  if ( VisualTree >= 0 )
  {
    v4 = v9;
LABEL_5:
    CRenderTarget::SetVisualTree(this, v4);
    v6 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\rendertarget.cpp",
    (const char *)(unsigned int)VisualTree);
LABEL_6:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  return v6;
}
