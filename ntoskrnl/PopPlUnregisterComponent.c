/*
 * XREFs of PopPlUnregisterComponent @ 0x14059F924
 * Callers:
 *     PopPlUnregisterDevice @ 0x14059F9D0 (PopPlUnregisterDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopPlUnregisterComponent(__int64 a1)
{
  NTSTATUS result; // eax
  __int16 v3; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  __int16 *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  __int64 v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v3 = 1;
    v5 = &v3;
    v7 = 0;
    v6 = 2;
    v8 = a1;
    v10 = 0;
    v9 = 16;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C03928,
               (unsigned __int8 *)&dword_140031E54,
               0LL,
               0LL,
               4u,
               &v4);
  }
  *(_QWORD *)(a1 + 432) = 0LL;
  return result;
}
