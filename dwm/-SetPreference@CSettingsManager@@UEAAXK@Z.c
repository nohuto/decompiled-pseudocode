void __fastcall CSettingsManager::SetPreference(CSettingsManager *this, int a2)
{
  *((_DWORD *)this + 16) |= a2;
}
