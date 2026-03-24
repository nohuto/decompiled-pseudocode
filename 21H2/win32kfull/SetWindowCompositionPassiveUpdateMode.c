/*
 * XREFs of SetWindowCompositionPassiveUpdateMode @ 0x1C0164018
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0037AA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0037554 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00379B0 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006DEB0 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionPassiveUpdateMode(__int64 *a1, __int128 *a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  memset(v10, 0, sizeof(v10));
  v4 = -1073741816;
  v11 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10) )
  {
    v5 = *(_DWORD *)a2 != 0;
    if ( -__CFSHR__(v10[0], 16) == v5 )
      return 0;
    LODWORD(v10[0]) = v10[0] & 0xFFFF7FFF | (v5 << 15);
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v10) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v8 = (void *)ReferenceDwmApiPort(v7, v6);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v8, *a1, 25, a2);
    }
  }
  return v4;
}
