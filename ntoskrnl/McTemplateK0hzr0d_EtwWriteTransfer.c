/*
 * XREFs of McTemplateK0hzr0d_EtwWriteTransfer @ 0x140411914
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x14067E088 (VhdiAutoAttachOneVhd.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0hzr0d_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  __int16 *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  char *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  unsigned __int16 v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a4;
  v9 = 2LL;
  v12 = 0;
  v8 = (__int16 *)&v15;
  v10 = a5;
  v14 = 4LL;
  v11 = 2 * a4;
  v13 = &a6;
  return McGenEventWrite_EtwWriteTransfer(
           IoMgrProvider_Context,
           (const EVENT_DESCRIPTOR *)IoMgr_VhdAutoAttachFailure,
           0LL,
           4u,
           &v7);
}
