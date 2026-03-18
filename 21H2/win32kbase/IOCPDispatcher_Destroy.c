/*
 * XREFs of IOCPDispatcher_Destroy @ 0x1C005A7F0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00B5A44 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01EBD40 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C005C93C (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
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
