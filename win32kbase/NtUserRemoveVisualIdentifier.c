__int64 __fastcall NtUserRemoveVisualIdentifier(struct _LUID *a1)
{
  int v1; // ebx
  NTSTATUS v3; // eax
  ULONG v4; // eax
  struct _LUID v5; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v5 = 0LL;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v5 = *a1;
  if ( CDesktopInputSink::IsEqualByLuid(&v5) )
    return -1073741790LL;
  v3 = InputObjectMap::RemoveMapping(&v5, 0LL);
  if ( v3 >= 0 )
  {
    return 1;
  }
  else
  {
    v4 = RtlNtStatusToDosError(v3);
    UserSetLastError(v4);
  }
  return v1;
}
