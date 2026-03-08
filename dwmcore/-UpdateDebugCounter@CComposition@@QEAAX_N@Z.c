/*
 * XREFs of ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1801B209C
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800A9BF4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x1801B1888 (-Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800F8868 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?SetEnabled@CDebugFrameCounter@@QEAAX_N@Z @ 0x1801B1FFC (-SetEnabled@CDebugFrameCounter@@QEAAX_N@Z.c)
 */

void __fastcall CComposition::UpdateDebugCounter(CComposition *this, char a2)
{
  int v2; // eax
  int v3; // eax
  char v4; // dl
  int v5; // eax
  __int64 v6; // r9

  v2 = *((_DWORD *)this + 154);
  if ( a2 )
  {
    v3 = v2 + 1;
    *((_DWORD *)this + 154) = v3;
    if ( v3 != 1 )
      return;
    v4 = 1;
  }
  else
  {
    v5 = v2 - 1;
    *((_DWORD *)this + 154) = v5;
    if ( v5 )
      return;
    v4 = 0;
  }
  CDebugFrameCounter::SetEnabled(*((CDebugFrameCounter **)this + 78), v4);
  CRenderTargetManager::ForceFullRender(*(CRenderTargetManager **)(v6 + 216));
}
