/*
 * XREFs of sub_18012022C @ 0x18012022C
 * Callers:
 *     sub_180120530 @ 0x180120530 (sub_180120530.c)
 *     sub_180120B90 @ 0x180120B90 (sub_180120B90.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_DWORD *__fastcall sub_18012022C(_DWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  a1[2] = -1073741823;
  *(_QWORD *)a1 = off_18014AFF8;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 4);
  if ( LOBYTE(v2[1].DebugInfo) )
  {
    LOBYTE(v2[1].DebugInfo) = 0;
    DeleteCriticalSection(v2);
  }
  sub_18006A148(a1);
  return a1;
}
