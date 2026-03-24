/*
 * XREFs of _SetWindowStationUser @ 0x1C012E51C
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1C012E3F0 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(_QWORD *a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rcx
  void *v12; // rax
  __int64 v13; // rcx

  v4 = a4;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    if ( a1[7] == gTermIO[0] )
      CitUserChange(*a2);
    v10 = (void *)a1[24];
    if ( v10 )
      Win32FreePool(v10);
    if ( !a3 )
    {
      a1[24] = 0LL;
LABEL_8:
      a1[23] = *a2;
      return 1LL;
    }
    v12 = (void *)Win32AllocPoolWithQuota(v4, 1702064981LL);
    a1[24] = v12;
    if ( v12 )
    {
      memmove(v12, a3, v4);
      goto LABEL_8;
    }
    v13 = 14LL;
  }
  else
  {
    v13 = 5LL;
  }
  UserSetLastError(v13, v8, v9);
  return 0LL;
}
