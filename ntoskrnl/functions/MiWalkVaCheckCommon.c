__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v8; // r8

  if ( !a4 && ((*(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || MiIsPageTableLocked(a1, a2)) )
    return 0LL;
  if ( !_bittest64((const signed __int64 *)(a3 + 40), 0x28u) )
  {
    v8 = *(_QWORD *)(a3 + 8);
    if ( v8 > 0 )
    {
      if ( (unsigned int)MiDemoteCombinedPte(a1, a2, v8 | 0x8000000000000000uLL) )
        *a5 = MI_READ_PTE_LOCK_FREE(a2);
    }
  }
  return 1LL;
}
