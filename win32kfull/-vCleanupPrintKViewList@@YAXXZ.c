/*
 * XREFs of ?vCleanupPrintKViewList@@YAXXZ @ 0x1C02B98A4
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00B6E30 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall vCleanupPrintKViewList(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *v3; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(_QWORD **)(v1 + 23392);
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)v2[4];
    Win32FreePool(v3);
  }
  *(_QWORD *)(v1 + 23392) = 0LL;
}
