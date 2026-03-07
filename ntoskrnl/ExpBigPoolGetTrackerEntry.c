__int64 __fastcall ExpBigPoolGetTrackerEntry(ULONG_PTR BugCheckParameter2, int a2, _QWORD *a3, __int64 *a4, _QWORD *a5)
{
  __int64 v5; // rbx
  void *v6; // rsi
  int v7; // edi
  ULONG_PTR v8; // rbp
  unsigned int v9; // r11d
  _QWORD *v10; // rdx

  v5 = PoolBigPageTableSize;
  v6 = PoolBigPageTable;
  v7 = 1;
  v8 = a2;
  v9 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543
                                                                            * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32));
  while ( 1 )
  {
    v10 = (char *)PoolBigPageTable + 32 * v9;
    if ( *v10 == BugCheckParameter2 )
      break;
    if ( ++v9 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v7 )
        goto LABEL_14;
      v9 = 0;
      v7 = 0;
    }
  }
  if ( !v10 )
LABEL_14:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v8, 0LL);
  if ( a3 )
    *a3 = PoolBigPageTable;
  if ( a4 )
    *a4 = v5;
  if ( a5 )
    *a5 = &ExpPoolBigEntriesInUse;
  return (__int64)v6 + 32 * v9;
}
