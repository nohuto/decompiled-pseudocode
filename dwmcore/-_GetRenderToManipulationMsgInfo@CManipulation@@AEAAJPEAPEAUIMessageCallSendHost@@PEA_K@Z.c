/*
 * XREFs of ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x18020BCE4
 * Callers:
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x18020AF48 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x18020B03C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800318E0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1FE0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CManipulation::_GetRenderToManipulationMsgInfo(
        CManipulation *this,
        struct IMessageCallSendHost **a2,
        unsigned __int64 *a3)
{
  CComposition *v3; // rbx
  int ManipulationManager; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct CManipulationManager *v9; // rbx
  struct IMessageCallSendHost **v10; // rdi
  unsigned __int64 v11; // rax
  struct CManipulationManager *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = (CComposition *)*((_QWORD *)this + 2);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v13);
  v8 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ManipulationManager, 0x311u, 0LL);
  }
  else
  {
    v9 = v13;
    *a2 = 0LL;
    v10 = (struct IMessageCallSendHost **)((char *)v9 + 64);
    if ( *((_QWORD *)v9 + 8)
      && (Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v9 + 8), (*a2 = *v10) != 0LL) )
    {
      v11 = *((_QWORD *)v9 + 4);
      *a3 = v11;
      if ( v11 )
      {
        v8 = 0;
      }
      else
      {
        v8 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147467259, 0x315u, 0LL);
      }
    }
    else
    {
      v8 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147467259, 0x313u, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return v8;
}
