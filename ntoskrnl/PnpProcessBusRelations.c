/*
 * XREFs of PnpProcessBusRelations @ 0x140862020
 * Callers:
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 * Callees:
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 */

__int64 __fastcall PnpProcessBusRelations(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3)
{
  _QWORD *v5; // rbx
  __int64 result; // rax

  v5 = *(_QWORD **)(a1 + 8);
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    result = PnpProcessRelation((__int64)v5, a2, a3, a4, BugCheckParameter3);
    if ( (int)result < 0 )
      break;
    v5 = (_QWORD *)*v5;
    if ( !v5 )
      return 0LL;
  }
  return result;
}
