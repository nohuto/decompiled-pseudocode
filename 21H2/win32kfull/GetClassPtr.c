/*
 * XREFs of GetClassPtr @ 0x1C00BF4B0
 * Callers:
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     _GetClassInfoEx @ 0x1C00BC568 (_GetClassInfoEx.c)
 *     _GetWOWClass @ 0x1C01E92D4 (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C007A650 (_InnerGetClassPtr.c)
 */

_QWORD *__fastcall GetClassPtr(__int16 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  _QWORD *result; // rax
  __int64 v7; // rdi

  v3 = (_QWORD *)(a2 + 344);
  result = InnerGetClassPtr(a1, (_QWORD *)(a2 + 344), a3);
  if ( !result )
  {
    result = InnerGetClassPtr(a1, (_QWORD *)(a2 + 352), 0LL);
    if ( !result )
    {
      v7 = hModClient;
      result = InnerGetClassPtr(a1, v3, hModClient);
      if ( !result )
        return InnerGetClassPtr(a1, (_QWORD *)(a2 + 352), v7);
    }
  }
  return result;
}
