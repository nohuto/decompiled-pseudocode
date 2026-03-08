/*
 * XREFs of ?Allocate@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z @ 0x180099BE0
 * Callers:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180099C48 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

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
