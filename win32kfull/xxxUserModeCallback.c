__int64 xxxUserModeCallback(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, ...)
{
  unsigned int v6; // edi
  unsigned int Count; // eax
  int v8; // ebx
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF
  int v12; // [rsp+8Ch] [rbp+24h]
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v12 = HIDWORD(a4);
  v6 = a1;
  v10[0] = 0LL;
  v11 = 0;
  Count = AtomicExecutionCheck::GetCount(a1);
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)va);
  EtwTraceBeginCallback(v6);
  v8 = KeUserModeCallback(v6, a2, a3, v10, &v11);
  EtwTraceEndCallback(v6);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)va);
  if ( v8 >= 0 && v11 )
    return (unsigned int)-1073741823;
  return (unsigned int)v8;
}
