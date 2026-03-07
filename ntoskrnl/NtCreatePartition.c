__int64 __fastcall NtCreatePartition(void *a1, HANDLE *a2, int a3, int a4)
{
  return PsCreatePartition(a1, a2, a3, a4, KeGetCurrentThread()->PreviousMode, 0);
}
