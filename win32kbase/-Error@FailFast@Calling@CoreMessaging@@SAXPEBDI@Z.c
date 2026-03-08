/*
 * XREFs of ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C02756E4
 * Callers:
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x1C0083380 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C008364C (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C00AE620 (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00AE86C (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessaging::Calling::FailFast::Error(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x173u, BugCheckParameter1, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
