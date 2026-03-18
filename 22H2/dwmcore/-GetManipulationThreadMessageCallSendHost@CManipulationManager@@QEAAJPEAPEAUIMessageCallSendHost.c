/*
 * XREFs of ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x18020BFD0
 * Callers:
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x18020C700 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x18020F1BC (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F2C10 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CManipulationManager::GetManipulationThreadMessageCallSendHost(
        CManipulationManager *this,
        struct IMessageCallSendHost **a2)
{
  struct IMessageCallSendHost **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IMessageCallSendHost **)((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
  {
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 5);
    *a2 = *v2;
  }
  return *v2 == 0LL ? 0x80004005 : 0;
}
