/*
 * XREFs of ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0063E9C
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0085BCC (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C006400C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00BB254 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::ForwardRequest(FxIoQueue *this, FxIoQueue *pDestQueue, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int result; // eax

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn )
    return FxIoQueue::ForwardRequestWorker(this, pRequest, pDestQueue);
  result = FxIoQueue::Vf_VerifyForwardRequest(this, m_Globals, pDestQueue, pRequest);
  if ( result >= 0 )
    return FxIoQueue::ForwardRequestWorker(this, pRequest, pDestQueue);
  return result;
}
