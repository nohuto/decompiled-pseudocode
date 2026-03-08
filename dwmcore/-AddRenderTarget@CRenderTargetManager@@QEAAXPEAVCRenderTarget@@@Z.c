/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6314
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18004FEF0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180103F30 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x1801E7E90 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 *     ?Initialize@CCaptureRenderTarget@@MEAAJXZ @ 0x1801EA220 (-Initialize@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801F627C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x180252A70 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802A1E8C (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1802A46BC (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800515A8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAAPEAPEAVCRenderTarget@@QEAPEAV2@AEBQEAV2@@Z @ 0x180101390 (--$_Emplace_reallocate@AEBQEAVCRenderTarget@@@-$vector@PEAVCRenderTarget@@V-$allocator@PEAVCRend.c)
 */

void __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  struct CRenderTarget *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( *((_BYTE *)this + 576) || *((_QWORD *)this + 71) == GetCurrentFrameId() )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 5);
    if ( v5 == *((_QWORD **)this + 6) )
    {
      std::vector<CRenderTarget *>::_Emplace_reallocate<CRenderTarget * const &>((char *)this + 32, v5, &v7);
    }
    else
    {
      *v5 = a2;
      *((_QWORD *)this + 5) += 8LL;
    }
  }
  else
  {
    v6 = 0LL;
    if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(
                (__int64)a2,
                &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
                &v6) >= 0 )
    {
      *((_BYTE *)this + 578) = 1;
      *((_BYTE *)this + 580) = 1;
    }
    v4 = (_QWORD *)*((_QWORD *)this + 2);
    if ( v4 == *((_QWORD **)this + 3) )
    {
      std::vector<CRenderTarget *>::_Emplace_reallocate<CRenderTarget * const &>((char *)this + 8, v4, &v7);
    }
    else
    {
      *v4 = a2;
      *((_QWORD *)this + 2) += 8LL;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v6);
  }
}
