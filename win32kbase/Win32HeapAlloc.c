PVOID __fastcall Win32HeapAlloc(void *a1, SIZE_T a2, __int64 a3, ULONG a4)
{
  return RtlAllocateHeap(a1, a4, a2);
}
