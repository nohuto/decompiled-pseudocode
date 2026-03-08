/*
 * XREFs of KeSetUserCetAppcompatOptions @ 0x140579648
 * Callers:
 *     KseUserCetBasicModeAllowRetTargetNotCetCompatHookDriverTargeted @ 0x140580310 (KseUserCetBasicModeAllowRetTargetNotCetCompatHookDriverTargeted.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void KeSetUserCetAppcompatOptions()
{
  int v0; // [rsp+30h] [rbp-68h] BYREF
  __int64 v1; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+40h] [rbp-58h] BYREF
  int *v3; // [rsp+60h] [rbp-38h]
  int v4; // [rsp+68h] [rbp-30h]
  int v5; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+78h] [rbp-20h]
  int v8; // [rsp+7Ch] [rbp-1Ch]

  if ( !_interlockedbittestandset(&KiUserCetAppcompatOptions, 0) && (unsigned int)dword_140C02F60 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02F60, 0x400000000000LL) )
    {
      v5 = 0;
      v8 = 0;
      v0 = KiUserCetAppcompatOptions;
      v4 = 4;
      v3 = &v0;
      v6 = &v1;
      v1 = 0x1000000LL;
      v7 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02F60,
        (unsigned __int8 *)&dword_14002D514,
        0LL,
        0LL,
        4u,
        &v2);
    }
  }
}
