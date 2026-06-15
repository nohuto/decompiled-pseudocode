/*
 * XREFs of sub_1800B4560 @ 0x1800B4560
 * Callers:
 *     sub_180001620 @ 0x180001620 (sub_180001620.c)
 *     sub_180001660 @ 0x180001660 (sub_180001660.c)
 *     sub_1800016F0 @ 0x1800016F0 (sub_1800016F0.c)
 *     sub_180001710 @ 0x180001710 (sub_180001710.c)
 *     sub_180001800 @ 0x180001800 (sub_180001800.c)
 *     sub_18013CB88 @ 0x18013CB88 (sub_18013CB88.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800B4560(ULONGLONG *CallbackContext)
{
  GUID v2; // xmm0
  signed int v3; // eax
  unsigned int v4; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  ProviderId = v2;
  v3 = EventRegister(&ProviderId, EnableCallback, CallbackContext, CallbackContext + 4);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EventSetInformation(CallbackContext[4], 2LL, CallbackContext[1], *(unsigned __int16 *)CallbackContext[1]);
  }
  return v4;
}
