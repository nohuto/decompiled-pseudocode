/*
 * XREFs of ?ProcessDisableOutputPrediction@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_DISABLEOUTPUTPREDICTION@@@Z @ 0x1802091C8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessDisableOutputPrediction(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_DISABLEOUTPUTPREDICTION *a3)
{
  char v3; // dl

  v3 = *((_BYTE *)this + 193) & 0xFD | (*((_BYTE *)a3 + 8) != 0 ? 2 : 0);
  *((_BYTE *)this + 193) = v3;
  if ( (v3 & 2) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  else
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  return 0LL;
}
