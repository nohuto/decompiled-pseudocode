/*
 * XREFs of GetTickCount_0 @ 0x180044EA2
 * Callers:
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x180087A58 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetTickCount_0()
{
  return GetTickCount();
}
