/*
 * XREFs of MiFreeReadListPages @ 0x1406362C4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x140636234 (MiReleaseReadListResources.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x1402E4184 (MiReturnFaultCharges.c)
 *     MiPartitionIdToPointer @ 0x1403253D8 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x14032C1B0 (MiGetPfnLink.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiFreeReadListPageList @ 0x14063634C (MiFreeReadListPageList.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = MiFreeReadListPageList(a1 + 40, &v11);
  v3 = v11;
  v4 = v2;
  v5 = (__int64 *)(a1 + 48);
  v6 = 4LL;
  do
  {
    v7 = 0LL;
    while ( *v5 )
    {
      *v5 = MiGetPfnLink(*v5);
      if ( !v3 )
        v3 = MiPartitionIdToPointer((*(_QWORD *)(v9 + 40) >> 39) & 0x3FF);
      MiReleaseFreshPage(v9, v8, v9, v10);
      ++v7;
    }
    v4 += v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v4 )
    MiReturnFaultCharges(v3, v4, 1);
}
