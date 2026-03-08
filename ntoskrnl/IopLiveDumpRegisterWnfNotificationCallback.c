/*
 * XREFs of IopLiveDumpRegisterWnfNotificationCallback @ 0x14085D704
 * Callers:
 *     IopInitializeDumpPolicySettings @ 0x14085D5A4 (IopInitializeDumpPolicySettings.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 */

char IopLiveDumpRegisterWnfNotificationCallback()
{
  int v0; // eax
  __int64 v2; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+68h] [rbp-18h]
  int v6; // [rsp+70h] [rbp-10h]
  int v7; // [rsp+74h] [rbp-Ch]

  HIDWORD(UserData.Ptr) = 0;
  v0 = ExSubscribeWnfStateChange(
         (__int64)&v2,
         (__int64)&WNF_DUMP_ALLOW_LIVEDUMP_POLICY_VALUE_CHANGED,
         1,
         0,
         (__int64)IopLiveDumpPolicyChangeWnfCallback,
         0LL);
  if ( v0 < 0 )
  {
    LOBYTE(v0) = IopLiveDumpIsTracingEnabled();
    if ( (_BYTE)v0 )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)"Failed to subscribe for policy value change notification";
      UserData.Size = 56;
      LOBYTE(v0) = EtwWrite(
                     IopLiveDumpEtwRegHandle,
                     &LIVEDUMP_EVENT_LIVEDUMP_POLICY_OPERATION_FAILURE,
                     0LL,
                     1u,
                     &UserData);
    }
    if ( (unsigned int)dword_140C06280 > 5 )
    {
      LOBYTE(v0) = tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL);
      if ( (_BYTE)v0 )
      {
        v7 = 0;
        v5 = &v2;
        v2 = 0x1000000LL;
        v6 = 8;
        LOBYTE(v0) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140C06280,
                       (unsigned __int8 *)word_14002B7BA,
                       0LL,
                       0LL,
                       3u,
                       &v4);
      }
    }
  }
  return v0;
}
