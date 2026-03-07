const struct CProcessAttributionManager::ProcessAttributionRecord ***__fastcall std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
        const struct CProcessAttributionManager::ProcessAttributionRecord ***a1,
        const struct CProcessAttributionManager::ProcessAttributionRecord **a2,
        __int64 a3,
        __int64 *a4)
{
  const struct CProcessAttributionManager::ProcessAttributionRecord **v5; // rsi
  unsigned __int64 v6; // rbx
  const struct CProcessAttributionManager::ProcessAttributionRecord **v8; // r15
  const struct CProcessAttributionManager::ProcessAttributionRecord ***result; // rax

  v5 = a2;
  v6 = (a3 - (__int64)a2) >> 3;
  while ( (__int64)v6 > 0 )
  {
    v8 = &v5[v6 >> 1];
    if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v8, *a4) )
    {
      v5 = v8 + 1;
      v6 += -1LL - (v6 >> 1);
    }
    else
    {
      v6 >>= 1;
    }
  }
  result = a1;
  *a1 = v5;
  return result;
}
