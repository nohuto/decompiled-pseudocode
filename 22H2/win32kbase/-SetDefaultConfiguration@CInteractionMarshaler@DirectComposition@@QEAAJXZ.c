/*
 * XREFs of ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x1C0093644
 * Callers:
 *     ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0092510 (-SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0093174 (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 * Callees:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C0093ED0 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
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
