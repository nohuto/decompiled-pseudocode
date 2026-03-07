__int64 __fastcall CSettingsManager::GetDword(__int64 a1, int a2, const WCHAR *a3, BYTE *a4)
{
  LSTATUS v8; // ebx
  LSTATUS ValueW; // eax
  HKEY v11; // rcx
  DWORD cbData; // [rsp+68h] [rbp+10h] BYREF

  cbData = 4;
  AcquireSRWLockShared((PSRWLOCK)(a1 + 48));
  if ( !a2 )
  {
    v8 = RegQueryValueExW(*(HKEY *)(a1 + 8), a3, 0LL, 0LL, a4, &cbData);
    if ( !v8 )
      goto LABEL_5;
    cbData = 4;
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", a3, 0x20000010u, 0LL, a4, &cbData);
    goto LABEL_4;
  }
  v8 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Policies\\Microsoft\\Windows\\DWM",
         a3,
         0x20000010u,
         0LL,
         a4,
         &cbData);
  if ( v8 )
  {
    v11 = *(HKEY *)(a1 + 16);
    cbData = 4;
    ValueW = RegQueryValueExW(v11, a3, 0LL, 0LL, a4, &cbData);
LABEL_4:
    v8 = ValueW;
  }
LABEL_5:
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 48));
  if ( v8 > 0 )
    return (unsigned __int16)v8 | 0x80070000;
  return (unsigned int)v8;
}
