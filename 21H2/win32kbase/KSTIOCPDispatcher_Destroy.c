/*
 * XREFs of KSTIOCPDispatcher_Destroy @ 0x1C005A820
 * Callers:
 *     UserKSTInitialize @ 0x1C0054360 (UserKSTInitialize.c)
 *     DeactivateKSTInputProcessingHelper @ 0x1C005A698 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C005C93C (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall KSTIOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( gpKSTIOCPDispatcher )
  {
    result = IOCPDispatcher::`scalar deleting destructor'(gpKSTIOCPDispatcher, a2);
    gpKSTIOCPDispatcher = 0LL;
  }
  return result;
}
