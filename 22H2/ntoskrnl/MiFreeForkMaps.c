/*
 * XREFs of MiFreeForkMaps @ 0x14055A874
 * Callers:
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 * Callees:
 *     MiUnmapSinglePage @ 0x14036AA14 (MiUnmapSinglePage.c)
 *     MiFinishLastForkPageTable @ 0x14055A5E0 (MiFinishLastForkPageTable.c)
 */

unsigned __int64 __fastcall MiFreeForkMaps(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdi

  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
    result = MiUnmapSinglePage(v5);
  v7 = (__int64 *)(a1 + 8);
  v8 = 3LL;
  do
  {
    if ( *v7 != -1 )
      result = MiFinishLastForkPageTable(v5, *v7, a3, a4);
    ++v7;
    --v8;
  }
  while ( v8 );
  return result;
}
