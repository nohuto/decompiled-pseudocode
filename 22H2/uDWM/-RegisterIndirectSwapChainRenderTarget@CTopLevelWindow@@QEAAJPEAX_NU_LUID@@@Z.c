/*
 * XREFs of ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800950AC
 * Callers:
 *     ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x180098DE0 (-RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x1800952A4 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ??$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800BD754 (--$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchai.c)
 *     ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x1800BE3E4 (-Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(
        CTopLevelWindow *this,
        HANDLE hObject,
        char a3,
        struct _LUID a4)
{
  volatile signed __int32 *v4; // rbx
  int v9; // esi
  __int64 v10; // r14
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  if ( *((_QWORD *)this + 98) )
  {
    v9 = -2147024891;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024891, 0x14FAu);
LABEL_13:
    if ( hObject )
      CloseHandle(hObject);
    goto LABEL_22;
  }
  if ( a3 )
    v10 = *((_QWORD *)this + 33);
  else
    v10 = *((_QWORD *)this + 68);
  if ( v10 )
    v10 = *(_QWORD *)(v10 + 16);
  if ( !v10 )
  {
    v9 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467261, 0x150Bu);
    goto LABEL_13;
  }
  v11 = CCompositor::CreateProxy<CIndirectSwapchainRenderTargetProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v15);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x1511u);
    v4 = (volatile signed __int32 *)v15;
    goto LABEL_13;
  }
  v4 = (volatile signed __int32 *)v15;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE, struct _LUID, _DWORD))(**(_QWORD **)(*(_QWORD *)(v15 + 16)
                                                                                              + 16LL)
                                                                                + 704LL))(
          *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL),
          *(unsigned int *)(*(_QWORD *)(v15 + 16) + 24LL),
          hObject,
          a4,
          *(_DWORD *)(*(_QWORD *)(v10 + 16) + 24LL));
  v9 = v12;
  if ( v12 >= 0 )
  {
    *((_BYTE *)this + 776) = a3;
    *((_QWORD *)this + 98) = v4;
    _InterlockedIncrement(v4 + 2);
    v13 = CTopLevelWindow::SendBoundsToSwapchainTarget(this);
    v9 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x1552u);
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1521u);
    v4 = (volatile signed __int32 *)v15;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x151Cu);
  }
LABEL_22:
  if ( v4 )
  {
    if ( v9 < 0 )
      CIndirectSwapchainRenderTargetProxy::Unregister((CIndirectSwapchainRenderTargetProxy *)v4);
    CBaseObject::Release((CBaseObject *)v4);
  }
  return (unsigned int)v9;
}
