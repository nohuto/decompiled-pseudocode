/*
 * XREFs of TtmiLogQueueEnqueueEvent @ 0x140903668
 * Callers:
 *     TtmiWriteEventToSingleQueue @ 0x14090585C (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void TtmiLogQueueEnqueueEvent()
{
  _DWORD *v0; // r9
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+38h] [rbp-21h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+17h]
  __int64 v7; // [rsp+78h] [rbp+1Fh]
  _QWORD *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  int *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140D2D8C8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D2D8C8, 1LL) )
    {
      v4 = v0;
      v6 = &v3;
      v3 = v1;
      v8 = &v4;
      v2 = *v0;
      v7 = 8LL;
      v10 = &v2;
      v9 = 8LL;
      v11 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140D2D8C8, (unsigned __int8 *)word_14002AFA2, 0LL, 0LL, 5u, &v5);
    }
  }
}
