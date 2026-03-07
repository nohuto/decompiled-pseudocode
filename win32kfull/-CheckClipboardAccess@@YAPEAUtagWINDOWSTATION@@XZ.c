struct tagWINDOWSTATION *__fastcall CheckClipboardAccess(__int64 a1)
{
  struct tagTHREADINFO *v1; // rax
  NTSTATUS v2; // eax
  ULONG v4; // eax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = PtiCurrentShared(a1);
  v2 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v5, (*((_DWORD *)v1 + 122) >> 3) & 1);
  if ( v2 >= 0 )
    return (struct tagWINDOWSTATION *)v5;
  v4 = RtlNtStatusToDosError(v2);
  UserSetLastError(v4);
  return 0LL;
}
