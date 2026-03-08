/*
 * XREFs of VrpPreFlushKey @ 0x140A6FFDC
 * Callers:
 *     VrpRegistryCallback @ 0x1406C2D60 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140244870 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall VrpPreFlushKey(__int64 a1, __int64 a2)
{
  GUID ActivityId; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5[2]; // [rsp+40h] [rbp-38h] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    if ( (unsigned int)dword_140C043C0 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C043C0,
        (unsigned __int8 *)word_14003A30A,
        &ActivityId,
        0LL,
        2u,
        v5);
    return 3221226755LL;
  }
  else
  {
    if ( (unsigned int)dword_140C043C0 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C043C0,
        (unsigned __int8 *)&dword_14003A32C,
        &ActivityId,
        0LL,
        2u,
        v5);
    return 0LL;
  }
}
