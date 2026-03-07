__int64 __fastcall MiUpdateOldPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int *v9; // rcx
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 >= 1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 24);
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  if ( !(unsigned int)MiWalkVaCheckCommon(v5, a2, v6, 1, &v11) || MiGetVaAge(v7, (__int64)(a2 << 25) >> 16) != 6 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 168);
  if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && ((*(_DWORD *)v8 & 1) == 0 || *(__int64 *)(v6 + 40) >= 0) )
  {
    if ( (v11 & 0x20) != 0 )
    {
      v9 = *(unsigned int **)(v8 + 208);
      if ( v9
        && (unsigned __int64)((__int64)(a2 << 25) >> 16) <= 0x7FFFFFFEFFFFLL
        && (unsigned int)MiInsertVmAccessedEntry(v9, (__int64)(a2 << 25) >> 16) )
      {
        return MiUpdateOldWorkingSetPagesTail(a1);
      }
    }
    else
    {
      MiUpdateOldPteWorker(v5, a2, v6, *(_QWORD *)(a1 + 168));
    }
  }
  return ++*(_QWORD *)(v8 + 16) >= *(_QWORD *)(v8 + 8) ? 4 : 0;
}
