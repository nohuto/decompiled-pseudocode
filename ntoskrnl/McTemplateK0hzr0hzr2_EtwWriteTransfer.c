/*
 * XREFs of McTemplateK0hzr0hzr2_EtwWriteTransfer @ 0x14055592C
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402F3E44 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0hzr0hzr2_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  __int16 *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  __int64 v11; // [rsp+50h] [rbp-1h]
  int v12; // [rsp+58h] [rbp+7h]
  int v13; // [rsp+5Ch] [rbp+Bh]
  unsigned __int16 *v14; // [rsp+60h] [rbp+Fh]
  __int64 v15; // [rsp+68h] [rbp+17h]
  __int64 v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+7Ch] [rbp+2Bh]
  unsigned __int16 v19; // [rsp+B8h] [rbp+67h] BYREF

  v19 = a4;
  v10 = 2LL;
  v13 = 0;
  v9 = (__int16 *)&v19;
  v11 = a5;
  v15 = 2LL;
  v12 = 2 * a4;
  v14 = &a6;
  v16 = a7;
  v18 = 0;
  v17 = 2 * a6;
  return McGenEventWrite_EtwWriteTransfer(IoMgrProvider_Context, a2, a3, 5u, &v8);
}
