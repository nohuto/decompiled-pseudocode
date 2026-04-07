/*
 * XREFs of ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800452A4
 * Callers:
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180012CB0 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800443C0 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002A540 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180044B1C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18004515C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::OnIconUpdated(CWindowIconic *this, char a2)
{
  unsigned int v2; // ebx
  int CentralImage; // eax
  int updated; // eax
  int v8; // eax
  int v9; // eax

  v2 = 0;
  *(_QWORD *)(*((_QWORD *)this + 10) + 136LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 136LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 144LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 144LL);
  if ( a2 && !*((_DWORD *)this + 4) )
  {
    CentralImage = CWindowIconic::LoadCentralImage(this);
    v2 = CentralImage;
    if ( CentralImage < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, 0x254u);
      return v2;
    }
    updated = CWindowIconic::UpdateClientArea(this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x257u);
      return v2;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x258u);
      return v2;
    }
  }
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x20000);
  if ( a2 )
  {
    v9 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v2 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x25Fu);
  }
  return v2;
}
