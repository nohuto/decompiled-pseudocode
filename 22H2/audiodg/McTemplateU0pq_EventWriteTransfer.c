/*
 * XREFs of McTemplateU0pq_EventWriteTransfer @ 0x1400628B4
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140062480 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x140051084 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0pq_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+48h] [rbp-30h]
  __int64 v7; // [rsp+50h] [rbp-28h]
  int *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  v10 = a3;
  v7 = 8LL;
  v6 = &v10;
  v4 = 0;
  v8 = &v4;
  v9 = 4LL;
  return McGenEventWrite_EventWriteTransfer(0LL, a2, a3, 3u, &v5);
}
