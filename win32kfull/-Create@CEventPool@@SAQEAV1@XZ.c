/*
 * XREFs of ?Create@CEventPool@@SAQEAV1@XZ @ 0x1C00E7280
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00E717C (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

union _SLIST_HEADER *CEventPool::Create(void)
{
  union _SLIST_HEADER *result; // rax
  union _SLIST_HEADER *v1; // rbx

  result = (union _SLIST_HEADER *)EngAllocMem(0, 0x20u, 0x676D6466u);
  v1 = result;
  if ( result )
  {
    InitializeSListHead(result + 1);
    LODWORD(v1->Alignment) = 0;
    return v1;
  }
  return result;
}
