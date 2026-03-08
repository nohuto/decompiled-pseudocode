/*
 * XREFs of ?GetPreferenceString@CSettingsManager@@UEAAJPEBGKPEAG@Z @ 0x14000BF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSettingsManager::GetPreferenceString(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        DWORD a3,
        BYTE *a4)
{
  RTL_SRWLOCK *v4; // rdi
  HKEY Ptr; // rcx
  LSTATUS ValueW; // ebx
  DWORD cbData; // [rsp+70h] [rbp+18h] BYREF

  v4 = this + 6;
  AcquireSRWLockShared(this + 6);
  Ptr = (HKEY)this[1].Ptr;
  cbData = a3;
  ValueW = RegQueryValueExW(Ptr, a2, 0LL, 0LL, a4, &cbData);
  if ( ValueW )
  {
    cbData = a3;
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", a2, 2u, 0LL, a4, &cbData);
  }
  ReleaseSRWLockShared(v4);
  if ( ValueW > 0 )
    return (unsigned __int16)ValueW | 0x80070000;
  return (unsigned int)ValueW;
}
