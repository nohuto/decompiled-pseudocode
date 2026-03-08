/*
 * XREFs of PopFxWorkOrderWatchdog @ 0x14058A180
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

void __fastcall __noreturn PopFxWorkOrderWatchdog(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(_QWORD *)(a2 + 168);
  PopFxBugCheck(0x618uLL, a2, v2, 0LL);
}
