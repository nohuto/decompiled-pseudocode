/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C00EC5C8
 * Callers:
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00402A0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01E0780 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( IsTopLevelWindow(a1) )
    return 1LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 26LL) & 8) == 0 )
    return 0LL;
  LOBYTE(v2) = GetTopLevelWindow(v1) != 0;
  return v2;
}
