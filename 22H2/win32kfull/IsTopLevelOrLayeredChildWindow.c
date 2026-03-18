/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C00B4624
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00EC2A0 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00EF6D0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01DF6D0 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) )
    return 1LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 26LL) & 8) == 0 )
    return 0LL;
  LOBYTE(v2) = GetTopLevelWindow(v1) != 0;
  return v2;
}
