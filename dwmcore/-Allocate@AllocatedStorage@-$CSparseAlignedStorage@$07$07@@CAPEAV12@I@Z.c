_DWORD *__fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::Allocate(int a1)
{
  unsigned int v2; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 15 + 8 * a1 - (((_BYTE)a1 + 15) & 7);
  ProcessHeap = GetProcessHeap();
  result = HeapAlloc(ProcessHeap, 8u, v2);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *result = 0;
  result[1] = a1;
  return result;
}
