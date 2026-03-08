/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C02B8814
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01E4050 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0335294 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  void *v6; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 5466LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5466LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*((_QWORD *)this + 111) && a2 )
  {
    v5 = 4LL * (unsigned int)(*(_DWORD *)(v4 + 2240) * *(_DWORD *)(v4 + 2244));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v4 + 2240) * *(_DWORD *)(v4 + 2244)), 4uLL) )
      v5 = -1LL;
    *((_QWORD *)this + 111) = operator new[](v5, 0x4B677844u, 256LL);
  }
  v6 = (void *)*((_QWORD *)this + 111);
  if ( v6 )
    memset(v6, 0, 4 * *(unsigned int *)(v4 + 2240) * (unsigned __int64)*(unsigned int *)(v4 + 2244));
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 864);
}
