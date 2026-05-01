/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@MH@std@@PEAU12@V?$allocator@U?$pair@MH@std@@@2@@std@@YAPEAU?$pair@MH@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@MH@std@@@0@@Z @ 0x1804BF720
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@MH@std@@@?$vector@U?$pair@MH@std@@V?$allocator@U?$pair@MH@std@@@2@@std@@QEAAPEAU?$pair@MH@1@QEAU21@$$QEAU21@@Z @ 0x1804BEE8C (--$_Emplace_reallocate@U-$pair@MH@std@@@-$vector@U-$pair@MH@std@@V-$allocator@U-$pair@MH@std@@@2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move<std::pair<float,int> *,std::pair<float,int> *,std::allocator<std::pair<float,int>>>(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r9

  v3 = 0LL;
  v4 = (a2 - a1 + 7) >> 3;
  if ( a1 > a2 )
    v4 = 0LL;
  if ( v4 )
  {
    v5 = a1 - (_QWORD)a3;
    do
    {
      ++v3;
      *a3 = *(_QWORD *)((char *)a3 + v5);
      ++a3;
    }
    while ( v3 != v4 );
  }
  return a3;
}
