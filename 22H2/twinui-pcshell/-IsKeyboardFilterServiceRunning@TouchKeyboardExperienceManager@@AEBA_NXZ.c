/*
 * XREFs of ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1803BB7D8
 * Callers:
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C3E58 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C48DC (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5534 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

bool __fastcall TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(TouchKeyboardExperienceManager *this)
{
  bool v1; // bl
  SC_HANDLE v2; // rax
  SC_HANDLE v3; // rdi
  SC_HANDLE v4; // rsi
  DWORD pcbBytesNeeded; // [rsp+30h] [rbp-48h] BYREF
  BYTE Buffer[4]; // [rsp+38h] [rbp-40h] BYREF
  int v8; // [rsp+3Ch] [rbp-3Ch]

  v1 = 0;
  v2 = OpenSCManagerW(0LL, 0LL, 4u);
  v3 = v2;
  if ( v2 )
  {
    v4 = OpenServiceW(v2, L"MsKeyboardFilter", 4u);
    if ( v4 )
    {
      if ( QueryServiceStatusEx(v4, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pcbBytesNeeded) )
        v1 = v8 == 4;
      CloseServiceHandle(v4);
    }
    CloseServiceHandle(v3);
  }
  return v1;
}
