_QWORD *__fastcall CDrawListBatchManager::CloseCurrentDrawListEntryBatch(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  CBatchOptimizer *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 128) )
  {
    v6 = *(CBatchOptimizer **)(a1 + 136);
    if ( v6 )
      CBatchOptimizer::Flush(v6);
    v7 = *(_DWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_DWORD *)(v8 + 52) = v7;
    v9 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 128) = 0LL;
    v2 = v9;
  }
  *a2 = v2;
  return a2;
}
