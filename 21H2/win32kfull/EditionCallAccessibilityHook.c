/*
 * XREFs of EditionCallAccessibilityHook @ 0x1C01D2BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall EditionCallAccessibilityHook(unsigned __int64 a1)
{
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
    return xxxCallHook(11, a1, 0LL, 10);
  else
    return 0LL;
}
