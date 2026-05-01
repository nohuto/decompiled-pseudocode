/*
 * XREFs of ?IsTabBeingTransfered@TabTransferManager@@UEAAJUShellTabId@Tabs@ComposableShell@Internal@Windows@@PEAE@Z @ 0x1802FE890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabTransferManager::IsTabBeingTransfered(RTL_SRWLOCK *a1, PVOID *a2, bool *a3)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned __int64 v7; // rax

  v6 = a1 + 7;
  AcquireSRWLockShared(a1 + 7);
  v7 = (_BYTE *)*a2 - (char *)a1[24].Ptr;
  if ( *a2 == a1[24].Ptr )
    v7 = (_BYTE *)a2[1] - (char *)a1[25].Ptr;
  *a3 = v7 == 0;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
