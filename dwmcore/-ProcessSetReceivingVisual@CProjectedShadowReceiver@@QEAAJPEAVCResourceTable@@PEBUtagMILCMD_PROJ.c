/*
 * XREFs of ?ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL@@@Z @ 0x18000419C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180004334 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectedShadowReceiver::ProcessSetReceivingVisual(
        CProjectedShadowReceiver *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CVisual *Resource; // rax
  unsigned int v8; // ecx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = (struct CVisual *)CResourceTable::GetResource(a2, v5, 196LL)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x4Eu, 0LL);
  }
  else
  {
    CProjectedShadowReceiver::SetReceivingVisual(this, Resource);
  }
  return v4;
}
