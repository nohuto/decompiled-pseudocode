NTSTATUS __fastcall WdipSemWriteTimeoutEvent(ULONGLONG a1, __int16 a2, const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  __int16 *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int16 v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  if ( !a1 || !a3 )
    return -1073741811;
  v4.Reserved = 0;
  v7 = 0;
  v5 = &v8;
  v4.Ptr = a1;
  v4.Size = 16;
  v6 = 2;
  return WdipSemWriteEvent(a1, &WDI_SEM_EVENT_SCENARIO_TIMEOUT, a3, 2u, &v4);
}
