NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *ActivityId,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v7; // r11d
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v7 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v7;
  return EtwWriteEx(*a1, a2, 0LL, 0, ActivityId, 0LL, a4, UserData);
}
