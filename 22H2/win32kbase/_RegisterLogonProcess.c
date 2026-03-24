/*
 * XREFs of _RegisterLogonProcess @ 0x1C00B1D00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00B1DC0 (IsPrivileged.c)
 *     WmsgpConnect @ 0x1C027E818 (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v7; // rcx

  v3 = a1;
  if ( !gpidLogon )
  {
    if ( (unsigned int)IsPrivileged(&psTcb) )
    {
      gpidLogon = v3;
      *((_DWORD *)gpsi + 567) = v3;
      v5 = WmsgpConnect(a2);
      goto LABEL_4;
    }
    v7 = 5LL;
LABEL_12:
    UserSetLastError(v7, v4);
    return 0LL;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v7 = 0x2000000LL;
    goto LABEL_12;
  }
  gpidLogonUI = v3;
  v5 = 0;
LABEL_4:
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  return v5 >= 0;
}
