ULONG __fastcall McTemplateU0nqq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]

  v8 = a4;
  v10 = &a5;
  v9 = 28LL;
  v11 = 4LL;
  v12 = &a6;
  v13 = 4LL;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &Present_Legacy, a3, 4u, &v7);
}
