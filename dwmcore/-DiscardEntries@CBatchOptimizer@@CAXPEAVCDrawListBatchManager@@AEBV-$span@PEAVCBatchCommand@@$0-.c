void *__fastcall CBatchOptimizer::DiscardEntries(__int64 a1, __int64 a2)
{
  CBatchCommand **v3; // rbx
  void *result; // rax
  CBatchCommand **v5; // rdi
  unsigned int v6; // edx
  CBatchCommand *v7; // [rsp+38h] [rbp+10h] BYREF

  dword_1803E29E0 += *(_DWORD *)a2;
  v3 = *(CBatchCommand ***)(a2 + 8);
  result = *(void **)a2;
  v5 = &v3[*(_QWORD *)a2];
  while ( v3 != v5 )
  {
    v7 = *v3;
    result = (void *)CDrawListBatchManager::ReturnBatchCommand(a1, &v7);
    if ( v7 )
      result = CBatchCommand::`scalar deleting destructor'(v7, v6);
    ++v3;
  }
  return result;
}
