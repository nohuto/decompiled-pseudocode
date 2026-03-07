void __fastcall CExpressionManager::UnregisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  int v2; // [rsp+20h] [rbp-18h]

  CExpressionManager::UnregisterExpressionWorker(
    (__int64)this,
    (__int64)a2,
    *((_QWORD *)a2 + 23),
    *((_DWORD *)a2 + 48),
    v2,
    0);
}
