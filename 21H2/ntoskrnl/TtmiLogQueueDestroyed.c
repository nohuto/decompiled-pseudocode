/*
 * XREFs of TtmiLogQueueDestroyed @ 0x1409A9178
 * Callers:
 *     TtmpDeleteQueue @ 0x1409AB5A0 (TtmpDeleteQueue.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void TtmiLogQueueDestroyed()
{
  __int64 v0; // r9
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D3B908, 1LL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 8;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140D3B908, (unsigned __int8 *)word_14003390A, 0LL, 0LL, 3u, &v2);
    }
  }
}
