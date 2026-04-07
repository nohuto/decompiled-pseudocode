/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemoteAppRenderTargetProxy@@@Z @ 0x1800BE29C
 * Callers:
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x180028B14 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z @ 0x180022F48 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CRemoteAppRenderTargetProxy>(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3)
{
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // eax
  int v9; // edi

  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v7 = (volatile signed __int32 *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 12) = 0;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CRemoteAppRenderTargetProxy::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v8 = CResourceProxy::InitializeFromSharedHandle((__int64)v7, 0x1Cu, *(__int64 **)(a1 + 16), a2);
    v9 = v8;
    if ( v8 >= 0 )
      v9 = 0;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x15u);
    if ( v9 >= 0 )
    {
      *a3 = v7;
      v9 = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x7Bu);
    }
    CBaseObject::Release((CBaseObject *)v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x75u);
  }
  return (unsigned int)v9;
}
