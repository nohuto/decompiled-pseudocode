/*
 * XREFs of SetWindowCompositionNCRenderingExiled @ 0x1C003804C
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0037AA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0037554 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00379B0 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006DEB0 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionNCRenderingExiled(__int64 *a1, __int128 *a2)
{
  bool v3; // zf
  int v5; // esi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  _OWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v3 = *(_DWORD *)a2 == 0;
  memset(v11, 0, sizeof(v11));
  v5 = !v3;
  v6 = -1073741816;
  v12 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v11) )
  {
    if ( -(v11[0] & 1) == v5 )
      return 0;
    LODWORD(v11[0]) = v5 | v11[0] & 0xFFFFFFFE;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v11) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v9 = (void *)ReferenceDwmApiPort(v8, v7);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v9, *a1, 11, a2);
    }
  }
  return v6;
}
