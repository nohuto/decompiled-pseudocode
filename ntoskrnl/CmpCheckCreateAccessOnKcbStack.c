/*
 * XREFs of CmpCheckCreateAccessOnKcbStack @ 0x14069A584
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     CmpCheckCreateAccess @ 0x14069A410 (CmpCheckCreateAccess.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14087BCE8 (CmpSetAccessStateForBackupRestore.c)
 */

BOOLEAN __fastcall CmpCheckCreateAccessOnKcbStack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _ACCESS_STATE *a4,
        KPROCESSOR_MODE a5,
        int a6,
        char a7,
        __int64 a8,
        void *a9,
        int a10,
        NTSTATUS *a11)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rsi
  char v17; // bl
  __int64 v18; // rcx

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a2, a8, 0LL);
  v16 = SecurityCacheEntryForKcbStack;
  v17 = 1;
  if ( a7
    && (LOBYTE(v14) = a5,
        LOBYTE(v15) = 1,
        (int)CmpSetAccessStateForBackupRestore(a4, v14, SecurityCacheEntryForKcbStack + 32, v15) < 0)
    || (v18 = a4->OriginalDesiredAccess | a6 | 4, ((unsigned int)v18 & *(_DWORD *)(a3 + 96)) != (_DWORD)v18) )
  {
    v17 = 0;
    *a11 = -1073741790;
  }
  else if ( !a7 || a4->RemainingDesiredAccess )
  {
    return CmpCheckCreateAccess(v18, (void *)(v16 + 32), a4, a5, a6, a8, a9, a10, a11);
  }
  else
  {
    *a11 = 0;
  }
  return v17;
}
