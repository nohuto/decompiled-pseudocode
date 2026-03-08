/*
 * XREFs of ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x1C00A2014
 * Callers:
 *     ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A11C0 (-SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00A1EAC (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 * Callees:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C00A28A0 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(
        DirectComposition::CInteractionMarshaler *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 332);
  *((_DWORD *)this + 4) |= 0x800u;
  *((_BYTE *)this + 332) = v1 & 0x3E | 1;
  return DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
}
