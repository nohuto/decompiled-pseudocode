/*
 * XREFs of KSTIOCPDispatcher_Destroy @ 0x1C0080AB0
 * Callers:
 *     DeactivateKSTInputProcessingHelper @ 0x1C00807B4 (DeactivateKSTInputProcessingHelper.c)
 *     UserKSTInitialize @ 0x1C0084060 (UserKSTInitialize.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00831E8 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall KSTIOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    result = IOCPDispatcher::`scalar deleting destructor'(
               *(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
               a2);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
  }
  return result;
}
