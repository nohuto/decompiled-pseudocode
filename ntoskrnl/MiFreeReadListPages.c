/*
 * XREFs of MiFreeReadListPages @ 0x1406A4F10
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x1406A4E80 (MiReleaseReadListResources.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MiGetPfnLink @ 0x1402FCBFC (MiGetPfnLink.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     MiPartitionIdToPointer @ 0x14036CC64 (MiPartitionIdToPointer.c)
 *     MiFreeReadListPageList @ 0x1406A4FAC (MiFreeReadListPageList.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 i; // rbp
  __int64 v9; // r8
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = MiFreeReadListPageList(a1 + 40, &v10);
  v3 = v10;
  v4 = v2;
  v5 = (__int64 *)(a1 + 48);
  v6 = 4LL;
  do
  {
    v7 = *v5;
    for ( i = 0LL; *v5; ++i )
    {
      *v5 = MiGetPfnLink(v7);
      if ( !v3 )
        v3 = MiPartitionIdToPointer((*(_QWORD *)(v9 + 40) >> 43) & 0x3FF);
      MiReleaseFreshPage(v9);
      v7 = *v5;
    }
    v4 += i;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v4 )
    MiReturnFaultCharges(v3, v4, (struct _KPRCB *)1);
}
