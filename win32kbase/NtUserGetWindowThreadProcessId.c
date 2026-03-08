/*
 * XREFs of NtUserGetWindowThreadProcessId @ 0x1C0171800
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserGetWindowThreadProcessId @ 0x1C017CBD4 (UserGetWindowThreadProcessId.c)
 */

__int64 __fastcall NtUserGetWindowThreadProcessId(__int64 a1, _DWORD *a2)
{
  unsigned int WindowThreadProcessId; // edi
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  WindowThreadProcessId = UserGetWindowThreadProcessId(a1, &v5);
  if ( WindowThreadProcessId )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v5;
    }
  }
  else
  {
    UserSetLastError(1400);
  }
  return WindowThreadProcessId;
}
