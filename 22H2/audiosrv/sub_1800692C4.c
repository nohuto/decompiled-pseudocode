/*
 * XREFs of sub_1800692C4 @ 0x1800692C4
 * Callers:
 *     sub_18007CF10 @ 0x18007CF10 (sub_18007CF10.c)
 * Callees:
 *     <none>
 */

void *sub_1800692C4()
{
  _QWORD **v0; // rdi
  _QWORD *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  void *result; // rax

  v0 = (_QWORD **)&unk_18019EB50;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[1];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *v0 = 0LL;
    result = &unk_18019EBA0;
    ++v0;
  }
  while ( v0 != (_QWORD **)&unk_18019EBA0 );
  return result;
}
