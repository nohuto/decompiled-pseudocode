/*
 * XREFs of ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x140008C50
 * Callers:
 *     ??1?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x1400089DC (--1-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::ThreadLocalData::Clear(wil::details_abi::ThreadLocalData *this)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rbx
  HANDLE v8; // rax

  v1 = *((_QWORD *)this + 3);
  v3 = v1 + 80LL * *((unsigned __int16 *)this + 16);
  if ( v1 != v3 )
  {
    v4 = v1 + 64;
    do
    {
      v5 = *(void **)v4;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      v4 += 80LL;
    }
    while ( v4 - 64 != v3 );
  }
  v7 = (void *)*((_QWORD *)this + 3);
  v8 = GetProcessHeap();
  HeapFree(v8, 0, v7);
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
