/*
 * XREFs of VslSendDebugAttachNotifications @ 0x1408903C4
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140885400 (DbgkpPostModuleMessages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslSendDebugAttachNotifications(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = *(_QWORD *)(a1 + 992);
  v7[2] = a2;
  v7[3] = a3;
  return VslpEnterIumSecureMode(2u, 16, 0, (__int64)v7);
}
