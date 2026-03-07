void __fastcall __noreturn CoreMessagingK::SendHost::NotifyInvalid(
        struct IMessageCallSendHost *a1,
        struct MsgCallState *a2)
{
  CoreMessagingK::Runtime::BugCheck(1283, *(int *)a2, *((unsigned int *)a2 + 1));
}
