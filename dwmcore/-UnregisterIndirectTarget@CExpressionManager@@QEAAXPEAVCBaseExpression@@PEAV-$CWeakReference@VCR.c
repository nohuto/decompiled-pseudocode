void __fastcall CExpressionManager::UnregisterIndirectTarget(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // [rsp+20h] [rbp-18h]

  CExpressionManager::UnregisterExpressionWorker(a1, a2, a3, a4, v4, 1);
}
