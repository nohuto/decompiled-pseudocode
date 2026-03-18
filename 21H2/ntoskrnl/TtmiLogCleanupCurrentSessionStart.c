/*
 * XREFs of TtmiLogCleanupCurrentSessionStart @ 0x1409A73B4
 * Callers:
 *     TtmCleanupCurrentSession @ 0x1409A40F8 (TtmCleanupCurrentSession.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void TtmiLogCleanupCurrentSessionStart()
{
  int ProcessSessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D3B908, 1LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = ProcessSessionId;
      v4 = 4;
      v3 = &v1;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140D3B908, (unsigned __int8 *)byte_1400331BF, 0LL, 0LL, 3u, &v2);
    }
  }
}
