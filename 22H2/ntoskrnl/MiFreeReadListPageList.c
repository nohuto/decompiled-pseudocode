/*
 * XREFs of MiFreeReadListPageList @ 0x14063634C
 * Callers:
 *     MiFreeReadListPages @ 0x1406362C4 (MiFreeReadListPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1403253D8 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x14032C1B0 (MiGetPfnLink.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiFreeReadListPageList(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 PfnLink; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  bool v11; // zf

  v2 = *a1;
  v5 = 0LL;
  while ( v2 )
  {
    PfnLink = MiGetPfnLink(v2);
    v11 = *a2 == 0;
    *a1 = PfnLink;
    if ( v11 )
      *a2 = MiPartitionIdToPointer((*(_QWORD *)(v9 + 40) >> 39) & 0x3FF);
    MiReleaseFreshPage(v9, v8, v9, v10);
    v2 = *a1;
    ++v5;
  }
  return v5;
}
