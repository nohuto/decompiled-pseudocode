/*
 * XREFs of EditionCallAccessibilityHook @ 0x1C01C85A0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall EditionCallAccessibilityHook(unsigned __int64 a1)
{
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
    return xxxCallHook(11LL, a1, 0LL, 10LL);
  else
    return 0LL;
}
