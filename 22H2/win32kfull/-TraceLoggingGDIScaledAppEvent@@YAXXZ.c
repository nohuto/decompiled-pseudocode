/*
 * XREFs of ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C0201AE0
 * Callers:
 *     SetAppCompatFlags @ 0x1C006D270 (SetAppCompatFlags.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void TraceLoggingGDIScaledAppEvent(void)
{
  __int64 v0; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0354098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
    {
      v4 = 0;
      v2 = &v0;
      v0 = 0x1000000LL;
      v3 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0354098,
        (unsigned __int8 *)dword_1C031CB2D,
        0LL,
        0LL,
        3u,
        &v1);
    }
  }
}
