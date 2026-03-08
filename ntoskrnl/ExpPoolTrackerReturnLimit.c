/*
 * XREFs of ExpPoolTrackerReturnLimit @ 0x140313B50
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExInsertPoolTag @ 0x1403B51DC (ExInsertPoolTag.c)
 *     ExRemovePoolTag @ 0x1403BD8EC (ExRemovePoolTag.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140462C3A (ExpRemovePoolTrackerExpansion.c)
 *     ExPoolCleanupExpansionTable @ 0x140604EC8 (ExPoolCleanupExpansionTable.c)
 *     ExpFreeHeapSpecialPool @ 0x14060CCF8 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExpPoolTrackerReturnLimit(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  signed __int64 result; // rax
  signed __int64 v6; // rcx
  __int64 v7; // rbx
  signed __int64 v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // r11
  signed __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  __int64 v14; // r8

  v3 = a1;
  v4 = 8LL;
  result = 24LL;
  if ( a1 != 1 )
  {
    v4 = 32LL;
    result = 48LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(result + a3));
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + a3), -a2);
  if ( *(_QWORD *)(a3 + 72) )
  {
    v7 = v3;
    if ( (*(_BYTE *)(a3 + 8 * v3 + 56) & 1) == 0 )
    {
      v8 = *(_QWORD *)(a3 + 8 * v3 + 56);
      v9 = (4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      v10 = 128LL;
      if ( v9 != 64 )
        v10 = v9;
      v11 = v10 + v6;
      if ( v6 < v8 )
      {
        while ( v11 < v8 )
        {
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8 * v7 + 56), v11, v8);
          v12 = v8 == v13;
          v8 = v13;
          if ( v12 )
          {
            result = abs64(v13 - v11);
            v14 = *(_QWORD *)(a3 + 72) + 24 * v7;
            if ( *(_QWORD *)(v14 + 16) || *(_QWORD *)(v14 + 24) )
              return _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), -result);
            return result;
          }
          result = *(_QWORD *)(v4 + a3);
          v11 = v10 + result;
          if ( result >= v8 )
            return result;
        }
      }
    }
  }
  return result;
}
