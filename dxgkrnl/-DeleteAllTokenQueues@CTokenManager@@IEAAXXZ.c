/*
 * XREFs of ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0018E28
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C00172B0 (--1CTokenManager@@AEAA@XZ.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0017590 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0077224 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 */

void __fastcall CTokenManager::DeleteAllTokenQueues(CTokenManager *this)
{
  struct _RTL_GENERIC_TABLE *v2; // rdi
  struct CTokenManager::TokenQueueTableEntry *v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 200);
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = (struct CTokenManager::TokenQueueTableEntry *)RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
    if ( !v3 )
      break;
    CTokenManager::RemoveTokenQueueTableEntry(this, v3);
  }
}
