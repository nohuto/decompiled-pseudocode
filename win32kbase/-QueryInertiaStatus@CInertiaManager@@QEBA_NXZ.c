bool __fastcall CInertiaManager::QueryInertiaStatus(CInertiaManager *this)
{
  return CInertiaManager::QueryInertia((__int64)this, *(_QWORD *)&gptCursorAsync, 15) != 0;
}
