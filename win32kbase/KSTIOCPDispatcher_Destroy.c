/*
 * XREFs of KSTIOCPDispatcher_Destroy @ 0x1C00954B0
 * Callers:
 *     DeactivateKSTInputProcessingHelper @ 0x1C0095134 (DeactivateKSTInputProcessingHelper.c)
 *     UserKSTInitialize @ 0x1C009A090 (UserKSTInitialize.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C009653C (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall KSTIOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    result = IOCPDispatcher::`scalar deleting destructor'((IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, a2);
    WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  }
  return result;
}
