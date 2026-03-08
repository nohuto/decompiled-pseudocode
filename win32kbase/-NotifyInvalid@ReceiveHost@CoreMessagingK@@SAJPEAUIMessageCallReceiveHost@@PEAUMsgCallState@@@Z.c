/*
 * XREFs of ?NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C02740E0
 * Callers:
 *     <none>
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0273D34 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall __noreturn CoreMessagingK::ReceiveHost::NotifyInvalid(
        struct IMessageCallReceiveHost *a1,
        struct MsgCallState *a2)
{
  CoreMessagingK::Runtime::BugCheck(768, *(int *)a2, *((unsigned int *)a2 + 1));
}
