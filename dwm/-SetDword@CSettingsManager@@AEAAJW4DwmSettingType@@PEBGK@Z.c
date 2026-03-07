__int64 __fastcall CSettingsManager::SetDword(__int64 a1, __int64 a2, const WCHAR *a3, int a4)
{
  RTL_SRWLOCK *v4; // rsi
  LSTATUS v7; // eax
  signed int v8; // ebx
  int Data; // [rsp+58h] [rbp+20h] BYREF

  Data = a4;
  v4 = (RTL_SRWLOCK *)(a1 + 48);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 48));
  v7 = RegSetValueExW(*(HKEY *)(a1 + 8), a3, 0, 4u, (const BYTE *)&Data, 4u);
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0x80070000;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xE7u);
  ReleaseSRWLockShared(v4);
  return (unsigned int)v8;
}
