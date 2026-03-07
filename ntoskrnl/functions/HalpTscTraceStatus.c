void __fastcall HalpTscTraceStatus(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  REGHANDLE v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2;
  if ( HalpDiagnosticEventsRegistered )
  {
    v3 = HalpDiagnosticEventHandle;
    if ( EtwEventEnabled(HalpDiagnosticEventHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 4;
      EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
