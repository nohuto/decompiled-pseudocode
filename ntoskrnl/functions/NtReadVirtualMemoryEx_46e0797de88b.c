__int64 __fastcall NtReadVirtualMemoryEx(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return MiReadWriteVirtualMemory(a1, a5, 16, a6);
}
