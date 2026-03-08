/*
 * XREFs of PnpFreeVetoInformation @ 0x140961340
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14096ED2C (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PnpFreeVetoInformation(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      return result;
    if ( (_QWORD **)result[1] != a1 || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
LABEL_10:
      __fastfail(3u);
    *a1 = v3;
    v4 = result - 3;
    v3[1] = a1;
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      if ( (_QWORD *)*v4 == v4 )
        break;
      if ( (_QWORD *)v5[1] != v4 )
        goto LABEL_10;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 )
        goto LABEL_10;
      *v4 = v6;
      *(_QWORD *)(v6 + 8) = v4;
      ObfDereferenceObject((PVOID)*(v5 - 1));
      ExFreePoolWithTag(v5 - 1, 0x50706E50u);
    }
    ExFreePoolWithTag(v4, 0x4F706E50u);
  }
}
