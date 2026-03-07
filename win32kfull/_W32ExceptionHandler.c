__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1);
  return 1LL;
}
