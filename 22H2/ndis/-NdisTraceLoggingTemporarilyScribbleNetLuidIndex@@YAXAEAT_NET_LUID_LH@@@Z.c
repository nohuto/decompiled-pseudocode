/*
 * XREFs of ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C011FCE0
 * Callers:
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C0107EC0 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002301C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0023554 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingTemporarilyScribbleNetLuidIndex(union _NET_LUID_LH *a1)
{
  unsigned __int64 *v1; // r9
  unsigned __int64 v2; // rax
  int v3; // [rsp+30h] [rbp-48h] BYREF
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C00E4108 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00E4108, 0x200000000000LL) )
    {
      v2 = *v1;
      v7 = 0;
      v6 = 4;
      v3 = (v2 >> 24) & 0xFFFFFF;
      v5 = &v3;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C00E4108,
        (unsigned __int8 *)dword_1C00D0D8A,
        0LL,
        0LL,
        3u,
        &v4);
    }
  }
}
