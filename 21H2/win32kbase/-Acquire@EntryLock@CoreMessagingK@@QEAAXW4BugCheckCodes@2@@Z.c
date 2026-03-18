/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C003BBA0
 * Callers:
 *     CoreMsgSend @ 0x1C003B860 (CoreMsgSend.c)
 *     CoreMsgCreatePort @ 0x1C00A9770 (CoreMsgCreatePort.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C00AA020 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 *     CoreMsgOpenConnection @ 0x1C00AA18C (CoreMsgOpenConnection.c)
 *     CoreMsgObjectCallout @ 0x1C00B30E8 (CoreMsgObjectCallout.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0240E14 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

NTSTATUS __fastcall CoreMessagingK::EntryLock::Acquire(_BYTE *a1, unsigned int a2)
{
  NTSTATUS result; // eax

  if ( !CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(a2, 0LL, 0LL);
  result = KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  *a1 = 1;
  return result;
}
