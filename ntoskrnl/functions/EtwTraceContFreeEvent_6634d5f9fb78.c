BOOLEAN __fastcall EtwTraceContFreeEvent(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  _QWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-28h] BYREF

  v2 = EtwpMemoryProvRegHandle;
  result = EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_FREE);
  if ( result )
  {
    v6[0] = a1;
    UserData.Ptr = (ULONGLONG)v6;
    v6[1] = a2;
    *(_QWORD *)&UserData.Size = 16LL;
    return EtwWriteEx(v2, &KERNEL_MEM_EVENT_CONT_FREE, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
