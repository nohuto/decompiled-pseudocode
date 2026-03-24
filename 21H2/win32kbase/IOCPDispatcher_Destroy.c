/*
 * XREFs of IOCPDispatcher_Destroy @ 0x1C00B3560
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00879A8 (UserActivateMITInputProcessing.c)
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C01B1DC4 (-UninitializeInputSensors@@YAXXZ.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00B3654 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall IOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( gpIOCPDispatcher )
  {
    result = IOCPDispatcher::`scalar deleting destructor'(gpIOCPDispatcher, a2);
    gpIOCPDispatcher = 0LL;
  }
  return result;
}
