__int64 __fastcall CDrawListBatchManager::ReturnBatchCommand(__int64 a1, CBatchCommand **a2)
{
  CBatchCommand *v2; // rbx
  CBatchCommand *v5; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  CBatchCommand *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  CBatchCommand::Destroy(*a2);
  *(_DWORD *)v2 = 0;
  v5 = *a2;
  *a2 = 0LL;
  v8 = v5;
  result = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1 + 40, &v8, 1LL);
  if ( (int)result < 0 )
    ModuleFailFastForHRESULT((unsigned int)result, retaddr);
  return result;
}
