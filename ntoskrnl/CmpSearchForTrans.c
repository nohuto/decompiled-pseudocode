/*
 * XREFs of CmpSearchForTrans @ 0x1406B5904
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1406B570C (CmpTransSearchAddTrans.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140A19630 (CmpTransUowIsEqual.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpSearchForTrans(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 NextElement; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = a1 + 16;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(v3, &v9, 0LL);
    v7 = NextElement;
    if ( !NextElement )
      break;
    if ( a2 && a2 == *(_QWORD *)(NextElement + 56) || a3 && (unsigned __int8)CmpTransUowIsEqual(a3, NextElement + 88) )
      return v7;
  }
  return 0LL;
}
