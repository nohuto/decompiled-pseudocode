char __fastcall IopLiveDumpTraceRemovePagesCallbackFailure(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  ULONG v4; // edx
  ULONGLONG v5; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+90h] [rbp+18h] BYREF

  v9 = a3;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    UserData.Ptr = v5;
    v7 = &v9;
    UserData.Size = v4;
    UserData.Reserved = 0;
    v8 = 4LL;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_FAILURE,
             0LL,
             0,
             0LL,
             0LL,
             2u,
             &UserData);
  }
  return result;
}
