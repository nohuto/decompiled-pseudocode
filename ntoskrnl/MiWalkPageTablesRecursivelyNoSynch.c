/*
 * XREFs of MiWalkPageTablesRecursivelyNoSynch @ 0x140389AFC
 * Callers:
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140389AFC (MiWalkPageTablesRecursivelyNoSynch.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x1402C7D64 (KdCheckForDebugBreak.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140389AFC (MiWalkPageTablesRecursivelyNoSynch.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiWalkPageTablesRecursivelyNoSynch(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v4 = a3;
  if ( a2 < *(_QWORD *)(a1 + 16 * (a3 + 5LL)) )
    v3 = *(_QWORD *)(a1 + 16 * (a3 + 5LL));
  if ( a3 == 3 )
  {
    v6 = *(_QWORD *)(a1 + 136);
  }
  else
  {
    v6 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v6 > *(_QWORD *)(a1 + 16 * (a3 + 5LL) + 8) )
      v6 = *(_QWORD *)(a1 + 16 * (a3 + 5LL) + 8);
  }
  if ( v3 <= v6 )
  {
    while ( 1 )
    {
      if ( (_DWORD)v4 != 3 || (KdCheckForDebugBreak(), v3 != 0xFFFFF6FB7DBEDF68uLL) )
      {
        v10 = MI_READ_PTE_LOCK_FREE(v3);
        v7 = v10;
        if ( (v10 & 1) == 0 )
          goto LABEL_13;
        v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFFLL;
        if ( (v8 != MiState[v4 + 2139] || (MiFlags & 0x20000000) == 0)
          && (v8 != MiState[v4 + 2135] || qword_140C693B8 == qword_140C693C0) )
        {
          break;
        }
      }
LABEL_15:
      v3 += 8LL;
      if ( v3 > v6 )
        return 0LL;
    }
    if ( (v7 & 0x20) == 0 && (_DWORD)v4 )
    {
      v7 |= 0x20uLL;
      v10 = v7;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      _InterlockedExchange64((volatile __int64 *)v3, v7);
      LOBYTE(v7) = v10;
    }
LABEL_13:
    result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(a1 + 152))(a1, v3, (unsigned int)v4);
    if ( (int)result >= 4 )
      return result;
    if ( (_DWORD)v4 && (_DWORD)result != 1 && (v7 & 1) != 0 && (v7 & 0x80u) == 0LL )
      MiWalkPageTablesRecursivelyNoSynch(a1, (__int64)(v3 << 25) >> 16, (unsigned int)(v4 - 1));
    goto LABEL_15;
  }
  return 0LL;
}
