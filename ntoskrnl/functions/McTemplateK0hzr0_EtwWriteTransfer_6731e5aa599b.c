NTSTATUS __fastcall McTemplateK0hzr0_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int16 a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int16 *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int16 v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = (__int16 *)&v13;
  v9 = 0;
  v8 = 2;
  v10 = a5;
  v12 = 0;
  v11 = 2 * a4;
  return McGenEventWrite_EtwWriteTransfer(
           IoMgrProvider_Context,
           (const EVENT_DESCRIPTOR *)IoMgr_LegacyFsFilterBlockedByPolicy,
           a3,
           3u,
           &v6);
}
