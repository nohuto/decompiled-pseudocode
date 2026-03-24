/*
 * XREFs of TraceLoggingWriteMiracastStartSessionEntry @ 0x1C005AD28
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C00557C0 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00213AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

void TraceLoggingWriteMiracastStartSessionEntry()
{
  const GUID *v0; // r10
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-48h] BYREF
  const GUID *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C00B1A90 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00B1A90, 0x400000000000LL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 16;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00B1A90, (unsigned __int8 *)dword_1C00810F8, v0, 0LL, 3u, &v1);
    }
  }
}
