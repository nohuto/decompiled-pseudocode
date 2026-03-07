NTSTATUS __fastcall WdipSemWriteScenarioLimitExceededEvent(const EVENT_DESCRIPTOR *a1, ULONGLONG a2, __int16 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  __int16 *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int16 v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  if ( !a1 || !a2 )
    return -1073741811;
  v4.Reserved = 0;
  v7 = 0;
  v5 = &v8;
  v4.Ptr = a2;
  v4.Size = 16;
  v6 = 2;
  return WdipSemWriteEvent((__int64)a1, a1, 0LL, 2u, &v4);
}
