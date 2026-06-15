/*
 * XREFs of sub_1800384DC @ 0x1800384DC
 * Callers:
 *     sub_180045DC0 @ 0x180045DC0 (sub_180045DC0.c)
 *     sub_1800641D4 @ 0x1800641D4 (sub_1800641D4.c)
 * Callees:
 *     sub_1800655F4 @ 0x1800655F4 (sub_1800655F4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall sub_1800384DC(char a1)
{
  __int64 v1; // rbx
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 CurrentThreadId; // r14
  unsigned __int64 v6; // rbp
  __int64 i; // rdi
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rbx
  signed __int64 v10; // rax
  __int64 v12; // rcx
  HANDLE v13; // rax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = qword_18019E390;
  v3 = 0LL;
  if ( qword_18019E390 )
  {
    if ( !*(_QWORD *)(qword_18019E390 + 8) )
    {
      v12 = *(_QWORD *)qword_18019E390;
      v14 = 0LL;
      if ( (int)sub_1800655F4(v12, &v14) >= 0 && !*(_QWORD *)(v1 + 8) )
        *(_QWORD *)(v1 + 8) = v14;
    }
    v4 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v4 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = CurrentThreadId % 0xA;
      for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xA) + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
        {
          v3 = (char *)(i + 16);
          goto LABEL_12;
        }
      }
      if ( !a1 )
        goto LABEL_18;
      ProcessHeap = GetProcessHeap();
      v9 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
      if ( qword_18019E3A8 )
      {
        v13 = GetProcessHeap();
        ((void (__fastcall *)(HANDLE, _QWORD *))qword_18019E3A8)(v13, v9);
      }
      if ( v9 )
      {
        v3 = (char *)(v9 + 2);
        *(_DWORD *)v9 = CurrentThreadId;
        v9[1] = 0LL;
        *((_WORD *)v9 + 8) = 40;
        *((_DWORD *)v9 + 5) = 0;
        v9[3] = 0LL;
        *((_DWORD *)v9 + 8) = 0;
        v9[5] = 0LL;
        *((_DWORD *)v9 + 12) = 0;
        _m_prefetchw((const void *)(v4 + 8 * v6 + 8));
        do
        {
          v10 = *(_QWORD *)(v4 + 8 * v6 + 8);
          v9[1] = v10;
        }
        while ( v10 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)(v4 + 8 * v6 + 8),
                         (signed __int64)v9,
                         v10) );
      }
      else
      {
LABEL_18:
        v3 = 0LL;
      }
LABEL_12:
      if ( v3 && !*((_QWORD *)v3 + 1) )
        *((_QWORD *)v3 + 1) = v4 + 4;
    }
  }
  return v3;
}
