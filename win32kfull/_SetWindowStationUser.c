/*
 * XREFs of _SetWindowStationUser @ 0x1C00EE0CC
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1C00EDFA0 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(_QWORD *a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  void *v8; // rcx
  void *v10; // rax
  int v11; // ecx

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
    v11 = 14;
  }
  else
  {
    v11 = 5;
  }
  UserSetLastError(v11);
  return 0LL;
}
