/*
 * XREFs of ?WaitMaskIncludesUserInput@@YAHI@Z @ 0x1C0110768
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitMaskIncludesUserInput(char a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
    return 1;
  return v1;
}
