/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0081820
 * Callers:
 *     CoreMsgSend @ 0x1C008141C (CoreMsgSend.c)
 *     CoreMsgObjectCallout @ 0x1C0081F88 (CoreMsgObjectCallout.c)
 *     CoreMsgOpenConnection @ 0x1C0082FE8 (CoreMsgOpenConnection.c)
 *     CoreMsgCreatePort @ 0x1C00C01E8 (CoreMsgCreatePort.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C00D26F0 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0273D34 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
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
