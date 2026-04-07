/*
 * XREFs of ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800454C8
 * Callers:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18003E5E8 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180044470 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002AD80 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CWindowIconic::OnColorizationUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v6; // eax

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 609LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 609LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 609LL)) & 0x40;
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x100000);
  if ( a2 )
  {
    v6 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x216u);
  }
  return v4;
}
