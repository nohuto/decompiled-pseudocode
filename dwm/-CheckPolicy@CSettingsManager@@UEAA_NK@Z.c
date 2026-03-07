bool __fastcall CSettingsManager::CheckPolicy(CSettingsManager *this, int a2)
{
  return (a2 & *((_DWORD *)this + 17)) != 0;
}
