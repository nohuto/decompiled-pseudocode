/*
 * XREFs of NtUserGetWindowThreadProcessId @ 0x1C015B100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     UserGetWindowThreadProcessId @ 0x1C0166F24 (UserGetWindowThreadProcessId.c)
 */

__int64 __fastcall NtUserGetWindowThreadProcessId(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  unsigned int WindowThreadProcessId; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  WindowThreadProcessId = UserGetWindowThreadProcessId(a1, &v8);
  if ( WindowThreadProcessId )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v8;
    }
  }
  else
  {
    UserSetLastError(1400LL, v3, v5, v6);
  }
  return WindowThreadProcessId;
}
