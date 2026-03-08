/*
 * XREFs of EtwpWriteAppStateChange @ 0x1407E89B8
 * Callers:
 *     EtwTraceAppStateChange @ 0x1407E8520 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1407E93B4 (EtwTraceProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChange()
{
  __int64 v0; // r9
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-48h] BYREF
  __int64 v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C042B8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C042B8, 0x200000000001LL) )
    {
      v4 = 0;
      v2 = v0;
      v3 = 98;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C042B8, (unsigned __int8 *)word_140034762, 0LL, 0LL, 3u, &v1);
    }
  }
}
