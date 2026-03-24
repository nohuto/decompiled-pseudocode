/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C004D5FC
 * Callers:
 *     CoreMsgSend @ 0x1C004D190 (CoreMsgSend.c)
 *     CoreMsgObjectCallout @ 0x1C004DEAC (CoreMsgObjectCallout.c)
 *     CoreMsgOpenConnection @ 0x1C007229C (CoreMsgOpenConnection.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C0072810 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 *     CoreMsgCreatePort @ 0x1C00744C8 (CoreMsgCreatePort.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01FF1F4 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
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
