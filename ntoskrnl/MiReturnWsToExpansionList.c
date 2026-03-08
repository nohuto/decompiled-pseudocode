/*
 * XREFs of MiReturnWsToExpansionList @ 0x1402A5FD4
 * Callers:
 *     MiAllowWorkingSetExpansion @ 0x1402A5F58 (MiAllowWorkingSetExpansion.c)
 *     KiInSwapProcesses @ 0x1402C0180 (KiInSwapProcesses.c)
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 *     MiEmptyTargetedWorkingSet @ 0x1406322E8 (MiEmptyTargetedWorkingSet.c)
 *     MiHandleForceTrimWorkingSets @ 0x1406326A0 (MiHandleForceTrimWorkingSets.c)
 * Callees:
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 */

_QWORD *__fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 24);
  v3 = (_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16928LL);
  if ( a2 )
  {
    result = (_QWORD *)*v3;
    if ( *(_QWORD **)(*v3 + 8LL) == v3 )
    {
      *v2 = result;
      *(_QWORD *)(a1 + 32) = v3;
      result[1] = v2;
      *v3 = v2;
      goto LABEL_4;
    }
LABEL_8:
    __fastfail(3u);
  }
  result = *(_QWORD **)(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16936LL);
  if ( (_QWORD *)*result != v3 )
    goto LABEL_8;
  *v2 = v3;
  *(_QWORD *)(a1 + 32) = result;
  *result = v2;
  v3[1] = v2;
LABEL_4:
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    return (_QWORD *)KeSignalGate(v5, 1LL);
  return result;
}
