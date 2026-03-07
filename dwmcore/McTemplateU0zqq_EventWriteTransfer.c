ULONG __fastcall McTemplateU0zqq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v5; // rax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-40h]
  int v9; // [rsp+48h] [rbp-38h]
  int v10; // [rsp+4Ch] [rbp-34h]
  int *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  char *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a4;
  v5 = -1LL;
  do
    ++v5;
  while ( aFsvp[v5] );
  v8 = L"FSVP";
  v9 = 2 * v5 + 2;
  v10 = 0;
  v12 = 4LL;
  v11 = &v15;
  v14 = 4LL;
  v13 = &a5;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_PUBLISH_SEB_NOTIFICATION,
           a3,
           4u,
           &v7);
}
