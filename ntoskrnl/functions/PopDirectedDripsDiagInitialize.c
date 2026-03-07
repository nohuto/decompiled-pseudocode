void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      PopDirectedDripsDiagTraceHandleRegistered = 0;
      if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140D53980, 0LL, 0LL) >= 0 )
        PopDirectedDripsDiagTraceHandleRegistered = 1;
    }
  }
  else
  {
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140B74130);
    PopDirectedDripsDiagLock = 0LL;
    memset(&PopDirectedDripsDiagSessionContext, 0, 0x230uLL);
    qword_140C38AD0 = 0LL;
    qword_140C38AB8 = (__int64)&qword_140C38AB0;
    qword_140C38AB0 = &qword_140C38AB0;
    qword_140C38AA8 = (__int64)&PopDirectedDripsDiagSessionContext;
    PopDirectedDripsDiagSessionContext = &PopDirectedDripsDiagSessionContext;
    dword_140C38CC0 = 1;
    dword_140C38CC4 = 1;
  }
}
