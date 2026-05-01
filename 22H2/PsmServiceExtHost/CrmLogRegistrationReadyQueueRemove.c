/*
 * XREFs of CrmLogRegistrationReadyQueueRemove @ 0x18002E8F8
 * Callers:
 *     CrmRegistrationReadyQueueRemove @ 0x18002F8D8 (CrmRegistrationReadyQueueRemove.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

void CrmLogRegistrationReadyQueueRemove()
{
  __int64 v0; // rcx
  __int64 v1; // r9
  __int64 v2; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  UUID *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3250, 1LL) )
    {
      v6 = 0;
      v9 = 0;
      v4 = &Uuid;
      v2 = v1;
      v7 = &v2;
      v5 = 16;
      v8 = 8;
      tlgWriteTransfer_EventWriteTransfer(v0, (unsigned __int8 *)dword_1800A2A9B, 0LL, 0LL, 4u, &v3);
    }
  }
}
