/*
 * XREFs of MiFreeReadListPageList @ 0x1406A4FAC
 * Callers:
 *     MiFreeReadListPages @ 0x1406A4F10 (MiFreeReadListPages.c)
 * Callees:
 *     MiGetPfnLink @ 0x1402FCBFC (MiGetPfnLink.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     MiPartitionIdToPointer @ 0x14036CC64 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiFreeReadListPageList(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 PfnLink; // rax
  __int64 v8; // r8
  bool v9; // zf

  v2 = *a1;
  v5 = 0LL;
  while ( v2 )
  {
    PfnLink = MiGetPfnLink(v2);
    v9 = *a2 == 0;
    *a1 = PfnLink;
    if ( v9 )
      *a2 = MiPartitionIdToPointer((*(_QWORD *)(v8 + 40) >> 43) & 0x3FF);
    MiReleaseFreshPage(v8);
    v2 = *a1;
    ++v5;
  }
  return v5;
}
