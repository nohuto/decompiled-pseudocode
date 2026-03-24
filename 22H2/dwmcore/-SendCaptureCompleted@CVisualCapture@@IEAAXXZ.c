/*
 * XREFs of ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F1F50
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EFF54 (-Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F197C (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DE4C0 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

void __fastcall CVisualCapture::SendCaptureCompleted(CVisualCapture *this)
{
  __int64 v2; // r10
  __int64 v3; // rax
  unsigned int v4; // ecx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1080LL) + 48LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 68);
    else
      v4 = 0;
    v5[0] = v4;
    v5[1] = *((unsigned int *)this + 14);
    CoreUICallSend(v2, v5, 2LL, 16LL, 0, &unk_1802CE72E);
  }
  *((_BYTE *)this + 1929) = 1;
  if ( *((_BYTE *)this + 1928) )
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 88LL), this);
}
