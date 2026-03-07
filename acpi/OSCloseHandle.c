NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
