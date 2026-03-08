/*
 * XREFs of McTemplateK0jhzr1d_EtwWriteTransfer @ 0x1403CFB1C
 * Callers:
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jhzr1d_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        unsigned __int16 a5,
        __int64 a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  unsigned __int16 *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  int v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+6Ch] [rbp+1Bh]
  char *v16; // [rsp+70h] [rbp+1Fh]
  __int64 v17; // [rsp+78h] [rbp+27h]

  v9 = a4;
  v15 = 0;
  v11 = &a5;
  v13 = a6;
  v10 = 16LL;
  v14 = 2 * a5;
  v16 = &a7;
  v12 = 2LL;
  v17 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           IoMgrProvider_Context,
           (const EVENT_DESCRIPTOR *)IoMgr_MountFailed,
           a3,
           5u,
           &v8);
}
