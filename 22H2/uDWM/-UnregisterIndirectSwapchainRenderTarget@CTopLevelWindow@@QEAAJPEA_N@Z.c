/*
 * XREFs of ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x18003FB40
 * Callers:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180017098 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x180099F00 (-UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x1800BE3E4 (-Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(CTopLevelWindow *this, bool *a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTargetProxy *v5; // rcx
  int v7; // eax
  CBaseObject *v8; // rcx

  v2 = 0;
  *a2 = 0;
  v5 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 98);
  if ( v5 )
  {
    v7 = CIndirectSwapchainRenderTargetProxy::Unregister(v5);
    v2 = v7;
    if ( v7 >= 0 )
    {
      v8 = (CBaseObject *)*((_QWORD *)this + 98);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *((_QWORD *)this + 98) = 0LL;
      }
      *((_BYTE *)this + 776) = 0;
      *a2 = 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x153Eu);
    }
  }
  return v2;
}
