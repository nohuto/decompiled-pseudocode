bool __fastcall CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(
        const struct CProcessAttributionManager::ProcessAttributionRecord *a1,
        __int64 a2)
{
  return *(_QWORD *)a1 < a2;
}
