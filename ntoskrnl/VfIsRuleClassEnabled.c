/*
 * XREFs of VfIsRuleClassEnabled @ 0x140ABA430
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x140303BC8 (ViDifCheckCallbackInterception.c)
 *     ViInitSystemPhase1 @ 0x140B483D4 (ViInitSystemPhase1.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VfIsRuleClassEnabled(unsigned int a1)
{
  int v1; // eax

  if ( a1 >= 0x40 )
    return 0;
  v1 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a1 >> 5));
  return _bittest(&v1, a1 & 0x1F);
}
