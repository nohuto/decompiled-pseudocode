/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C0125320
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0037AA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     SetWindowCompositionInfo @ 0x1C0037554 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00379B0 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006DEB0 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(__int64 *a1, __int128 *a2)
{
  int v2; // ebp
  int v4; // edi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  _OWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v2 = *(_DWORD *)a2;
  memset(v11, 0, sizeof(v11));
  v4 = v2 != 0;
  v12 = 0LL;
  v6 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v11) )
  {
    if ( -__CFSHR__(v11[0], 13) == v4 )
    {
      return 0;
    }
    else
    {
      LODWORD(v11[0]) = v11[0] & 0xFFFFEFFF | (v4 << 12);
      if ( (unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v11) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v9 = (void *)ReferenceDwmApiPort(v8, v7);
          v6 = DwmAsyncSetCompositionAttribute(v9, *a1, 20, a2);
        }
        else
        {
          v6 = 0;
        }
        if ( !v2 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x24u, *a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v6;
}
