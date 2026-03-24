/*
 * XREFs of SetWindowCompositionHolographic @ 0x1C021436C
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0037AA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0037554 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00379B0 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006DEB0 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionHolographic(__int64 *a1, __int128 *a2)
{
  bool v3; // zf
  int v5; // edi
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
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v11) )
  {
    if ( -__CFSHR__(v11[0], 14) == v5 )
      return 0;
    LODWORD(v11[0]) = (v5 << 13) | v11[0] & 0xFFFFDFFF;
    if ( !(unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v11) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v9 = (void *)ReferenceDwmApiPort(v8, v7);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v9, *a1, 23, a2);
    }
  }
  return v6;
}
