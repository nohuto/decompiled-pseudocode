/*
 * XREFs of CmpSnapshotKcbStackSecurity @ 0x140A19060
 * Callers:
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpSnapshotKcbStackSecurity(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 SecurityCacheEntryForKcbStack; // rdi
  void *Pool; // rax
  unsigned int v8; // ebx
  void *v9; // rsi

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
  Pool = (void *)CmpAllocatePool(256LL, *(unsigned int *)(SecurityCacheEntryForKcbStack + 24), a3);
  v8 = 0;
  v9 = Pool;
  if ( Pool )
  {
    memmove(
      Pool,
      (const void *)(SecurityCacheEntryForKcbStack + 32),
      *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
    *a4 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
