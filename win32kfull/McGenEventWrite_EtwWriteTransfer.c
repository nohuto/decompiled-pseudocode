NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // rdx
  ULONG v6; // eax
  ULONG v7; // edx

  v5 = (unsigned __int16 *)qword_1C035C028;
  v6 = 0;
  if ( qword_1C035C028 )
  {
    UserData->Ptr = qword_1C035C028;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
  }
  UserData->Size = v7;
  UserData->Reserved = v6;
  return EtwWriteTransfer(W32kControlGuid_Context, &WindowLayoutChange_Stop, &W32kControlGuid, 0LL, 5u, UserData);
}
