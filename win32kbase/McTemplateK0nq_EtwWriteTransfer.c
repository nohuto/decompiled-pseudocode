NTSTATUS __fastcall McTemplateK0nq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v8 = a5;
  v10 = 0;
  v9 = 36;
  v11 = &a6;
  v13 = 0;
  v12 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, &UIPISystemEvent, &W32kControlGuid, 3u, &v7);
}
