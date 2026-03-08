/*
 * XREFs of CoreUICallComputeMaximumMessageSize @ 0x1C00AE174
 * Callers:
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C00CD124 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 * Callees:
 *     ?ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@PEAPEBEIIIIPEAI@Z @ 0x1C00AE408 (-ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@P.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall CoreUICallComputeMaximumMessageSize(
        struct IMessageCallSendHost *a1,
        const unsigned __int8 **a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+20h] [rbp-D8h]
  unsigned int v9; // [rsp+28h] [rbp-D0h]
  unsigned int v10; // [rsp+30h] [rbp-C8h]
  _BYTE v11[128]; // [rsp+40h] [rbp-B8h] BYREF
  int v12; // [rsp+C0h] [rbp-38h]
  int v13; // [rsp+C4h] [rbp-34h]

  v12 = 26;
  v13 = 2;
  result = CoreMessaging::Calling::SendProcessor::ComputeMaximumMessageSize(
             (CoreMessaging::Calling::SendProcessor *)v11,
             a1,
             a2,
             a3,
             v8,
             v9,
             v10,
             a7);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
