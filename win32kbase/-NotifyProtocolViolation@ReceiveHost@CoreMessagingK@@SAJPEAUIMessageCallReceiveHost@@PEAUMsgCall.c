void __fastcall __noreturn CoreMessagingK::ReceiveHost::NotifyProtocolViolation(
        struct IMessageCallReceiveHost *a1,
        struct MsgCallState *a2)
{
  CoreMessagingK::Runtime::BugCheck(769, *(int *)a2, *((unsigned int *)a2 + 1));
}
