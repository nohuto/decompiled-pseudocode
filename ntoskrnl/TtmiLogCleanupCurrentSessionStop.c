/*
 * XREFs of TtmiLogCleanupCurrentSessionStop @ 0x1409A41A0
 * Callers:
 *     TtmCleanupCurrentSession @ 0x1409A0EB0 (TtmCleanupCurrentSession.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void TtmiLogCleanupCurrentSessionStop()
{
  int ProcessSessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140D53948 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D53948, 1LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = ProcessSessionId;
      v4 = 4;
      v3 = &v1;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140D53948, (unsigned __int8 *)byte_140033AD3, 0LL, 0LL, 3u, &v2);
    }
  }
}
