/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C004E5FC
 * Callers:
 *     CoreMsgSend @ 0x1C004E190 (CoreMsgSend.c)
 *     CoreMsgObjectCallout @ 0x1C004EEAC (CoreMsgObjectCallout.c)
 *     CoreMsgOpenConnection @ 0x1C0072D4C (CoreMsgOpenConnection.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C00732C0 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 *     CoreMsgCreatePort @ 0x1C0075B38 (CoreMsgCreatePort.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01FF124 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

NTSTATUS __fastcall CoreMessagingK::EntryLock::Acquire(_BYTE *a1, unsigned int a2)
{
  NTSTATUS result; // eax

  if ( !CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(a2, 0LL, 0LL);
  result = KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
  *a1 = 1;
  return result;
}
