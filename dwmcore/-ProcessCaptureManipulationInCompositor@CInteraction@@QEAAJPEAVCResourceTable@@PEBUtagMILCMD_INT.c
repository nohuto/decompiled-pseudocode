/*
 * XREFs of ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x180209084
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800318E0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z @ 0x18019B0C8 (-NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z.c)
 */

__int64 __fastcall CInteraction::ProcessCaptureManipulationInCompositor(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR *a3)
{
  CComposition *v3; // rbx
  int ManipulationManager; // eax
  CManipulationManager *v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct CManipulationManager *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = (CComposition *)*((_QWORD *)this + 2);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v12);
  v8 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, ManipulationManager, 0x1ABu, 0LL);
  }
  else
  {
    v9 = CManipulationManager::NotifyCaptureManipulation(v7, this, *((_DWORD *)a3 + 2), *((_QWORD *)a3 + 2));
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1ADu, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return v8;
}
