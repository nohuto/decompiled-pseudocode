/*
 * XREFs of ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x1C00838D4
 * Callers:
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C0083D68 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00B4560 (-SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 * Callees:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C0084D24 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(
        DirectComposition::CInteractionMarshaler *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 340);
  *((_DWORD *)this + 4) |= 0x800u;
  *((_BYTE *)this + 340) = v1 & 0x3E | 1;
  return DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
}
