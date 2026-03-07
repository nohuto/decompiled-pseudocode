__int64 __fastcall MiEmptyPte(__int64 a1, __int64 a2, int a3)
{
  int *v3; // rsi
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(int **)(a1 + 168);
  v6 = *v3;
  if ( (*v3 & 2) != 0 )
  {
    if ( !a3 )
    {
      v8 = MI_READ_PTE_LOCK_FREE(a2);
      if ( *(__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v8) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) >= 0 )
        goto LABEL_3;
    }
  }
  else if ( (v6 & 1) == 0 || !a3 )
  {
LABEL_3:
    MiEmptyWorkingSetHelper(*(_QWORD *)(a1 + 24), a2, v3 + 2, v6 & 4);
  }
  return 0LL;
}
