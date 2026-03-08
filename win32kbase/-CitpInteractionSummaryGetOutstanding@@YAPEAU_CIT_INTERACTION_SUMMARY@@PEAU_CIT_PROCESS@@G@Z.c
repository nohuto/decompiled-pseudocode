/*
 * XREFs of ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0272B24
 * Callers:
 *     CitProcessCallout @ 0x1C006F63C (CitProcessCallout.c)
 * Callees:
 *     <none>
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryGetOutstanding(struct _CIT_PROCESS *a1)
{
  __int16 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY *result; // rax

  if ( (BYTE8(xmmword_1C02D4D84) & 1) == 0 )
    return 0LL;
  if ( (BYTE8(xmmword_1C02D4D84) & 2) != 0 )
  {
    v2 = *((_WORD *)a1 + 21);
    if ( !v2 )
      return 0LL;
    v3 = *((unsigned __int16 *)a1 + 20);
    if ( (unsigned int)v3 >= *((_DWORD *)xmmword_1C02D4DA0 + 14) )
      return 0LL;
    v4 = *(_QWORD *)xmmword_1C02D4DA0 + 96 * v3;
    if ( *(_WORD *)(v4 + 32) != v2 || *(_QWORD *)(v4 + 56) != *((_QWORD *)a1 + 8) || !v4 )
      return 0LL;
    result = *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 88);
  }
  else
  {
    result = (struct _CIT_INTERACTION_SUMMARY *)*((_QWORD *)a1 + 4);
  }
  if ( result && *(struct _CIT_INTERACTION_SUMMARY **)result != result )
  {
    *((_WORD *)result + 57) |= 0x10u;
    return result;
  }
  return 0LL;
}
