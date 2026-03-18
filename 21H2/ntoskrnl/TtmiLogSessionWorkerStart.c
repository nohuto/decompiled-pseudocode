/*
 * XREFs of TtmiLogSessionWorkerStart @ 0x1409AA1E8
 * Callers:
 *     TtmpSessionWorker @ 0x1409A5C10 (TtmpSessionWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void TtmiLogSessionWorkerStart()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D3B908, 1LL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D3B908,
        (unsigned __int8 *)&word_140033BD6,
        0LL,
        0LL,
        3u,
        &v2);
    }
  }
}
