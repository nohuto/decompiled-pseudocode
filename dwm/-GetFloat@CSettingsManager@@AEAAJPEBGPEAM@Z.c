/*
 * XREFs of ?GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z @ 0x14000BDA8
 * Callers:
 *     ?GetPreferenceFloat@CSettingsManager@@UEAAJPEBGPEAM@Z @ 0x14000BF00 (-GetPreferenceFloat@CSettingsManager@@UEAAJPEBGPEAM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 */

__int64 __fastcall CSettingsManager::GetFloat(CSettingsManager *this, const unsigned __int16 *a2, float *a3)
{
  RTL_SRWLOCK *v3; // rdi
  LSTATUS Value; // ebx
  float v8; // xmm1_4
  DWORD cbData[4]; // [rsp+40h] [rbp-88h] BYREF
  wchar_t Data[31]; // [rsp+50h] [rbp-78h] BYREF
  __int16 v12; // [rsp+8Eh] [rbp-3Ah]

  v3 = (RTL_SRWLOCK *)((char *)this + 48);
  cbData[0] = 64;
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  Value = RegQueryValueExW(*((HKEY *)this + 1), a2, 0LL, 0LL, (LPBYTE)Data, cbData);
  if ( !Value
    || (cbData[0] = 64,
        (Value = RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", a2, 2u, 0LL, Data, cbData)) == 0) )
  {
    v12 = 0;
    v8 = _wtof(Data);
    *a3 = v8;
  }
  ReleaseSRWLockShared(v3);
  if ( Value > 0 )
    return (unsigned __int16)Value | 0x80070000;
  return (unsigned int)Value;
}
