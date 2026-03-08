/*
 * XREFs of IOCPDispatcher_Destroy @ 0x1C0095480
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00942B4 (UserActivateMITInputProcessing.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x1C0218CC8 (UninitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C009653C (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall IOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
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
