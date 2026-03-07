__int64 __fastcall CSettingsManager::GetThemesPersonalizeDword(
        CSettingsManager *this,
        const unsigned __int16 *a2,
        BYTE *a3)
{
  LSTATUS v6; // ebx
  DWORD cbData; // [rsp+40h] [rbp+8h] BYREF

  cbData = 4;
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  v6 = RegQueryValueExW(*((HKEY *)this + 3), a2, 0LL, 0LL, a3, &cbData);
  ReleaseSRWLockShared((PSRWLOCK)this + 6);
  if ( v6 > 0 )
    return (unsigned __int16)v6 | 0x80070000;
  return (unsigned int)v6;
}
