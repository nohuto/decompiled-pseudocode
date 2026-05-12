/*
 * XREFs of McTemplateK0quuupdudddd_EtwWriteTransfer @ 0x1C003E10C
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C001360C (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DBF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuupdudddd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-C0h] BYREF
  int *v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  char *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  char *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  char *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  char *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  char *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  char *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  char *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  char *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+138h] [rbp+38h] BYREF

  v38 = a4;
  v17 = 4LL;
  v14 = 0;
  v16 = &v38;
  v19 = 1LL;
  v18 = &a5;
  v21 = 1LL;
  v20 = &a6;
  v22 = &a7;
  v24 = &a8;
  v26 = &a9;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v34 = &a13;
  v36 = &v14;
  v23 = 1LL;
  v25 = 8LL;
  v27 = 4LL;
  v29 = 1LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &EventUnitPowerRequest, a3, 0xCu, &v15);
}
