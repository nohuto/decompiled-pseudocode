/*
 * XREFs of NullifyLookasideRef @ 0x1C021B890
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     MNFlushDestroyedPopups @ 0x1C021BC20 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C021BF30 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NullifyLookasideRef(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  v1 = *(_DWORD *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 12) = 1;
  if ( v1 )
    return Win32FreeToPagedLookasideList(gpStackRefLookAside, a1);
  return result;
}
