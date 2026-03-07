bool __fastcall CSettingsManager::CheckPreference(CSettingsManager *this, int a2)
{
  return (a2 & *((_DWORD *)this + 16)) != 0;
}
