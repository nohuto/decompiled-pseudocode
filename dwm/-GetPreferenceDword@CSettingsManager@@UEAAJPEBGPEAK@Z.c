/*
 * XREFs of ?GetPreferenceDword@CSettingsManager@@UEAAJPEBGPEAK@Z @ 0x140002F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSettingsManager::GetPreferenceDword(CSettingsManager *this, const unsigned __int16 *a2, BYTE *a3)
{
  RTL_SRWLOCK *v3; // rdi
  LSTATUS ValueW; // ebx
  DWORD cbData; // [rsp+50h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)((char *)this + 48);
  cbData = 4;
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  ValueW = RegQueryValueExW(*((HKEY *)this + 1), a2, 0LL, 0LL, a3, &cbData);
  if ( ValueW )
  {
    cbData = 4;
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", a2, 0x20000010u, 0LL, a3, &cbData);
  }
  ReleaseSRWLockShared(v3);
  if ( ValueW > 0 )
    return (unsigned __int16)ValueW | 0x80070000;
  else
    return (unsigned int)ValueW;
}
