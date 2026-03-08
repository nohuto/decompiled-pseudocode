/*
 * XREFs of CmpDestroyVirtualStack @ 0x140A16224
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 */

void __fastcall CmpDestroyVirtualStack(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // edi
  ULONG_PTR *v5; // rbx
  ULONG_PTR v6; // rcx

  if ( a2 )
  {
    v3 = a2 - 1;
    v4 = 0;
    v5 = (ULONG_PTR *)(a1 + 24);
    do
    {
      v6 = *(v5 - 1);
      if ( v6 )
        CmpDereferenceKeyControlBlock(v6);
      if ( v4 == v3 )
      {
        if ( *v5 )
          CmpDereferenceKeyControlBlock(*v5);
      }
      ++v4;
      v5 += 6;
    }
    while ( v4 < a2 );
  }
}
