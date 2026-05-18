/*
 * XREFs of DwmpNotifyUserLogon @ 0x1800034F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x1800015EC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x180003BD0 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpUpdateUserSettings @ 0x180003E4C (DwmpUpdateUserSettings.c)
 */

__int64 __fastcall DwmpNotifyUserLogon(HANDLE hToken)
{
  signed int v1; // ebx
  BOOL v3; // esi
  REGSAM v4; // edi
  HKEY v5; // r14
  HANDLE v6; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  unsigned int v9; // edx
  int v10; // ecx
  HKEY v11; // rdi
  HANDLE v12; // rbx
  HANDLE CurrentProcess; // rax
  int updated; // eax
  HANDLE v16; // [rsp+40h] [rbp-10h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-8h] BYREF
  HKEY phkResult; // [rsp+88h] [rbp+38h] BYREF
  HKEY v19; // [rsp+90h] [rbp+40h] BYREF
  HKEY v20; // [rsp+98h] [rbp+48h] BYREF

  v1 = 0;
  v19 = 0LL;
  TargetHandle = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    phkResult = 0LL;
    v3 = 0;
    v4 = 131097;
    if ( hToken )
    {
      v3 = ImpersonateLoggedOnUser(hToken);
      if ( v3 )
        v4 = 131103;
    }
    if ( !RegOpenCurrentUser(v4, &phkResult) )
    {
      RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Windows\\DWM", 0, v4, &v19);
      RegOpenKeyExW(phkResult, L"Software\\Policies\\Microsoft\\Windows\\DWM", 0, 0x20019u, &v20);
      CloseHandle(phkResult);
    }
    if ( v3 )
      RevertToSelf();
    v5 = v19;
    if ( !v19
      || (v19 = 0LL,
          SetLastError(0),
          v6 = ghDwmProcess,
          v7 = GetCurrentProcess(),
          DuplicateHandle(v7, v5, v6, &TargetHandle, v4, 0, 1u)) )
    {
      v11 = v20;
      if ( !v20
        || (v20 = 0LL,
            SetLastError(0),
            v12 = ghDwmProcess,
            CurrentProcess = GetCurrentProcess(),
            DuplicateHandle(CurrentProcess, v11, v12, &v16, 0x20019u, 0, 1u)) )
      {
        updated = DwmpUpdateUserSettings(!v3, TargetHandle, v16);
        v1 = updated;
        if ( updated >= 0 )
          goto LABEL_23;
        v9 = 1613;
        v10 = updated;
        goto LABEL_22;
      }
      LastError = GetLastError();
      v9 = 1610;
    }
    else
    {
      LastError = GetLastError();
      v9 = 1592;
    }
    v1 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v1 = LastError;
    if ( v1 >= 0 )
      v1 = -2003304445;
    v10 = v1;
LABEL_22:
    DoStackCaptureDirect(v10, v9);
  }
LABEL_23:
  TraceLoggingWriteEtw(7, v1, 0);
  ReleaseSRWLockShared(&gDwmStateLock);
  if ( v19 )
    CloseHandle(v19);
  if ( v20 )
    CloseHandle(v20);
  return (unsigned int)v1;
}
