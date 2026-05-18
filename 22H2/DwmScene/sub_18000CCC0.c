/*
 * XREFs of sub_18000CCC0 @ 0x18000CCC0
 * Callers:
 *     sub_18000CFA8 @ 0x18000CFA8 (sub_18000CFA8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall sub_18000CCC0(__int64 a1, char a2)
{
  unsigned __int64 CurrentThreadId; // rbp
  unsigned __int64 v5; // rdi
  __int64 i; // rax
  HANDLE ProcessHeap; // rax
  _WORD *v8; // rbx
  HANDLE v9; // rax
  signed __int64 v10; // rax

  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0xA;
  for ( i = *(_QWORD *)(a1 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
      return (char *)(i + 16);
  }
  if ( !a2 )
    return 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
  if ( qword_180218418 )
  {
    v9 = GetProcessHeap();
    ((void (__fastcall *)(HANDLE, _WORD *))qword_180218418)(v9, v8);
  }
  if ( !v8 )
    return 0LL;
  *(_DWORD *)v8 = CurrentThreadId;
  v8[8] = 40;
  *((_QWORD *)v8 + 1) = 0LL;
  *((_DWORD *)v8 + 5) = 0;
  *((_QWORD *)v8 + 3) = 0LL;
  *((_DWORD *)v8 + 8) = 0;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_DWORD *)v8 + 12) = 0;
  _m_prefetchw((const void *)(a1 + 8 * v5));
  do
  {
    v10 = *(_QWORD *)(a1 + 8 * v5);
    *((_QWORD *)v8 + 1) = v10;
  }
  while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v5), (signed __int64)v8, v10) );
  return (char *)(v8 + 8);
}
