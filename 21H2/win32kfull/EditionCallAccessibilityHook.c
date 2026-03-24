/*
 * XREFs of EditionCallAccessibilityHook @ 0x1C01D7790
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 EditionCallAccessibilityHook()
{
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
    return xxxCallHook(11, 2uLL, 0LL, 10);
  else
    return 0LL;
}
