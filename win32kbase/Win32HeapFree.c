BOOLEAN __fastcall Win32HeapFree(void *a1, void *a2)
{
  return RtlFreeHeap(a1, 0, a2);
}
