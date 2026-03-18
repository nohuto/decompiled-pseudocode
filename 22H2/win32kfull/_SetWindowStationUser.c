/*
 * XREFs of _SetWindowStationUser @ 0x1C00B5C2C
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1C00B5B00 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(_QWORD *a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  void *v8; // rcx
  void *v10; // rax
  __int64 v11; // rcx

  v4 = a4;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    if ( a1[7] == gTermIO[0] )
      CitUserChange(*a2);
    v8 = (void *)a1[24];
    if ( v8 )
      Win32FreePool(v8);
    if ( !a3 )
    {
      a1[24] = 0LL;
LABEL_8:
      a1[23] = *a2;
      return 1LL;
    }
    v10 = (void *)Win32AllocPoolWithQuotaZInit(v4, 1702064981LL);
    a1[24] = v10;
    if ( v10 )
    {
      memmove(v10, a3, v4);
      goto LABEL_8;
    }
    v11 = 14LL;
  }
  else
  {
    v11 = 5LL;
  }
  UserSetLastError(v11);
  return 0LL;
}
